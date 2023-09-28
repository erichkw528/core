// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roar_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
#define ROAR_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

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
// Member 'odometry'
#include "nav_msgs/msg/detail/odometry__struct.h"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.h"
// Member 'vehicle_status'
#include "roar_msgs/msg/detail/vehicle_status__struct.h"
// Member 'global_path'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'next_waypoint'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'vehicle_control'
#include "roar_msgs/msg/detail/vehicle_control__struct.h"

// Struct defined in msg/VehicleState in the package roar_msgs.
typedef struct roar_msgs__msg__VehicleState
{
  std_msgs__msg__Header header;
  nav_msgs__msg__Odometry odometry;
  sensor_msgs__msg__Imu imu;
  roar_msgs__msg__VehicleStatus vehicle_status;
  nav_msgs__msg__Path global_path;
  geometry_msgs__msg__PoseStamped next_waypoint;
  roar_msgs__msg__VehicleControl vehicle_control;
} roar_msgs__msg__VehicleState;

// Struct for a sequence of roar_msgs__msg__VehicleState.
typedef struct roar_msgs__msg__VehicleState__Sequence
{
  roar_msgs__msg__VehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roar_msgs__msg__VehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROAR_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
