// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roar_msgs:srv/ToggleControlSafetySwitch.idl
// generated code does not contain a copyright notice
#include "roar_msgs/srv/detail/toggle_control_safety_switch__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
roar_msgs__srv__ToggleControlSafetySwitch_Request__init(roar_msgs__srv__ToggleControlSafetySwitch_Request * msg)
{
  if (!msg) {
    return false;
  }
  // is_safety_on
  return true;
}

void
roar_msgs__srv__ToggleControlSafetySwitch_Request__fini(roar_msgs__srv__ToggleControlSafetySwitch_Request * msg)
{
  if (!msg) {
    return;
  }
  // is_safety_on
}

roar_msgs__srv__ToggleControlSafetySwitch_Request *
roar_msgs__srv__ToggleControlSafetySwitch_Request__create()
{
  roar_msgs__srv__ToggleControlSafetySwitch_Request * msg = (roar_msgs__srv__ToggleControlSafetySwitch_Request *)malloc(sizeof(roar_msgs__srv__ToggleControlSafetySwitch_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roar_msgs__srv__ToggleControlSafetySwitch_Request));
  bool success = roar_msgs__srv__ToggleControlSafetySwitch_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
roar_msgs__srv__ToggleControlSafetySwitch_Request__destroy(roar_msgs__srv__ToggleControlSafetySwitch_Request * msg)
{
  if (msg) {
    roar_msgs__srv__ToggleControlSafetySwitch_Request__fini(msg);
  }
  free(msg);
}


bool
roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence__init(roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  roar_msgs__srv__ToggleControlSafetySwitch_Request * data = NULL;
  if (size) {
    data = (roar_msgs__srv__ToggleControlSafetySwitch_Request *)calloc(size, sizeof(roar_msgs__srv__ToggleControlSafetySwitch_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roar_msgs__srv__ToggleControlSafetySwitch_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roar_msgs__srv__ToggleControlSafetySwitch_Request__fini(&data[i - 1]);
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
roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence__fini(roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      roar_msgs__srv__ToggleControlSafetySwitch_Request__fini(&array->data[i]);
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

roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence *
roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence__create(size_t size)
{
  roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence * array = (roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence *)malloc(sizeof(roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence__destroy(roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence * array)
{
  if (array) {
    roar_msgs__srv__ToggleControlSafetySwitch_Request__Sequence__fini(array);
  }
  free(array);
}


bool
roar_msgs__srv__ToggleControlSafetySwitch_Response__init(roar_msgs__srv__ToggleControlSafetySwitch_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
roar_msgs__srv__ToggleControlSafetySwitch_Response__fini(roar_msgs__srv__ToggleControlSafetySwitch_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

roar_msgs__srv__ToggleControlSafetySwitch_Response *
roar_msgs__srv__ToggleControlSafetySwitch_Response__create()
{
  roar_msgs__srv__ToggleControlSafetySwitch_Response * msg = (roar_msgs__srv__ToggleControlSafetySwitch_Response *)malloc(sizeof(roar_msgs__srv__ToggleControlSafetySwitch_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roar_msgs__srv__ToggleControlSafetySwitch_Response));
  bool success = roar_msgs__srv__ToggleControlSafetySwitch_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
roar_msgs__srv__ToggleControlSafetySwitch_Response__destroy(roar_msgs__srv__ToggleControlSafetySwitch_Response * msg)
{
  if (msg) {
    roar_msgs__srv__ToggleControlSafetySwitch_Response__fini(msg);
  }
  free(msg);
}


bool
roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence__init(roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  roar_msgs__srv__ToggleControlSafetySwitch_Response * data = NULL;
  if (size) {
    data = (roar_msgs__srv__ToggleControlSafetySwitch_Response *)calloc(size, sizeof(roar_msgs__srv__ToggleControlSafetySwitch_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roar_msgs__srv__ToggleControlSafetySwitch_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roar_msgs__srv__ToggleControlSafetySwitch_Response__fini(&data[i - 1]);
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
roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence__fini(roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      roar_msgs__srv__ToggleControlSafetySwitch_Response__fini(&array->data[i]);
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

roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence *
roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence__create(size_t size)
{
  roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence * array = (roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence *)malloc(sizeof(roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence__destroy(roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence * array)
{
  if (array) {
    roar_msgs__srv__ToggleControlSafetySwitch_Response__Sequence__fini(array);
  }
  free(array);
}
