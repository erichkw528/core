// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_interfaces:srv/ResetTrajectoryPicker.idl
// generated code does not contain a copyright notice
#include "planning_interfaces/srv/detail/reset_trajectory_picker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `request`
#include "std_msgs/msg/detail/empty__functions.h"

bool
planning_interfaces__srv__ResetTrajectoryPicker_Request__init(planning_interfaces__srv__ResetTrajectoryPicker_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!std_msgs__msg__Empty__init(&msg->request)) {
    planning_interfaces__srv__ResetTrajectoryPicker_Request__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__srv__ResetTrajectoryPicker_Request__fini(planning_interfaces__srv__ResetTrajectoryPicker_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
  std_msgs__msg__Empty__fini(&msg->request);
}

planning_interfaces__srv__ResetTrajectoryPicker_Request *
planning_interfaces__srv__ResetTrajectoryPicker_Request__create()
{
  planning_interfaces__srv__ResetTrajectoryPicker_Request * msg = (planning_interfaces__srv__ResetTrajectoryPicker_Request *)malloc(sizeof(planning_interfaces__srv__ResetTrajectoryPicker_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__srv__ResetTrajectoryPicker_Request));
  bool success = planning_interfaces__srv__ResetTrajectoryPicker_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__srv__ResetTrajectoryPicker_Request__destroy(planning_interfaces__srv__ResetTrajectoryPicker_Request * msg)
{
  if (msg) {
    planning_interfaces__srv__ResetTrajectoryPicker_Request__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence__init(planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__srv__ResetTrajectoryPicker_Request * data = NULL;
  if (size) {
    data = (planning_interfaces__srv__ResetTrajectoryPicker_Request *)calloc(size, sizeof(planning_interfaces__srv__ResetTrajectoryPicker_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__srv__ResetTrajectoryPicker_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__srv__ResetTrajectoryPicker_Request__fini(&data[i - 1]);
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
planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence__fini(planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__srv__ResetTrajectoryPicker_Request__fini(&array->data[i]);
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

planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence *
planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence__create(size_t size)
{
  planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence * array = (planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence *)malloc(sizeof(planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence__destroy(planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence * array)
{
  if (array) {
    planning_interfaces__srv__ResetTrajectoryPicker_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `response`
// already included above
// #include "std_msgs/msg/detail/empty__functions.h"

bool
planning_interfaces__srv__ResetTrajectoryPicker_Response__init(planning_interfaces__srv__ResetTrajectoryPicker_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!std_msgs__msg__Empty__init(&msg->response)) {
    planning_interfaces__srv__ResetTrajectoryPicker_Response__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__srv__ResetTrajectoryPicker_Response__fini(planning_interfaces__srv__ResetTrajectoryPicker_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  std_msgs__msg__Empty__fini(&msg->response);
}

planning_interfaces__srv__ResetTrajectoryPicker_Response *
planning_interfaces__srv__ResetTrajectoryPicker_Response__create()
{
  planning_interfaces__srv__ResetTrajectoryPicker_Response * msg = (planning_interfaces__srv__ResetTrajectoryPicker_Response *)malloc(sizeof(planning_interfaces__srv__ResetTrajectoryPicker_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__srv__ResetTrajectoryPicker_Response));
  bool success = planning_interfaces__srv__ResetTrajectoryPicker_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__srv__ResetTrajectoryPicker_Response__destroy(planning_interfaces__srv__ResetTrajectoryPicker_Response * msg)
{
  if (msg) {
    planning_interfaces__srv__ResetTrajectoryPicker_Response__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence__init(planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__srv__ResetTrajectoryPicker_Response * data = NULL;
  if (size) {
    data = (planning_interfaces__srv__ResetTrajectoryPicker_Response *)calloc(size, sizeof(planning_interfaces__srv__ResetTrajectoryPicker_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__srv__ResetTrajectoryPicker_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__srv__ResetTrajectoryPicker_Response__fini(&data[i - 1]);
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
planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence__fini(planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__srv__ResetTrajectoryPicker_Response__fini(&array->data[i]);
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

planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence *
planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence__create(size_t size)
{
  planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence * array = (planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence *)malloc(sizeof(planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence__destroy(planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence * array)
{
  if (array) {
    planning_interfaces__srv__ResetTrajectoryPicker_Response__Sequence__fini(array);
  }
  free(array);
}
