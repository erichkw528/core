// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice
#include "planning_interfaces/msg/detail/trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `trajectory`
#include "nav_msgs/msg/detail/path__functions.h"
// Member `score`
#include "planning_interfaces/msg/detail/trajectory_score__functions.h"

bool
planning_interfaces__msg__Trajectory__init(planning_interfaces__msg__Trajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    planning_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  // trajectory
  if (!nav_msgs__msg__Path__init(&msg->trajectory)) {
    planning_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  // score
  if (!planning_interfaces__msg__TrajectoryScore__init(&msg->score)) {
    planning_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__msg__Trajectory__fini(planning_interfaces__msg__Trajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // trajectory
  nav_msgs__msg__Path__fini(&msg->trajectory);
  // score
  planning_interfaces__msg__TrajectoryScore__fini(&msg->score);
}

planning_interfaces__msg__Trajectory *
planning_interfaces__msg__Trajectory__create()
{
  planning_interfaces__msg__Trajectory * msg = (planning_interfaces__msg__Trajectory *)malloc(sizeof(planning_interfaces__msg__Trajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__msg__Trajectory));
  bool success = planning_interfaces__msg__Trajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__msg__Trajectory__destroy(planning_interfaces__msg__Trajectory * msg)
{
  if (msg) {
    planning_interfaces__msg__Trajectory__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__msg__Trajectory__Sequence__init(planning_interfaces__msg__Trajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__msg__Trajectory * data = NULL;
  if (size) {
    data = (planning_interfaces__msg__Trajectory *)calloc(size, sizeof(planning_interfaces__msg__Trajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__msg__Trajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__msg__Trajectory__fini(&data[i - 1]);
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
planning_interfaces__msg__Trajectory__Sequence__fini(planning_interfaces__msg__Trajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__msg__Trajectory__fini(&array->data[i]);
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

planning_interfaces__msg__Trajectory__Sequence *
planning_interfaces__msg__Trajectory__Sequence__create(size_t size)
{
  planning_interfaces__msg__Trajectory__Sequence * array = (planning_interfaces__msg__Trajectory__Sequence *)malloc(sizeof(planning_interfaces__msg__Trajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__msg__Trajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__msg__Trajectory__Sequence__destroy(planning_interfaces__msg__Trajectory__Sequence * array)
{
  if (array) {
    planning_interfaces__msg__Trajectory__Sequence__fini(array);
  }
  free(array);
}
