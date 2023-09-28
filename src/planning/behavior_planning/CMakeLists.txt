cmake_minimum_required(VERSION 3.5)
project(behavior_planning)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_auto REQUIRED)

ament_auto_find_build_dependencies(REQUIRED
  ${${PROJECT_NAME}_BUILD_DEPENDS}
  ${${PROJECT_NAME}_BUILDTOOL_DEPENDS}
)

set(${PROJECT_NAME}_BASE_HEADER
  include/${PROJECT_NAME}/base/base_lifecycle_node.hpp
  include/${PROJECT_NAME}/base/base_bt_lifecycle_node.hpp
)

set(${PROJECT_NAME}_BASE_SRC
    src/base/base_lifecycle_node.cpp
    src/base/base_bt_lifecycle_node.cpp
)
set(${PROJECT_NAME}_COMMON_HEADER
  include/${PROJECT_NAME}/common/utils.hpp
)

set(${PROJECT_NAME}_COMMON_SRC
  src/common/utils.cpp
)

set(${PROJECT_NAME}_BT_NODES_HEADER
  include/${PROJECT_NAME}/bt_nodes/action_nodes/on_goal_action.hpp
  include/${PROJECT_NAME}/bt_nodes/condition_nodes/if_goal_reached.hpp

)

set(${PROJECT_NAME}_BT_NODES_SRC
  src/bt_nodes/action_nodes/on_goal_action.cpp
  src/bt_nodes/condition_nodes/if_goal_reached.cpp
)

set(DEFAULT_BT_HEADER
  include/${PROJECT_NAME}/default_behavior_planner.hpp
)
set(DEFAULT_BT_SRC
  src/default_behavior_planner.cpp
)

ament_auto_add_library(${PROJECT_NAME}_COMMON SHARED
    ${${PROJECT_NAME}_COMMON_HEADER}
    ${${PROJECT_NAME}_COMMON_SRC}
)

ament_auto_add_library(${PROJECT_NAME}_BASE SHARED
    ${${PROJECT_NAME}_BASE_HEADER}
    ${${PROJECT_NAME}_BASE_SRC}
)

ament_auto_add_library(${PROJECT_NAME}_BT_NODES SHARED
  ${${PROJECT_NAME}_BT_NODES_HEADER}
  ${${PROJECT_NAME}_BT_NODES_SRC}
)

target_link_libraries(${PROJECT_NAME}_BASE  
  ${PROJECT_NAME}_COMMON
)

ament_auto_add_library(DEFAULT_BT SHARED
  ${DEFAULT_BT_HEADER}
  ${DEFAULT_BT_SRC}
)
target_link_libraries(DEFAULT_BT
  ${PROJECT_NAME}_COMMON
  ${PROJECT_NAME}_BASE
  ${PROJECT_NAME}_BT_NODES

)

rclcpp_components_register_node(DEFAULT_BT
  PLUGIN "roar::planning::behavior_planning::impl::DefaultBehaviorPlanner"
  EXECUTABLE default_behavior_planner_exe
)

ament_auto_package(INSTALL_TO_SHARE
  param
  launch
)
