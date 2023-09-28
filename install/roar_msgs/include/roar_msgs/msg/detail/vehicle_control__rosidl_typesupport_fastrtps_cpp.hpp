// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from roar_msgs:msg/VehicleControl.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__MSG__DETAIL__VEHICLE_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROAR_MSGS__MSG__DETAIL__VEHICLE_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "roar_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "roar_msgs/msg/detail/vehicle_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace roar_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_msgs
cdr_serialize(
  const roar_msgs::msg::VehicleControl & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  roar_msgs::msg::VehicleControl & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_msgs
get_serialized_size(
  const roar_msgs::msg::VehicleControl & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_msgs
max_serialized_size_VehicleControl(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace roar_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roar_msgs, msg, VehicleControl)();

#ifdef __cplusplus
}
#endif

#endif  // ROAR_MSGS__MSG__DETAIL__VEHICLE_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
