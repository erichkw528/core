// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from planning_interfaces:msg/Trajectories.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "planning_interfaces/msg/detail/trajectories__rosidl_typesupport_introspection_c.h"
#include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "planning_interfaces/msg/detail/trajectories__functions.h"
#include "planning_interfaces/msg/detail/trajectories__struct.h"


// Include directives for member types
// Member `trajectories`
#include "planning_interfaces/msg/trajectory.h"
// Member `trajectories`
#include "planning_interfaces/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Trajectories__rosidl_typesupport_introspection_c__Trajectories_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_interfaces__msg__Trajectories__init(message_memory);
}

void Trajectories__rosidl_typesupport_introspection_c__Trajectories_fini_function(void * message_memory)
{
  planning_interfaces__msg__Trajectories__fini(message_memory);
}

size_t Trajectories__rosidl_typesupport_introspection_c__size_function__Trajectory__trajectories(
  const void * untyped_member)
{
  const planning_interfaces__msg__Trajectory__Sequence * member =
    (const planning_interfaces__msg__Trajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * Trajectories__rosidl_typesupport_introspection_c__get_const_function__Trajectory__trajectories(
  const void * untyped_member, size_t index)
{
  const planning_interfaces__msg__Trajectory__Sequence * member =
    (const planning_interfaces__msg__Trajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Trajectories__rosidl_typesupport_introspection_c__get_function__Trajectory__trajectories(
  void * untyped_member, size_t index)
{
  planning_interfaces__msg__Trajectory__Sequence * member =
    (planning_interfaces__msg__Trajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Trajectories__rosidl_typesupport_introspection_c__resize_function__Trajectory__trajectories(
  void * untyped_member, size_t size)
{
  planning_interfaces__msg__Trajectory__Sequence * member =
    (planning_interfaces__msg__Trajectory__Sequence *)(untyped_member);
  planning_interfaces__msg__Trajectory__Sequence__fini(member);
  return planning_interfaces__msg__Trajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Trajectories__rosidl_typesupport_introspection_c__Trajectories_message_member_array[1] = {
  {
    "trajectories",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__msg__Trajectories, trajectories),  // bytes offset in struct
    NULL,  // default value
    Trajectories__rosidl_typesupport_introspection_c__size_function__Trajectory__trajectories,  // size() function pointer
    Trajectories__rosidl_typesupport_introspection_c__get_const_function__Trajectory__trajectories,  // get_const(index) function pointer
    Trajectories__rosidl_typesupport_introspection_c__get_function__Trajectory__trajectories,  // get(index) function pointer
    Trajectories__rosidl_typesupport_introspection_c__resize_function__Trajectory__trajectories  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Trajectories__rosidl_typesupport_introspection_c__Trajectories_message_members = {
  "planning_interfaces__msg",  // message namespace
  "Trajectories",  // message name
  1,  // number of fields
  sizeof(planning_interfaces__msg__Trajectories),
  Trajectories__rosidl_typesupport_introspection_c__Trajectories_message_member_array,  // message members
  Trajectories__rosidl_typesupport_introspection_c__Trajectories_init_function,  // function to initialize message memory (memory has to be allocated)
  Trajectories__rosidl_typesupport_introspection_c__Trajectories_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Trajectories__rosidl_typesupport_introspection_c__Trajectories_message_type_support_handle = {
  0,
  &Trajectories__rosidl_typesupport_introspection_c__Trajectories_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, msg, Trajectories)() {
  Trajectories__rosidl_typesupport_introspection_c__Trajectories_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, msg, Trajectory)();
  if (!Trajectories__rosidl_typesupport_introspection_c__Trajectories_message_type_support_handle.typesupport_identifier) {
    Trajectories__rosidl_typesupport_introspection_c__Trajectories_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Trajectories__rosidl_typesupport_introspection_c__Trajectories_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
