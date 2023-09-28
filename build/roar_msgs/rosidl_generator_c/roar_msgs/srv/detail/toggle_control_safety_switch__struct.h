// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roar_msgs:srv/ToggleControlSafetySwitch.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__SRV__DETAIL__TOGGLE_CONTROL_SAFETY_SWITCH__STRUCT_H_
#define ROAR_MSGS__SRV__DETAIL__TOGGLE_CONTROL_SAFETY_SWITCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ToggleControlSafetySwitch in the package roar_msgs.
typedef struct roar_msgs__srv__ToggleControlSafetySwitch_Request
{
  bool is_safety_on;
} roar_msgs__srv__ToggleControlSafetySwitch_Request;

// Struct for a sequence of roar_msgs__srv__ToggleControlSafetySwitch_Request.
typedef struct roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence
{
  roar_msgs__srv__ToggleControlSafetySwitch_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ToggleControlSafetySwitch in the package roar_msgs.
typedef struct roar_msgs__srv__ToggleControlSafetySwitch_Response
{
  bool status;
} roar_msgs__srv__ToggleControlSafetySwitch_Response;

// Struct for a sequence of roar_msgs__srv__ToggleControlSafetySwitch_Response.
typedef struct roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence
{
  roar_msgs__srv__ToggleControlSafetySwitch_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROAR_MSGS__SRV__DETAIL__TOGGLE_CONTROL_SAFETY_SWITCH__STRUCT_H_
