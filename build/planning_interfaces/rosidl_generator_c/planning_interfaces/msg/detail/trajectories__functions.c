// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_interfaces:msg/Trajectories.idl
// generated code does not contain a copyright notice
#include "planning_interfaces/msg/detail/trajectories__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `trajectories`
#include "planning_interfaces/msg/detail/trajectory__functions.h"

bool
planning_interfaces__msg__Trajectories__init(planning_interfaces__msg__Trajectories * msg)
{
  if (!msg) {
    return false;
  }
  // trajectories
  if (!planning_interfaces__msg__Trajectory__Sequence__init(&msg->trajectories, 0)) {
    planning_interfaces__msg__Trajectories__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__msg__Trajectories__fini(planning_interfaces__msg__Trajectories * msg)
{
  if (!msg) {
    return;
  }
  // trajectories
  planning_interfaces__msg__Trajectory__Sequence__fini(&msg->trajectories);
}

planning_interfaces__msg__Trajectories *
planning_interfaces__msg__Trajectories__create()
{
  planning_interfaces__msg__Trajectories * msg = (planning_interfaces__msg__Trajectories *)malloc(sizeof(planning_interfaces__msg__Trajectories));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__msg__Trajectories));
  bool success = planning_interfaces__msg__Trajectories__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__msg__Trajectories__destroy(planning_interfaces__msg__Trajectories * msg)
{
  if (msg) {
    planning_interfaces__msg__Trajectories__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__msg__Trajectories__Sequence__init(planning_interfaces__msg__Trajectories__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__msg__Trajectories * data = NULL;
  if (size) {
    data = (planning_interfaces__msg__Trajectories *)calloc(size, sizeof(planning_interfaces__msg__Trajectories));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__msg__Trajectories__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__msg__Trajectories__fini(&data[i - 1]);
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
planning_interfaces__msg__Trajectories__Sequence__fini(planning_interfaces__msg__Trajectories__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__msg__Trajectories__fini(&array->data[i]);
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

planning_interfaces__msg__Trajectories__Sequence *
planning_interfaces__msg__Trajectories__Sequence__create(size_t size)
{
  planning_interfaces__msg__Trajectories__Sequence * array = (planning_interfaces__msg__Trajectories__Sequence *)malloc(sizeof(planning_interfaces__msg__Trajectories__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__msg__Trajectories__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__msg__Trajectories__Sequence__destroy(planning_interfaces__msg__Trajectories__Sequence * array)
{
  if (array) {
    planning_interfaces__msg__Trajectories__Sequence__fini(array);
  }
  free(array);
}
