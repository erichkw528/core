// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'trajectory'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'score'
#include "planning_interfaces/msg/detail/trajectory_score__struct.h"

// Struct defined in msg/Trajectory in the package planning_interfaces.
typedef struct planning_interfaces__msg__Trajectory
{
  std_msgs__msg__Header header;
  nav_msgs__msg__Path trajectory;
  planning_interfaces__msg__TrajectoryScore score;
} planning_interfaces__msg__Trajectory;

// Struct for a sequence of planning_interfaces__msg__Trajectory.
typedef struct planning_interfaces__msg__Trajectory__Sequence
{
  planning_interfaces__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY__STRUCT_H_
