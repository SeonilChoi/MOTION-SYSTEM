from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy
from std_msgs.msg import Int8MultiArray
from motion_system_msgs.msg import MotorStatus

import rclpy
import math

N_MOTORS = 1
TIMESTEP = 0.01
FREQUENCY = 1.0

START_POSITION = 0.0
FINAL_POSITION = 1.5

CW_NEW_SET_POINT_ZEROERR = 0x103F


def _motor_command_qos() -> QoSProfile:
    return QoSProfile(
        depth=1,
        reliability=QoSReliabilityPolicy.BEST_EFFORT,
        history=QoSHistoryPolicy.KEEP_LAST,
    )


class RockingChairPositionCommand(Node):
    def __init__(self) -> None:
        super().__init__('rocking_chair_position_command')

        self._n = N_MOTORS
        self._dt = TIMESTEP
        self._freq = FREQUENCY
        self._start_position = START_POSITION
        self._final_position = FINAL_POSITION

        self._t = 0.0
        
        self._command_publisher = self.create_publisher(
            MotorStatus, 'motor_command', _motor_command_qos()
        )

        self._timer = self.create_timer(self._dt, self._on_timer)

    def _on_timer(self) -> None:
        msg = MotorStatus()

        msg.number_of_target_interfaces = [2] * self._n
        msg.target_interface_id = [Int8MultiArray(data=[0, 1]) for _ in range(self._n)]
        msg.controller_index = list(range(self._n))

        msg.controlword = [int(CW_NEW_SET_POINT_ZEROERR) for _ in range(self._n)]
        msg.statusword = [0] * self._n
        msg.errorcode = [0] * self._n
        msg.position = [self._compute_position(self._t) for _ in range(self._n)]
        msg.velocity = [0.0] * self._n
        msg.torque = [0.0] * self._n

        self._command_publisher.publish(msg)
        self._t += self._dt

    def _compute_position(self, t: float) -> float:
        amplitude = (self._final_position - self._start_position) / 2.0
        offset = self._start_position + amplitude

        return amplitude * (-math.cos(2.0 * math.pi * self._freq * t)) + offset


def main() -> None:
    rclpy.init()
    node = RockingChairPositionCommand()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
