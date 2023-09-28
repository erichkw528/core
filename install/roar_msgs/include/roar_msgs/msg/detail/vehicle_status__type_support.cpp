// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from roar_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "roar_msgs/msg/detail/vehicle_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace roar_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VehicleStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) roar_msgs::msg::VehicleStatus(_init);
}

void VehicleStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<roar_msgs::msg::VehicleStatus *>(message_memory);
  typed_message->~VehicleStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VehicleStatus_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_msgs::msg::VehicleStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_msgs::msg::VehicleStatus, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steering_angle_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_msgs::msg::VehicleStatus, steering_angle_deg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VehicleStatus_message_members = {
  "roar_msgs::msg",  // message namespace
  "VehicleStatus",  // message name
  3,  // number of fields
  sizeof(roar_msgs::msg::VehicleStatus),
  VehicleStatus_message_member_array,  // message members
  VehicleStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VehicleStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VehicleStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace roar_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roar_msgs::msg::VehicleStatus>()
{
  return &::roar_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roar_msgs, msg, VehicleStatus)() {
  return &::roar_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
