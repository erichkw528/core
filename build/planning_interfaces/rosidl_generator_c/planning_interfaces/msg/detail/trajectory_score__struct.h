// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_interfaces:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY_SCORE__STRUCT_H_
#define PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY_SCORE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TrajectoryScore in the package planning_interfaces.
typedef struct planning_interfaces__msg__TrajectoryScore
{
  rosidl_runtime_c__String name;
  float raw_score;
  float scale;
} planning_interfaces__msg__TrajectoryScore;

// Struct for a sequence of planning_interfaces__msg__TrajectoryScore.
typedef struct planning_interfaces__msg__TrajectoryScore__Sequence
{
  planning_interfaces__msg__TrajectoryScore * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__msg__TrajectoryScore__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY_SCORE__STRUCT_H_
