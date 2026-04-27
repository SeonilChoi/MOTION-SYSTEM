from python_qt_binding.QtWidgets import (
    QWidget,
    QGroupBox,
    QVBoxLayout,
    QHBoxLayout,
    QPlainTextEdit,
)

from motion_system_rqt.motion_system_widget import MotionSystemWidget

class RockingChairWidget(MotionSystemWidget):
    def __init__(self, node):
        super().__init__(node)

    def _add_select_motion_button(self):
        menu = QMenu(self._select_motion_button)
        action = QAction("Standard Motion", self._select_motion_button)
        action.triggered.connect(self._on_standard_motion_clicked)

    def _initialize_widget(self):
        super()._initialize_widget()

        second_tab = QWidget()
        second_tab_layout = QVBoxLayout(second_tab)

        motion_controller = QGroupBox("Rocking Chair Controller", second_tab)
        motion_controller_layout = QVBoxLayout(motion_controller)

        motion_config = QGroupBox("Motion Configuration", motion_controller)
        motion_config_layout = QHBoxLayout(motion_config)

        self._start_position = QPlainTextEdit()
        self._start_position.setPlaceholderText("Enter Start Position ...")
        self._start_position.setMaximumSize(350, 50)

        self._end_position = QPlainTextEdit()
        self._end_position.setPlaceholderText("Enter End Position ...")
        self._end_position.setMaximumSize(350, 50)

        self._select_motion_button = QToolButton()
        self._select_motion_button.setFixedWidth(350)
        self._select_motion_button.setText("Select a Motion ...")
        self._select_motion_button.setPopupMode(QToolButton.MenuButtonPopup)
        self._add_select_motion_button()

        motion_config_layout.addWidget(self._start_position)
        motion_config_layout.addWidget(self._end_position)

        motion_controller_layout.addWidget(motion_config)

        second_tab_layout.addWidget(motion_controller)

        self.q_tab_widget.addTab(second_tab, "Rocking Chair")