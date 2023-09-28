// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_interfaces:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice
#include "planning_interfaces/msg/detail/trajectory_score__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
planning_interfaces__msg__TrajectoryScore__init(planning_interfaces__msg__TrajectoryScore * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    planning_interfaces__msg__TrajectoryScore__fini(msg);
    return false;
  }
  // raw_score
  // scale
  return true;
}

void
planning_interfaces__msg__TrajectoryScore__fini(planning_interfaces__msg__TrajectoryScore * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // raw_score
  // scale
}

planning_interfaces__msg__TrajectoryScore *
planning_interfaces__msg__TrajectoryScore__create()
{
  planning_interfaces__msg__TrajectoryScore * msg = (planning_interfaces__msg__TrajectoryScore *)malloc(sizeof(planning_interfaces__msg__TrajectoryScore));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__msg__TrajectoryScore));
  bool success = planning_interfaces__msg__TrajectoryScore__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__msg__TrajectoryScore__destroy(planning_interfaces__msg__TrajectoryScore * msg)
{
  if (msg) {
    planning_interfaces__msg__TrajectoryScore__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__msg__TrajectoryScore__Sequence__init(planning_interfaces__msg__TrajectoryScore__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__msg__TrajectoryScore * data = NULL;
  if (size) {
    data = (planning_interfaces__msg__TrajectoryScore *)calloc(size, sizeof(planning_interfaces__msg__TrajectoryScore));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__msg__TrajectoryScore__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__msg__TrajectoryScore__fini(&data[i - 1]);
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
planning_interfaces__msg__TrajectoryScore__Sequence__fini(planning_interfaces__msg__TrajectoryScore__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__msg__TrajectoryScore__fini(&array->data[i]);
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

planning_interfaces__msg__TrajectoryScore__Sequence *
planning_interfaces__msg__TrajectoryScore__Sequence__create(size_t size)
{
  planning_interfaces__msg__TrajectoryScore__Sequence * array = (planning_interfaces__msg__TrajectoryScore__Sequence *)malloc(sizeof(planning_interfaces__msg__TrajectoryScore__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__msg__TrajectoryScore__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__msg__TrajectoryScore__Sequence__destroy(planning_interfaces__msg__TrajectoryScore__Sequence * array)
{
  if (array) {
    planning_interfaces__msg__TrajectoryScore__Sequence__fini(array);
  }
  free(array);
}
