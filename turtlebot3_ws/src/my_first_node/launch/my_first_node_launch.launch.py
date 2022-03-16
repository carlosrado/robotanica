#my_first_node_launch.launch.py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_first_node',
            executable='simple_node',
            output='screen'),
    ])
