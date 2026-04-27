from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

import os


def generate_launch_description():
    pkg_share = get_package_share_directory('motion_system_pkg')
    default_config = os.path.join(pkg_share, 'config', 'ethercat_zeroerr.yaml')

    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=default_config,
        description='Absolute path to motor_manager YAML (masters / drivers).',
    )

    motion_system_controller = Node(
        package='motion_system_rqt',
        executable='run_rqt',
        name='motion_system_controller',
        output='screen',
        parameters=[{
            'config_file': LaunchConfiguration('config_file'),
        }],
    )

    return LaunchDescription([
        config_file_arg,
        motion_system_controller,
    ])