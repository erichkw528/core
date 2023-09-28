// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_interfaces:msg/Trajectories.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__STRUCT_H_
#define PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectories'
#include "planning_interfaces/msg/detail/trajectory__struct.h"

// Struct defined in msg/Trajectories in the package planning_interfaces.
typedef struct planning_interfaces__msg__Trajectories
{
  planning_interfaces__msg__Trajectory__Sequence trajectories;
} planning_interfaces__msg__Trajectories;

// Struct for a sequence of planning_interfaces__msg__Trajectories.
typedef struct planning_interfaces__msg__Trajectories__Sequence
{
  planning_interfaces__msg__Trajectories * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__msg__Trajectories__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__STRUCT_H_
