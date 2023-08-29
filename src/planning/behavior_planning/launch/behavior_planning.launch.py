from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition
import datetime
import os
from pathlib import Path

def generate_launch_description():
    ld = LaunchDescription()

    node = Node(package='behavior_planning',
                executable='default_behavior_planner_exe',
                name='behavior_planning_node',
                output='screen',
                emulate_tty=True,
    )
    ld.add_action(node)
    return ld 