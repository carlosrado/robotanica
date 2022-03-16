from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='show_msg',
            executable='show_msg',
            output='screen'),
    ])
