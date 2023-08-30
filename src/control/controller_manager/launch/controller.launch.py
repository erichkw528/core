# Copyright 2023 michael. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

import launch
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument
from ament_index_python.packages import get_package_share_directory
from pathlib import Path


def generate_launch_description():
    ld = launch.LaunchDescription()
    base_path = Path(get_package_share_directory("controller_manager"))

    config_file = base_path / "params" / "configs.yaml"
    assert config_file.exists()
    ld.add_action(launch.actions.DeclareLaunchArgument(name="params_file",
                                                    default_value=config_file.as_posix()))
    controller_manager = Node(
        name="controller_manager",
        executable="controller_manager_node",
        package="controller_manager",
        namespace="roar",
        parameters=[
                    launch.substitutions.LaunchConfiguration("params_file"),
                    ],
        emulate_tty=True,
        output="screen",
        remappings=[
            ("/controller/vehicle_control", "/roar/vehicle/control"),
        ]
    )

    lifecycle_manager = Node(
        package="nav2_lifecycle_manager",
        executable="lifecycle_manager",
        name="lifecycle_manager_controller",
        output="screen",
        parameters=[launch.substitutions.LaunchConfiguration("params_file")],
    )

    # node
    ld.add_action(controller_manager)
    ld.add_action(lifecycle_manager)

    return ld
