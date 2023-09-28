// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_interfaces:srv/LoadMap.idl
// generated code does not contain a copyright notice
#include "planning_interfaces/srv/detail/load_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `map_url`
#include "rosidl_runtime_c/string_functions.h"

bool
planning_interfaces__srv__LoadMap_Request__init(planning_interfaces__srv__LoadMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // map_url
  if (!rosidl_runtime_c__String__init(&msg->map_url)) {
    planning_interfaces__srv__LoadMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__srv__LoadMap_Request__fini(planning_interfaces__srv__LoadMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // map_url
  rosidl_runtime_c__String__fini(&msg->map_url);
}

planning_interfaces__srv__LoadMap_Request *
planning_interfaces__srv__LoadMap_Request__create()
{
  planning_interfaces__srv__LoadMap_Request * msg = (planning_interfaces__srv__LoadMap_Request *)malloc(sizeof(planning_interfaces__srv__LoadMap_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__srv__LoadMap_Request));
  bool success = planning_interfaces__srv__LoadMap_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__srv__LoadMap_Request__destroy(planning_interfaces__srv__LoadMap_Request * msg)
{
  if (msg) {
    planning_interfaces__srv__LoadMap_Request__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__srv__LoadMap_Request__Sequence__init(planning_interfaces__srv__LoadMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__srv__LoadMap_Request * data = NULL;
  if (size) {
    data = (planning_interfaces__srv__LoadMap_Request *)calloc(size, sizeof(planning_interfaces__srv__LoadMap_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__srv__LoadMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__srv__LoadMap_Request__fini(&data[i - 1]);
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
planning_interfaces__srv__LoadMap_Request__Sequence__fini(planning_interfaces__srv__LoadMap_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__srv__LoadMap_Request__fini(&array->data[i]);
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

planning_interfaces__srv__LoadMap_Request__Sequence *
planning_interfaces__srv__LoadMap_Request__Sequence__create(size_t size)
{
  planning_interfaces__srv__LoadMap_Request__Sequence * array = (planning_interfaces__srv__LoadMap_Request__Sequence *)malloc(sizeof(planning_interfaces__srv__LoadMap_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__srv__LoadMap_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__srv__LoadMap_Request__Sequence__destroy(planning_interfaces__srv__LoadMap_Request__Sequence * array)
{
  if (array) {
    planning_interfaces__srv__LoadMap_Request__Sequence__fini(array);
  }
  free(array);
}


bool
planning_interfaces__srv__LoadMap_Response__init(planning_interfaces__srv__LoadMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
planning_interfaces__srv__LoadMap_Response__fini(planning_interfaces__srv__LoadMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

planning_interfaces__srv__LoadMap_Response *
planning_interfaces__srv__LoadMap_Response__create()
{
  planning_interfaces__srv__LoadMap_Response * msg = (planning_interfaces__srv__LoadMap_Response *)malloc(sizeof(planning_interfaces__srv__LoadMap_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__srv__LoadMap_Response));
  bool success = planning_interfaces__srv__LoadMap_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__srv__LoadMap_Response__destroy(planning_interfaces__srv__LoadMap_Response * msg)
{
  if (msg) {
    planning_interfaces__srv__LoadMap_Response__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__srv__LoadMap_Response__Sequence__init(planning_interfaces__srv__LoadMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__srv__LoadMap_Response * data = NULL;
  if (size) {
    data = (planning_interfaces__srv__LoadMap_Response *)calloc(size, sizeof(planning_interfaces__srv__LoadMap_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__srv__LoadMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__srv__LoadMap_Response__fini(&data[i - 1]);
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
planning_interfaces__srv__LoadMap_Response__Sequence__fini(planning_interfaces__srv__LoadMap_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__srv__LoadMap_Response__fini(&array->data[i]);
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

planning_interfaces__srv__LoadMap_Response__Sequence *
planning_interfaces__srv__LoadMap_Response__Sequence__create(size_t size)
{
  planning_interfaces__srv__LoadMap_Response__Sequence * array = (planning_interfaces__srv__LoadMap_Response__Sequence *)malloc(sizeof(planning_interfaces__srv__LoadMap_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__srv__LoadMap_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__srv__LoadMap_Response__Sequence__destroy(planning_interfaces__srv__LoadMap_Response__Sequence * array)
{
  if (array) {
    planning_interfaces__srv__LoadMap_Response__Sequence__fini(array);
  }
  free(array);
}
