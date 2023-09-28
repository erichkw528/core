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
                namespace="roar",
                output='screen',
                emulate_tty=True,
    )
    ld.add_action(node)


    # lifecycle manager
    life_cycle_node = Node(package="nav2_lifecycle_manager",
                executable="lifecycle_manager",
                name='lifecycle_manager_behavior_planning_node',
                namespace="roar",
                output='screen',
                emulate_tty=True,
                parameters=[
                    {"node_names": ["behavior_planning_node"]},
                    {"transition_duration": 5.0},
                    {"autostart": True},
                ])
    ld.add_action(life_cycle_node)
    return ld 