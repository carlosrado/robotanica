from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_first_action',
            executable='action_client',
            output='screen'
        ),
    ])