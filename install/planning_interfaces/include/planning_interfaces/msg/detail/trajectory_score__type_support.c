// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from planning_interfaces:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "planning_interfaces/msg/detail/trajectory_score__rosidl_typesupport_introspection_c.h"
#include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "planning_interfaces/msg/detail/trajectory_score__functions.h"
#include "planning_interfaces/msg/detail/trajectory_score__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_interfaces__msg__TrajectoryScore__init(message_memory);
}

void TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_fini_function(void * message_memory)
{
  planning_interfaces__msg__TrajectoryScore__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__msg__TrajectoryScore, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__msg__TrajectoryScore, raw_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__msg__TrajectoryScore, scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_members = {
  "planning_interfaces__msg",  // message namespace
  "TrajectoryScore",  // message name
  3,  // number of fields
  sizeof(planning_interfaces__msg__TrajectoryScore),
  TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_member_array,  // message members
  TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_type_support_handle = {
  0,
  &TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, msg, TrajectoryScore)() {
  if (!TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_type_support_handle.typesupport_identifier) {
    TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
