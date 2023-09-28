// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roar_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "roar_msgs/msg/detail/vehicle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `odometry`
#include "nav_msgs/msg/detail/odometry__functions.h"
// Member `imu`
#include "sensor_msgs/msg/detail/imu__functions.h"
// Member `vehicle_status`
#include "roar_msgs/msg/detail/vehicle_status__functions.h"
// Member `global_path`
#include "nav_msgs/msg/detail/path__functions.h"
// Member `next_waypoint`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `vehicle_control`
#include "roar_msgs/msg/detail/vehicle_control__functions.h"

bool
roar_msgs__msg__VehicleState__init(roar_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    roar_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // odometry
  if (!nav_msgs__msg__Odometry__init(&msg->odometry)) {
    roar_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__init(&msg->imu)) {
    roar_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // vehicle_status
  if (!roar_msgs__msg__VehicleStatus__init(&msg->vehicle_status)) {
    roar_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // global_path
  if (!nav_msgs__msg__Path__init(&msg->global_path)) {
    roar_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // next_waypoint
  if (!geometry_msgs__msg__PoseStamped__init(&msg->next_waypoint)) {
    roar_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // vehicle_control
  if (!roar_msgs__msg__VehicleControl__init(&msg->vehicle_control)) {
    roar_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  return true;
}

void
roar_msgs__msg__VehicleState__fini(roar_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // odometry
  nav_msgs__msg__Odometry__fini(&msg->odometry);
  // imu
  sensor_msgs__msg__Imu__fini(&msg->imu);
  // vehicle_status
  roar_msgs__msg__VehicleStatus__fini(&msg->vehicle_status);
  // global_path
  nav_msgs__msg__Path__fini(&msg->global_path);
  // next_waypoint
  geometry_msgs__msg__PoseStamped__fini(&msg->next_waypoint);
  // vehicle_control
  roar_msgs__msg__VehicleControl__fini(&msg->vehicle_control);
}

roar_msgs__msg__VehicleState *
roar_msgs__msg__VehicleState__create()
{
  roar_msgs__msg__VehicleState * msg = (roar_msgs__msg__VehicleState *)malloc(sizeof(roar_msgs__msg__VehicleState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roar_msgs__msg__VehicleState));
  bool success = roar_msgs__msg__VehicleState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
roar_msgs__msg__VehicleState__destroy(roar_msgs__msg__VehicleState * msg)
{
  if (msg) {
    roar_msgs__msg__VehicleState__fini(msg);
  }
  free(msg);
}


bool
roar_msgs__msg__VehicleState__Sequence__init(roar_msgs__msg__VehicleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  roar_msgs__msg__VehicleState * data = NULL;
  if (size) {
    data = (roar_msgs__msg__VehicleState *)calloc(size, sizeof(roar_msgs__msg__VehicleState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roar_msgs__msg__VehicleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roar_msgs__msg__VehicleState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
roar_msgs__msg__VehicleState__Sequence__fini(roar_msgs__msg__VehicleState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      roar_msgs__msg__VehicleState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

roar_msgs__msg__VehicleState__Sequence *
roar_msgs__msg__VehicleState__Sequence__create(size_t size)
{
  roar_msgs__msg__VehicleState__Sequence * array = (roar_msgs__msg__VehicleState__Sequence *)malloc(sizeof(roar_msgs__msg__VehicleState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = roar_msgs__msg__VehicleState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
roar_msgs__msg__VehicleState__Sequence__destroy(roar_msgs__msg__VehicleState__Sequence * array)
{
  if (array) {
    roar_msgs__msg__VehicleState__Sequence__fini(array);
  }
  free(array);
}
