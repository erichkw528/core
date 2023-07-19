cmake_minimum_required(VERSION 3.5)
project(roar_msgs)

find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/VehicleControl.msg"
  DEPENDENCIES std_msgs

)
ament_package()
