from itertools import cycle
import os
import math
import yaml
import pyqtgraph as pg

from python_qt_binding import loadUi
from python_qt_binding.QtCore import Qt, QTimer
from python_qt_binding.QtWidgets import (
    QMainWindow,
    QWidget,
    QTabWidget,
    QGroupBox,
    QVBoxLayout,
    QHBoxLayout,
    QLabel,
    QMenu,
    QAction,
    QStyle,
    QRadioButton,
    QToolButton,
    QPlainTextEdit,
    QSlider,
    QPushButton,
)

from ament_index_python.packages import get_package_share_directory
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy, QoSDurabilityPolicy
from motion_system_msgs.msg import MotorStatus
from std_msgs.msg import Int8MultiArray
import rclpy

CW_NEW_SET_POINT_ZEROERR = 0x103F
CW_NEW_SET_POINT_MINAS = 0x003F

RAD_2_DEG = 180.0 / math.pi
DEG_2_RAD = math.pi / 180.0

RAD_2_RPM = 60.0 / (2.0 * math.pi)
RPM_2_RAD = 2.0 * math.pi / 60.0

class MotionSystemWidget(QMainWindow):
    _QOS_REKL5V = QoSProfile(
        reliability=QoSReliabilityPolicy.BEST_EFFORT,
        history=QoSHistoryPolicy.KEEP_LAST,
        depth=1,
        durability=QoSDurabilityPolicy.VOLATILE,
    )

    def __init__(self, node):
        super().__init__()

        ui_file_path = os.path.join(
            get_package_share_directory('motion_system_rqt'),
            'resource',
            'base.ui',
        )
        
        try:
            loadUi(ui_file_path, self)
        except Exception as e:
            rclpy.logging.get_logger('MotionSystemWidget').error(f'Failed to load UI file: {e}')
            raise

        self._node = node

        self._update_timer = QTimer(self)
        self._update_timer.timeout.connect(self._on_update_timer)
        self._update_timer.start(10)

        self._current_controller_index = None
        
        self._node.declare_parameter('config_file', '')
        self._config_file = str(self._node.get_parameter('config_file').value)
        self._master_infos, self._motor_infos = self._load_motor_infos()

        self._motor_status = None
        self._is_visible = False
        self._jog_value = ""
        self._positions = []
        self._velocities = []
        self._torques = []

        self._motor_status_subscriber = self._node.create_subscription(
            MotorStatus,
            'motor_status',
            self.motor_status_callback,
            self._QOS_REKL5V,
        )
        self._motor_command_publisher = self._node.create_publisher(
            MotorStatus,
            'motor_command',
            self._QOS_REKL5V,
        )

        self._initialize_widget()

    def _load_motor_infos(self):
        if not self._config_file:
            self._node.get_logger().warning('config_file parameter is empty.')
            return [], []

        try:
            with open(self._config_file, 'r', encoding='utf-8') as yaml_file:
                config = yaml.safe_load(yaml_file) or {}
        except Exception as exc:
            self._node.get_logger().error(f'Failed to load motor config: {exc}')
            return [], []

        drivers = {
            driver['id']: driver
            for driver in config.get('drivers', [])
            if isinstance(driver, dict) and 'id' in driver
        }

        motor_infos = []
        master_infos = []
        for master in config.get('masters', []):
            if not isinstance(master, dict):
                continue

            master_infos.append({
                'id': master.get('id'),
                'type': master.get('type'),
                'number_of_slaves': master.get('number_of_slaves'),
                'master_index': master.get('master_index'),
            })

            for slave in master.get('slaves', []):
                if not isinstance(slave, dict):
                    continue

                driver_id = slave.get('driver_id')
                driver_info = drivers.get(driver_id, {})
                motor_infos.append({
                    'controller_index': slave.get('controller_index'),
                    'profile_mode': slave.get('profile_mode'),
                    'driver_id': driver_id,
                    'alias': slave.get('alias'),
                    'position': slave.get('position'),
                    'vendor_id': slave.get('vendor_id'),
                    'product_id': slave.get('product_id'),
                    'type': driver_info.get('type'),
                    'pulse_per_revolution': driver_info.get('pulse_per_revolution'),
                    'rated_torque': driver_info.get('rated_torque'),
                    'unit_torque': driver_info.get('unit_torque'),
                    'lower': driver_info.get('lower'),
                    'upper': driver_info.get('upper'),
                    'speed': driver_info.get('speed'),
                    'acceleration': driver_info.get('acceleration'),
                    'deceleration': driver_info.get('deceleration'),
                    'profile_velocity': driver_info.get('profile_velocity'),
                    'profile_acceleration': driver_info.get('profile_acceleration'),
                    'profile_deceleration': driver_info.get('profile_deceleration'),
                    'param_file': driver_info.get('param_file'),
                })

        return master_infos, motor_infos

    def _add_select_motor_menu(self):
        menu = QMenu(self._select_motor_button)
        for motor_info in self._motor_infos:
            action = QAction(str(motor_info["controller_index"]), self._select_motor_button)
            action.triggered.connect(lambda _, index=motor_info["controller_index"]: self._on_select_motor_clicked(index))
            menu.addAction(action)
        self._select_motor_button.setMenu(menu)

    def _initialize_widget(self):
        q_tab_widget = self.findChild(QTabWidget, 'TabWidget')
        if q_tab_widget is None:
            return

        style = self.style()
        refresh_icon = style.standardIcon(style.SP_BrowserReload)

        first_tab = QWidget()
        first_tab_layout = QVBoxLayout(first_tab)

        reset_button = QPushButton()
        reset_button.setFixedWidth(40)
        reset_button.setIcon(refresh_icon)
        reset_button.clicked.connect(self._on_reset_button_clicked)

        status_monitor = QGroupBox("Status Monitor", first_tab)
        status_monitor_layout = QVBoxLayout(status_monitor)

        visible_button = QRadioButton("Visible")
        visible_button.setChecked(False)
        visible_button.clicked.connect(self._on_visible_button_clicked)

        self._pos_plot_widget = pg.PlotWidget(title="Motor infos")
        #self._vel_plot_widget = pg.PlotWidget(title="Velocity")
        #self._tau_plot_widget = pg.PlotWidget(title="Torque")
        self._pos_plot_widget.setBackground('w')
        #self._vel_plot_widget.setBackground('w')
       # self._tau_plot_widget.setBackground('w')

        status_monitor_layout.addWidget(visible_button, 0, Qt.AlignRight)
        status_monitor_layout.addWidget(self._pos_plot_widget)
        #status_monitor_layout.addWidget(self._vel_plot_widget)
        #status_monitor_layout.addWidget(self._tau_plot_widget)

        command_console = QGroupBox("Command Console", first_tab)
        command_console_layout = QVBoxLayout(command_console)

        command_slider = QGroupBox("Slider", command_console)
        command_slider_layout = QHBoxLayout(command_slider)

        self._cur_val_label = QLabel("Current Value: ")
        self._cur_val_label.setFixedWidth(330)

        self._command_slider = QSlider(Qt.Horizontal)
        self._command_slider.valueChanged.connect(self._on_slider_value_changed)

        self._max_value_label = QLabel()
        self._max_value_label.setFixedWidth(80)

        self._select_motor_button = QToolButton()
        self._select_motor_button.setFixedWidth(300)
        self._select_motor_button.setText("Select a Motor ...")
        self._select_motor_button.setPopupMode(QToolButton.MenuButtonPopup)
        self._add_select_motor_menu()

        command_slider_layout.addWidget(self._cur_val_label)
        command_slider_layout.addWidget(self._command_slider)
        command_slider_layout.addWidget(self._max_value_label)
        command_slider_layout.addWidget(self._select_motor_button)

        command_jog = QGroupBox("Jog", command_console)
        command_jog_layout = QHBoxLayout(command_jog)
        
        forward_button = QPushButton("Forward")
        forward_button.clicked.connect(self._on_forward_button_clicked)

        self._value_text = QPlainTextEdit()
        self._value_text.setPlaceholderText("Enter Value ...")
        self._value_text.setMaximumSize(300, 50)

        backward_button = QPushButton("Backward")
        backward_button.clicked.connect(self._on_backward_button_clicked)

        command_jog_layout.addWidget(forward_button)
        command_jog_layout.addWidget(self._value_text)
        command_jog_layout.addWidget(backward_button)

        command_console_layout.addWidget(command_slider)
        command_console_layout.addWidget(command_jog)

        first_tab_layout.addWidget(reset_button, 0, Qt.AlignRight)
        first_tab_layout.addWidget(status_monitor)
        first_tab_layout.addWidget(command_console)

        q_tab_widget.addTab(first_tab, "Motion System")


    def _on_reset_button_clicked(self):
        self._current_controller_index = None
        self._is_visible = False
        self._jog_value = ""
        self._positions = []
        self._velocities = []
        self._torques = []
        self._add_select_motor_menu()

    def _on_visible_button_clicked(self):
        self._is_visible = False if self._is_visible else True

    def _on_slider_value_changed(self, value):
        if self._current_controller_index is None:
            return

        n_slaves = self._master_infos[0]['number_of_slaves']

        msg = MotorStatus()
        msg.number_of_target_interfaces = [0] * n_slaves
        msg.target_interface_id = [Int8MultiArray(data=[0] * n_slaves) for _ in range(n_slaves)]
        msg.controller_index = [0] * n_slaves
        msg.controlword = [0] * n_slaves
        msg.statusword = [0] * n_slaves
        msg.errorcode = [0] * n_slaves
        msg.position = [0.0] * n_slaves
        msg.velocity = [0.0] * n_slaves
        msg.torque = [0.0] * n_slaves

        for idx in range(n_slaves):
            msg.controller_index[idx] = idx
            
            if idx == self._current_controller_index:
                if self._motor_infos[idx]['profile_mode'] == 0:
                    msg.number_of_target_interfaces[idx] = 2
                    msg.target_interface_id[idx] = Int8MultiArray(data=[0, 1])
                    
                    if self._motor_infos[idx]['driver_id'] == 0:
                        msg.controlword[idx] = int(CW_NEW_SET_POINT_ZEROERR)
                    elif self._motor_infos[idx]['driver_id'] == 1:
                        msg.controlword[idx] = int(CW_NEW_SET_POINT_MINAS)

                    msg.position[idx] = value / 100.0 * DEG_2_RAD

                    if value < 0:
                        value = -value
                        self._cur_val_label.setText(f"Current Value:  -{int(value // 100)}.{int(value % 100)}")
                    else:
                        self._cur_val_label.setText(f"Current Value:  {int(value // 100)}.{int(value % 100)}")

                elif self._motor_infos[idx]['profile_mode'] == 1:
                    msg.number_of_target_interfaces[idx] = 1
                    msg.target_interface_id[idx] = Int8MultiArray(data=[2])
                    
                    msg.velocity[idx] = value * RPM_2_RAD

                    if value < 0:
                        value = -value
                        self._cur_val_label.setText(f"Current Value:  -{int(value)}")
                    else:
                        self._cur_val_label.setText(f"Current Value:  {int(value)}")
                    
        self._motor_command_publisher.publish(msg)

    def _on_select_motor_clicked(self, index):
        if self._motor_status is None:
            return

        self._current_controller_index = index
        self._select_motor_button.setText(f"Motor {index}")

        motor_info = self._motor_infos[index]
        if motor_info["profile_mode"] == 0:
            lower = int(motor_info["lower"] * RAD_2_DEG * 100)
            upper = int(motor_info["upper"] * RAD_2_DEG * 100)

            current_value = int(self._motor_status.position[index] * RAD_2_DEG * 100)
        
            if current_value < 0:
                self._cur_val_label.setText(f"Current Value:  -{int(-current_value // 100)}.{int(-current_value % 100)}")
            else:
                self._cur_val_label.setText(f"Current Value:  {int(current_value // 100)}.{int(current_value % 100)}")
            self._max_value_label.setText(f"{int(upper // 100)}.{int(upper % 100)}")

        elif motor_info["profile_mode"] == 1:
            rpm = int(motor_info["speed"])
            lower = -int(rpm)
            upper = int(rpm)
            current_value = int(self._motor_status.velocity[index] * RAD_2_RPM)

            if current_value < 0:
                self._cur_val_label.setText(f"Current Value:  -{int(-current_value)}")
            else:
                self._cur_val_label.setText(f"Current Value:  {int(current_value)}")
            self._max_value_label.setText(f"{int(upper)}")
            
        self._command_slider.setRange(lower, upper)
        self._command_slider.setValue(current_value)
        
    def _on_forward_button_clicked(self):
        if self._motor_status is None:
            return

        if self._jog_value != "":
            n_slaves = self._master_infos[0]['number_of_slaves']
            msg = MotorStatus()
            msg.number_of_target_interfaces = [0] * n_slaves
            msg.target_interface_id = [Int8MultiArray(data=[0] * n_slaves) for _ in range(n_slaves)]
            msg.controller_index = [0] * n_slaves
            msg.controlword = [0] * n_slaves
            msg.statusword = [0] * n_slaves
            msg.errorcode = [0] * n_slaves
            msg.position = [0.0] * n_slaves
            msg.velocity = [0.0] * n_slaves
            msg.torque = [0.0] * n_slaves
            
            if self._motor_infos[self._current_controller_index]['profile_mode'] == 0:
                current_position = self._motor_status.position[self._current_controller_index]

                msg.number_of_target_interfaces[self._current_controller_index] = 2
                msg.target_interface_id[self._current_controller_index] = Int8MultiArray(data=[0, 1])
                if self._motor_infos[self._current_controller_index]['driver_id'] == 0:
                    msg.controlword[self._current_controller_index] = int(CW_NEW_SET_POINT_ZEROERR)
                elif self._motor_infos[self._current_controller_index]['driver_id'] == 1:
                    msg.controlword[self._current_controller_index] = int(CW_NEW_SET_POINT_MINAS)
                msg.position[self._current_controller_index] = current_position + self._jog_value / 100.0 * DEG_2_RAD 

                upper = self._motor_infos[self._current_controller_index]['upper'] * RAD_2_DEG * 100
                value = int(current_position * RAD_2_DEG * 100 + self._jog_value)
                current_value = int(value if value < upper else upper)
                
                if current_value < 0:
                    self._cur_val_label.setText(f"Current Value:  -{int(-current_value // 100)}.{int(-current_value % 100)}")
                else:
                    self._cur_val_label.setText(f"Current Value:  {int(current_value // 100)}.{int(current_value % 100)}")
                self._command_slider.setValue(current_value)

            elif self._motor_infos[self._current_controller_index]['profile_mode'] == 1:
                msg.number_of_target_interfaces[self._current_controller_index] = 1
                msg.target_interface_id[self._current_controller_index] = Int8MultiArray(data=[2])
                msg.velocity[self._current_controller_index] = self._jog_value * RPM_2_RAD

                upper = self._motor_infos[self._current_controller_index]['speed']
                value = self._jog_value
                current_value = int(value if value < upper else upper)

                if current_value < 0:
                    self._cur_val_label.setText(f"Current Value:  -{int(-current_value)}")
                else:
                    self._cur_val_label.setText(f"Current Value:  {int(current_value)}")
                self._command_slider.setValue(current_value)

            self._motor_command_publisher.publish(msg)

    def _on_backward_button_clicked(self):
        if self._motor_status is None:
            return

        if self._jog_value != "":
            n_slaves = self._master_infos[0]['number_of_slaves']
            msg = MotorStatus()
            msg.number_of_target_interfaces = [0] * n_slaves
            msg.target_interface_id = [Int8MultiArray(data=[0] * n_slaves) for _ in range(n_slaves)]
            msg.controller_index = [0] * n_slaves
            msg.controlword = [0] * n_slaves
            msg.statusword = [0] * n_slaves
            msg.errorcode = [0] * n_slaves
            msg.position = [0.0] * n_slaves
            msg.velocity = [0.0] * n_slaves
            msg.torque = [0.0] * n_slaves
            
            if self._motor_infos[self._current_controller_index]['profile_mode'] == 0:
                current_position = self._motor_status.position[self._current_controller_index]

                msg.number_of_target_interfaces[self._current_controller_index] = 2
                msg.target_interface_id[self._current_controller_index] = Int8MultiArray(data=[0, 1])
                if self._motor_infos[self._current_controller_index]['driver_id'] == 0:
                    msg.controlword[self._current_controller_index] = int(CW_NEW_SET_POINT_ZEROERR)
                elif self._motor_infos[self._current_controller_index]['driver_id'] == 1:
                    msg.controlword[self._current_controller_index] = int(CW_NEW_SET_POINT_MINAS)
                msg.position[self._current_controller_index] = current_position - self._jog_value / 100.0 * DEG_2_RAD

                lower = self._motor_infos[self._current_controller_index]['lower'] * RAD_2_DEG * 100
                value = int(current_position * RAD_2_DEG * 100 - self._jog_value)
                current_value = int(value if value > lower else lower)

                if current_value < 0:
                    self._cur_val_label.setText(f"Current Value:  -{int(-current_value // 100)}.{int(-current_value % 100)}")
                else:
                    self._cur_val_label.setText(f"Current Value:  {int(current_value // 100)}.{int(current_value % 100)}")
                self._command_slider.setValue(current_value)

            elif self._motor_infos[self._current_controller_index]['profile_mode'] == 1:
                msg.number_of_target_interfaces[self._current_controller_index] = 1
                msg.target_interface_id[self._current_controller_index] = Int8MultiArray(data=[2])
                msg.velocity[self._current_controller_index] = -self._jog_value * RPM_2_RAD

                lower = self._motor_infos[self._current_controller_index]['lower']
                value = self._jog_value
                current_value = int(value if value > lower else lower)

                if current_value < 0:
                    self._cur_val_label.setText(f"Current Value:  -{int(-current_value)}")
                else:
                    self._cur_val_label.setText(f"Current Value:  {int(current_value)}")
                self._command_slider.setValue(current_value)

            self._motor_command_publisher.publish(msg)
    
    def _on_update_timer(self):
        if self._is_visible:
            self._plot_graph()
        
        self._jog_value = self._value_text.toPlainText()
        if self._jog_value != "":
            self._jog_value = float(self._jog_value)
    

    def _plot_graph(self):
        if self._current_controller_index is None:
            return

        if (len(self._positions) == 50):
            self._pos_plot_widget.clear()
            #self._vel_plot_widget.clear()
            #self._tau_plot_widget.clear()

            self._pos_plot_widget.addLegend(offset=(10, 10))
            #self._vel_plot_widget.addLegend(offset=(10, 10))
            #self._tau_plot_widget.addLegend(offset=(10, 10))

            #self._pos_plot_widget.setLabel('left', 'Position')
            #self._vel_plot_widget.setLabel('left', 'Velocity')
            #self._tau_plot_widget.setLabel('left', 'Torque')

            colors = cycle(['b', 'g', 'r'])
            motor_info = self._motor_infos[self._current_controller_index]
            idx = motor_info["controller_index"]
            pos = [raw[idx] for raw in self._positions]
            vel = [raw[idx] for raw in self._velocities]
            tau = [raw[idx] for raw in self._torques]

            color = next(colors)
            pen = pg.mkPen(color=color, width=3)
            self._pos_plot_widget.plot(pos, pen=pen, name=f'{motor_info["alias"]}_position')
            color = next(colors)
            pen = pg.mkPen(color=color, width=3)
            self._pos_plot_widget.plot(vel, pen=pen, name=f'{motor_info["alias"]}_velocity')
            color = next(colors)
            pen = pg.mkPen(color=color, width=3)
            self._pos_plot_widget.plot(tau, pen=pen, name=f'{motor_info["alias"]}_torque')

    def motor_status_callback(self, msg):
        self._motor_status = msg
        self._positions.append(msg.position)
        self._velocities.append(msg.velocity)
        self._torques.append(msg.torque)

        if len(self._positions) > 50:
            self._positions.pop(0)
            self._velocities.pop(0)
            self._torques.pop(0)


    def shutdown_widget(self):
        self._update_timer.stop()
        self._node.destroy_node()