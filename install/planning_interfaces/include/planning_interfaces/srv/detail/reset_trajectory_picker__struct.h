// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_interfaces:srv/ResetTrajectoryPicker.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__SRV__DETAIL__RESET_TRAJECTORY_PICKER__STRUCT_H_
#define PLANNING_INTERFACES__SRV__DETAIL__RESET_TRAJECTORY_PICKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "std_msgs/msg/detail/empty__struct.h"

// Struct defined in srv/ResetTrajectoryPicker in the package planning_interfaces.
typedef struct planning_interfaces__srv__ResetTrajectoryPicker_Request
{
  std_msgs__msg__Empty request;
} planning_interfaces__srv__ResetTrajectoryPicker_Request;

// Struct for a sequence of planning_interfaces__srv__ResetTrajectoryPicker_Request.
typedef struct planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence
{
  planning_interfaces__srv__ResetTrajectoryPicker_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "std_msgs/msg/detail/empty__struct.h"

// Struct defined in srv/ResetTrajectoryPicker in the package planning_interfaces.
typedef struct planning_interfaces__srv__ResetTrajectoryPicker_Response
{
  std_msgs__msg__Empty response;
} planning_interfaces__srv__ResetTrajectoryPicker_Response;

// Struct for a sequence of planning_interfaces__srv__ResetTrajectoryPicker_Response.
typedef struct planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence
{
  planning_interfaces__srv__ResetTrajectoryPicker_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_INTERFACES__SRV__DETAIL__RESET_TRAJECTORY_PICKER__STRUCT_H_
