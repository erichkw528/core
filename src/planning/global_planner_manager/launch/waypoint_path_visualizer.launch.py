# Copyright 2023 michael. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

from ament_index_python.packages import get_package_share_directory
import launch_ros
from pathlib import Path
import launch
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument


def generate_launch_description():
    base_path = Path(get_package_share_directory("global_planner_manager"))
    config_file = (
        base_path / "config" / "configs.yaml"
    )
    assert config_file.exists(), f"[{config_file}] does not exist"

    ld = launch.LaunchDescription()
    output_file_path = DeclareLaunchArgument(
        "output_file_path",
        default_value="./data/file.txt",
    )
    nav_topic = DeclareLaunchArgument(
        "nav_topic",
        default_value= "sensor_msgs/msg/nav_sat_fix",

    )
    record_interval = DeclareLaunchArgument(
        "record_interval",
        default_value="1.0",
    )
    waypoint_path_visualizer= Node(
        name="waypoint_path_visualizer_node"
        executable="waypoint_path_visualizer",
        package="global_planner_manager",
        parameters=[
            config_file,
            {
                "output_file_path": LaunchConfiguration("output_file_path"),
            },
        ],
        # parameters=[
        #     {
        #         "output_file_path": LaunchConfiguration("output_file_path"),
        #         "odom_topic": LaunchConfiguration("odom_topic"),
        #         "record_interval": LaunchConfiguration("record_interval"),
        #     }
        # ],
    )
    #issue with conditional remapping https://answers.ros.org/question/314903/ros2-optionally-launch-node-with-no-arguments/
    # args
    
    ld.add_action(output_file_path)
    ld.add_action(nav_topic)
    ld.add_action(record_interval)

    # node
    ld.add_action(waypoint_path_visualizer)

    return ld

