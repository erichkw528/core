// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roar_msgs:msg/VehicleControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roar_msgs/msg/detail/vehicle_control__rosidl_typesupport_introspection_c.h"
#include "roar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roar_msgs/msg/detail/vehicle_control__functions.h"
#include "roar_msgs/msg/detail/vehicle_control__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roar_msgs__msg__VehicleControl__init(message_memory);
}

void VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_fini_function(void * message_memory)
{
  roar_msgs__msg__VehicleControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_msgs__msg__VehicleControl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_msgs__msg__VehicleControl, target_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_msgs__msg__VehicleControl, steering_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_msgs__msg__VehicleControl, brake),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reverse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_msgs__msg__VehicleControl, reverse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_auto",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_msgs__msg__VehicleControl, is_auto),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_message_members = {
  "roar_msgs__msg",  // message namespace
  "VehicleControl",  // message name
  6,  // number of fields
  sizeof(roar_msgs__msg__VehicleControl),
  VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_message_member_array,  // message members
  VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_message_type_support_handle = {
  0,
  &VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roar_msgs, msg, VehicleControl)() {
  VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_message_type_support_handle.typesupport_identifier) {
    VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleControl__rosidl_typesupport_introspection_c__VehicleControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
