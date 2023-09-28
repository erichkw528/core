// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roar_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
#define ROAR_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_

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

// Struct defined in msg/VehicleStatus in the package roar_msgs.
typedef struct roar_msgs__msg__VehicleStatus
{
  std_msgs__msg__Header header;
  float speed;
  float steering_angle_deg;
} roar_msgs__msg__VehicleStatus;

// Struct for a sequence of roar_msgs__msg__VehicleStatus.
typedef struct roar_msgs__msg__VehicleStatus__Sequence
{
  roar_msgs__msg__VehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roar_msgs__msg__VehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROAR_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
