// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roar_msgs:srv/ToggleControlSafetySwitch.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roar_msgs/srv/detail/toggle_control_safety_switch__rosidl_typesupport_introspection_c.h"
#include "roar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roar_msgs/srv/detail/toggle_control_safety_switch__functions.h"
#include "roar_msgs/srv/detail/toggle_control_safety_switch__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ToggleControlSafetySwitch_Request__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roar_msgs__srv__ToggleControlSafetySwitch_Request__init(message_memory);
}

void ToggleControlSafetySwitch_Request__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_fini_function(void * message_memory)
{
  roar_msgs__srv__ToggleControlSafetySwitch_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ToggleControlSafetySwitch_Request__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_message_member_array[1] = {
  {
    "is_safety_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_msgs__srv__ToggleControlSafetySwitch_Request, is_safety_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ToggleControlSafetySwitch_Request__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_message_members = {
  "roar_msgs__srv",  // message namespace
  "ToggleControlSafetySwitch_Request",  // message name
  1,  // number of fields
  sizeof(roar_msgs__srv__ToggleControlSafetySwitch_Request),
  ToggleControlSafetySwitch_Request__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_message_member_array,  // message members
  ToggleControlSafetySwitch_Request__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ToggleControlSafetySwitch_Request__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ToggleControlSafetySwitch_Request__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_message_type_support_handle = {
  0,
  &ToggleControlSafetySwitch_Request__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roar_msgs, srv, ToggleControlSafetySwitch_Request)() {
  if (!ToggleControlSafetySwitch_Request__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_message_type_support_handle.typesupport_identifier) {
    ToggleControlSafetySwitch_Request__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ToggleControlSafetySwitch_Request__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "roar_msgs/srv/detail/toggle_control_safety_switch__rosidl_typesupport_introspection_c.h"
// already included above
// #include "roar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "roar_msgs/srv/detail/toggle_control_safety_switch__functions.h"
// already included above
// #include "roar_msgs/srv/detail/toggle_control_safety_switch__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ToggleControlSafetySwitch_Response__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roar_msgs__srv__ToggleControlSafetySwitch_Response__init(message_memory);
}

void ToggleControlSafetySwitch_Response__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_fini_function(void * message_memory)
{
  roar_msgs__srv__ToggleControlSafetySwitch_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ToggleControlSafetySwitch_Response__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_msgs__srv__ToggleControlSafetySwitch_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ToggleControlSafetySwitch_Response__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_message_members = {
  "roar_msgs__srv",  // message namespace
  "ToggleControlSafetySwitch_Response",  // message name
  1,  // number of fields
  sizeof(roar_msgs__srv__ToggleControlSafetySwitch_Response),
  ToggleControlSafetySwitch_Response__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_message_member_array,  // message members
  ToggleControlSafetySwitch_Response__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ToggleControlSafetySwitch_Response__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ToggleControlSafetySwitch_Response__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_message_type_support_handle = {
  0,
  &ToggleControlSafetySwitch_Response__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roar_msgs, srv, ToggleControlSafetySwitch_Response)() {
  if (!ToggleControlSafetySwitch_Response__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_message_type_support_handle.typesupport_identifier) {
    ToggleControlSafetySwitch_Response__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ToggleControlSafetySwitch_Response__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "roar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "roar_msgs/srv/detail/toggle_control_safety_switch__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers roar_msgs__srv__detail__toggle_control_safety_switch__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_service_members = {
  "roar_msgs__srv",  // service namespace
  "ToggleControlSafetySwitch",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // roar_msgs__srv__detail__toggle_control_safety_switch__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Request_message_type_support_handle,
  NULL  // response message
  // roar_msgs__srv__detail__toggle_control_safety_switch__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_Response_message_type_support_handle
};

static rosidl_service_type_support_t roar_msgs__srv__detail__toggle_control_safety_switch__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_service_type_support_handle = {
  0,
  &roar_msgs__srv__detail__toggle_control_safety_switch__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roar_msgs, srv, ToggleControlSafetySwitch_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roar_msgs, srv, ToggleControlSafetySwitch_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roar_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roar_msgs, srv, ToggleControlSafetySwitch)() {
  if (!roar_msgs__srv__detail__toggle_control_safety_switch__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_service_type_support_handle.typesupport_identifier) {
    roar_msgs__srv__detail__toggle_control_safety_switch__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)roar_msgs__srv__detail__toggle_control_safety_switch__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roar_msgs, srv, ToggleControlSafetySwitch_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roar_msgs, srv, ToggleControlSafetySwitch_Response)()->data;
  }

  return &roar_msgs__srv__detail__toggle_control_safety_switch__rosidl_typesupport_introspection_c__ToggleControlSafetySwitch_service_type_support_handle;
}
