from rqt_gui_py.plugin import Plugin

from motion_system_rqt.motion_system_widget import MotionSystemWidget
from motion_system_rqt.rocking_chair_widget import RockingChairWidget

class MotionSystemController(Plugin):
    def __init__(self, context):
        super().__init__(context)

        self.setObjectName('MotionSystemController')
        
        #self.widget = MotionSystemWidget(context.node)
        self.widget = RockingChairWidget(context.node)

        serial_number = context.serial_number()
        if serial_number >= 1:
            self.widget.setWindowTitle(self.widget.windowTitle() + f' {serial_number}')
        
        context.add_widget(self.widget)

    def shutdown_plugin(self):
        print('MotionSystemController shutdown')
        self.widget.shutdown_widget()