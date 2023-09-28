// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roar_msgs:msg/VehicleControl.idl
// generated code does not contain a copyright notice
#include "roar_msgs/msg/detail/vehicle_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
roar_msgs__msg__VehicleControl__init(roar_msgs__msg__VehicleControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    roar_msgs__msg__VehicleControl__fini(msg);
    return false;
  }
  // target_speed
  // steering_angle
  // brake
  // reverse
  // is_auto
  return true;
}

void
roar_msgs__msg__VehicleControl__fini(roar_msgs__msg__VehicleControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // target_speed
  // steering_angle
  // brake
  // reverse
  // is_auto
}

roar_msgs__msg__VehicleControl *
roar_msgs__msg__VehicleControl__create()
{
  roar_msgs__msg__VehicleControl * msg = (roar_msgs__msg__VehicleControl *)malloc(sizeof(roar_msgs__msg__VehicleControl));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roar_msgs__msg__VehicleControl));
  bool success = roar_msgs__msg__VehicleControl__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
roar_msgs__msg__VehicleControl__destroy(roar_msgs__msg__VehicleControl * msg)
{
  if (msg) {
    roar_msgs__msg__VehicleControl__fini(msg);
  }
  free(msg);
}


bool
roar_msgs__msg__VehicleControl__Sequence__init(roar_msgs__msg__VehicleControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  roar_msgs__msg__VehicleControl * data = NULL;
  if (size) {
    data = (roar_msgs__msg__VehicleControl *)calloc(size, sizeof(roar_msgs__msg__VehicleControl));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roar_msgs__msg__VehicleControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roar_msgs__msg__VehicleControl__fini(&data[i - 1]);
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
roar_msgs__msg__VehicleControl__Sequence__fini(roar_msgs__msg__VehicleControl__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      roar_msgs__msg__VehicleControl__fini(&array->data[i]);
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

roar_msgs__msg__VehicleControl__Sequence *
roar_msgs__msg__VehicleControl__Sequence__create(size_t size)
{
  roar_msgs__msg__VehicleControl__Sequence * array = (roar_msgs__msg__VehicleControl__Sequence *)malloc(sizeof(roar_msgs__msg__VehicleControl__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = roar_msgs__msg__VehicleControl__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
roar_msgs__msg__VehicleControl__Sequence__destroy(roar_msgs__msg__VehicleControl__Sequence * array)
{
  if (array) {
    roar_msgs__msg__VehicleControl__Sequence__fini(array);
  }
  free(array);
}
