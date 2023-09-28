// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_interfaces:action/Control.idl
// generated code does not contain a copyright notice
#include "control_interfaces/action/detail/control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `path`
#include "nav_msgs/msg/detail/path__functions.h"

bool
control_interfaces__action__Control_Goal__init(control_interfaces__action__Control_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__init(&msg->path)) {
    control_interfaces__action__Control_Goal__fini(msg);
    return false;
  }
  // target_spd
  // overwrite_previous
  return true;
}

void
control_interfaces__action__Control_Goal__fini(control_interfaces__action__Control_Goal * msg)
{
  if (!msg) {
    return;
  }
  // path
  nav_msgs__msg__Path__fini(&msg->path);
  // target_spd
  // overwrite_previous
}

control_interfaces__action__Control_Goal *
control_interfaces__action__Control_Goal__create()
{
  control_interfaces__action__Control_Goal * msg = (control_interfaces__action__Control_Goal *)malloc(sizeof(control_interfaces__action__Control_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__Control_Goal));
  bool success = control_interfaces__action__Control_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__Control_Goal__destroy(control_interfaces__action__Control_Goal * msg)
{
  if (msg) {
    control_interfaces__action__Control_Goal__fini(msg);
  }
  free(msg);
}


bool
control_interfaces__action__Control_Goal__Sequence__init(control_interfaces__action__Control_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_interfaces__action__Control_Goal * data = NULL;
  if (size) {
    data = (control_interfaces__action__Control_Goal *)calloc(size, sizeof(control_interfaces__action__Control_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__Control_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__Control_Goal__fini(&data[i - 1]);
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
control_interfaces__action__Control_Goal__Sequence__fini(control_interfaces__action__Control_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_interfaces__action__Control_Goal__fini(&array->data[i]);
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

control_interfaces__action__Control_Goal__Sequence *
control_interfaces__action__Control_Goal__Sequence__create(size_t size)
{
  control_interfaces__action__Control_Goal__Sequence * array = (control_interfaces__action__Control_Goal__Sequence *)malloc(sizeof(control_interfaces__action__Control_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__Control_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__Control_Goal__Sequence__destroy(control_interfaces__action__Control_Goal__Sequence * array)
{
  if (array) {
    control_interfaces__action__Control_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
control_interfaces__action__Control_Result__init(control_interfaces__action__Control_Result * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
control_interfaces__action__Control_Result__fini(control_interfaces__action__Control_Result * msg)
{
  if (!msg) {
    return;
  }
  // status
}

control_interfaces__action__Control_Result *
control_interfaces__action__Control_Result__create()
{
  control_interfaces__action__Control_Result * msg = (control_interfaces__action__Control_Result *)malloc(sizeof(control_interfaces__action__Control_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__Control_Result));
  bool success = control_interfaces__action__Control_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__Control_Result__destroy(control_interfaces__action__Control_Result * msg)
{
  if (msg) {
    control_interfaces__action__Control_Result__fini(msg);
  }
  free(msg);
}


bool
control_interfaces__action__Control_Result__Sequence__init(control_interfaces__action__Control_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_interfaces__action__Control_Result * data = NULL;
  if (size) {
    data = (control_interfaces__action__Control_Result *)calloc(size, sizeof(control_interfaces__action__Control_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__Control_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__Control_Result__fini(&data[i - 1]);
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
control_interfaces__action__Control_Result__Sequence__fini(control_interfaces__action__Control_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_interfaces__action__Control_Result__fini(&array->data[i]);
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

control_interfaces__action__Control_Result__Sequence *
control_interfaces__action__Control_Result__Sequence__create(size_t size)
{
  control_interfaces__action__Control_Result__Sequence * array = (control_interfaces__action__Control_Result__Sequence *)malloc(sizeof(control_interfaces__action__Control_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__Control_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__Control_Result__Sequence__destroy(control_interfaces__action__Control_Result__Sequence * array)
{
  if (array) {
    control_interfaces__action__Control_Result__Sequence__fini(array);
  }
  free(array);
}


bool
control_interfaces__action__Control_Feedback__init(control_interfaces__action__Control_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // curr_index
  return true;
}

void
control_interfaces__action__Control_Feedback__fini(control_interfaces__action__Control_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // curr_index
}

control_interfaces__action__Control_Feedback *
control_interfaces__action__Control_Feedback__create()
{
  control_interfaces__action__Control_Feedback * msg = (control_interfaces__action__Control_Feedback *)malloc(sizeof(control_interfaces__action__Control_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__Control_Feedback));
  bool success = control_interfaces__action__Control_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__Control_Feedback__destroy(control_interfaces__action__Control_Feedback * msg)
{
  if (msg) {
    control_interfaces__action__Control_Feedback__fini(msg);
  }
  free(msg);
}


bool
control_interfaces__action__Control_Feedback__Sequence__init(control_interfaces__action__Control_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_interfaces__action__Control_Feedback * data = NULL;
  if (size) {
    data = (control_interfaces__action__Control_Feedback *)calloc(size, sizeof(control_interfaces__action__Control_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__Control_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__Control_Feedback__fini(&data[i - 1]);
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
control_interfaces__action__Control_Feedback__Sequence__fini(control_interfaces__action__Control_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_interfaces__action__Control_Feedback__fini(&array->data[i]);
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

control_interfaces__action__Control_Feedback__Sequence *
control_interfaces__action__Control_Feedback__Sequence__create(size_t size)
{
  control_interfaces__action__Control_Feedback__Sequence * array = (control_interfaces__action__Control_Feedback__Sequence *)malloc(sizeof(control_interfaces__action__Control_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__Control_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__Control_Feedback__Sequence__destroy(control_interfaces__action__Control_Feedback__Sequence * array)
{
  if (array) {
    control_interfaces__action__Control_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "control_interfaces/action/detail/control__functions.h"

bool
control_interfaces__action__Control_SendGoal_Request__init(control_interfaces__action__Control_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_interfaces__action__Control_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!control_interfaces__action__Control_Goal__init(&msg->goal)) {
    control_interfaces__action__Control_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__action__Control_SendGoal_Request__fini(control_interfaces__action__Control_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  control_interfaces__action__Control_Goal__fini(&msg->goal);
}

control_interfaces__action__Control_SendGoal_Request *
control_interfaces__action__Control_SendGoal_Request__create()
{
  control_interfaces__action__Control_SendGoal_Request * msg = (control_interfaces__action__Control_SendGoal_Request *)malloc(sizeof(control_interfaces__action__Control_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__Control_SendGoal_Request));
  bool success = control_interfaces__action__Control_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__Control_SendGoal_Request__destroy(control_interfaces__action__Control_SendGoal_Request * msg)
{
  if (msg) {
    control_interfaces__action__Control_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
control_interfaces__action__Control_SendGoal_Request__Sequence__init(control_interfaces__action__Control_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_interfaces__action__Control_SendGoal_Request * data = NULL;
  if (size) {
    data = (control_interfaces__action__Control_SendGoal_Request *)calloc(size, sizeof(control_interfaces__action__Control_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__Control_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__Control_SendGoal_Request__fini(&data[i - 1]);
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
control_interfaces__action__Control_SendGoal_Request__Sequence__fini(control_interfaces__action__Control_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_interfaces__action__Control_SendGoal_Request__fini(&array->data[i]);
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

control_interfaces__action__Control_SendGoal_Request__Sequence *
control_interfaces__action__Control_SendGoal_Request__Sequence__create(size_t size)
{
  control_interfaces__action__Control_SendGoal_Request__Sequence * array = (control_interfaces__action__Control_SendGoal_Request__Sequence *)malloc(sizeof(control_interfaces__action__Control_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__Control_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__Control_SendGoal_Request__Sequence__destroy(control_interfaces__action__Control_SendGoal_Request__Sequence * array)
{
  if (array) {
    control_interfaces__action__Control_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
control_interfaces__action__Control_SendGoal_Response__init(control_interfaces__action__Control_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    control_interfaces__action__Control_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__action__Control_SendGoal_Response__fini(control_interfaces__action__Control_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

control_interfaces__action__Control_SendGoal_Response *
control_interfaces__action__Control_SendGoal_Response__create()
{
  control_interfaces__action__Control_SendGoal_Response * msg = (control_interfaces__action__Control_SendGoal_Response *)malloc(sizeof(control_interfaces__action__Control_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__Control_SendGoal_Response));
  bool success = control_interfaces__action__Control_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__Control_SendGoal_Response__destroy(control_interfaces__action__Control_SendGoal_Response * msg)
{
  if (msg) {
    control_interfaces__action__Control_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
control_interfaces__action__Control_SendGoal_Response__Sequence__init(control_interfaces__action__Control_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_interfaces__action__Control_SendGoal_Response * data = NULL;
  if (size) {
    data = (control_interfaces__action__Control_SendGoal_Response *)calloc(size, sizeof(control_interfaces__action__Control_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__Control_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__Control_SendGoal_Response__fini(&data[i - 1]);
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
control_interfaces__action__Control_SendGoal_Response__Sequence__fini(control_interfaces__action__Control_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_interfaces__action__Control_SendGoal_Response__fini(&array->data[i]);
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

control_interfaces__action__Control_SendGoal_Response__Sequence *
control_interfaces__action__Control_SendGoal_Response__Sequence__create(size_t size)
{
  control_interfaces__action__Control_SendGoal_Response__Sequence * array = (control_interfaces__action__Control_SendGoal_Response__Sequence *)malloc(sizeof(control_interfaces__action__Control_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__Control_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__Control_SendGoal_Response__Sequence__destroy(control_interfaces__action__Control_SendGoal_Response__Sequence * array)
{
  if (array) {
    control_interfaces__action__Control_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
control_interfaces__action__Control_GetResult_Request__init(control_interfaces__action__Control_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_interfaces__action__Control_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__action__Control_GetResult_Request__fini(control_interfaces__action__Control_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

control_interfaces__action__Control_GetResult_Request *
control_interfaces__action__Control_GetResult_Request__create()
{
  control_interfaces__action__Control_GetResult_Request * msg = (control_interfaces__action__Control_GetResult_Request *)malloc(sizeof(control_interfaces__action__Control_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__Control_GetResult_Request));
  bool success = control_interfaces__action__Control_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__Control_GetResult_Request__destroy(control_interfaces__action__Control_GetResult_Request * msg)
{
  if (msg) {
    control_interfaces__action__Control_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
control_interfaces__action__Control_GetResult_Request__Sequence__init(control_interfaces__action__Control_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_interfaces__action__Control_GetResult_Request * data = NULL;
  if (size) {
    data = (control_interfaces__action__Control_GetResult_Request *)calloc(size, sizeof(control_interfaces__action__Control_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__Control_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__Control_GetResult_Request__fini(&data[i - 1]);
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
control_interfaces__action__Control_GetResult_Request__Sequence__fini(control_interfaces__action__Control_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_interfaces__action__Control_GetResult_Request__fini(&array->data[i]);
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

control_interfaces__action__Control_GetResult_Request__Sequence *
control_interfaces__action__Control_GetResult_Request__Sequence__create(size_t size)
{
  control_interfaces__action__Control_GetResult_Request__Sequence * array = (control_interfaces__action__Control_GetResult_Request__Sequence *)malloc(sizeof(control_interfaces__action__Control_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__Control_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__Control_GetResult_Request__Sequence__destroy(control_interfaces__action__Control_GetResult_Request__Sequence * array)
{
  if (array) {
    control_interfaces__action__Control_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "control_interfaces/action/detail/control__functions.h"

bool
control_interfaces__action__Control_GetResult_Response__init(control_interfaces__action__Control_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!control_interfaces__action__Control_Result__init(&msg->result)) {
    control_interfaces__action__Control_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__action__Control_GetResult_Response__fini(control_interfaces__action__Control_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  control_interfaces__action__Control_Result__fini(&msg->result);
}

control_interfaces__action__Control_GetResult_Response *
control_interfaces__action__Control_GetResult_Response__create()
{
  control_interfaces__action__Control_GetResult_Response * msg = (control_interfaces__action__Control_GetResult_Response *)malloc(sizeof(control_interfaces__action__Control_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__Control_GetResult_Response));
  bool success = control_interfaces__action__Control_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__Control_GetResult_Response__destroy(control_interfaces__action__Control_GetResult_Response * msg)
{
  if (msg) {
    control_interfaces__action__Control_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
control_interfaces__action__Control_GetResult_Response__Sequence__init(control_interfaces__action__Control_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_interfaces__action__Control_GetResult_Response * data = NULL;
  if (size) {
    data = (control_interfaces__action__Control_GetResult_Response *)calloc(size, sizeof(control_interfaces__action__Control_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__Control_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__Control_GetResult_Response__fini(&data[i - 1]);
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
control_interfaces__action__Control_GetResult_Response__Sequence__fini(control_interfaces__action__Control_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_interfaces__action__Control_GetResult_Response__fini(&array->data[i]);
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

control_interfaces__action__Control_GetResult_Response__Sequence *
control_interfaces__action__Control_GetResult_Response__Sequence__create(size_t size)
{
  control_interfaces__action__Control_GetResult_Response__Sequence * array = (control_interfaces__action__Control_GetResult_Response__Sequence *)malloc(sizeof(control_interfaces__action__Control_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__Control_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__Control_GetResult_Response__Sequence__destroy(control_interfaces__action__Control_GetResult_Response__Sequence * array)
{
  if (array) {
    control_interfaces__action__Control_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "control_interfaces/action/detail/control__functions.h"

bool
control_interfaces__action__Control_FeedbackMessage__init(control_interfaces__action__Control_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_interfaces__action__Control_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!control_interfaces__action__Control_Feedback__init(&msg->feedback)) {
    control_interfaces__action__Control_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__action__Control_FeedbackMessage__fini(control_interfaces__action__Control_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  control_interfaces__action__Control_Feedback__fini(&msg->feedback);
}

control_interfaces__action__Control_FeedbackMessage *
control_interfaces__action__Control_FeedbackMessage__create()
{
  control_interfaces__action__Control_FeedbackMessage * msg = (control_interfaces__action__Control_FeedbackMessage *)malloc(sizeof(control_interfaces__action__Control_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__Control_FeedbackMessage));
  bool success = control_interfaces__action__Control_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__Control_FeedbackMessage__destroy(control_interfaces__action__Control_FeedbackMessage * msg)
{
  if (msg) {
    control_interfaces__action__Control_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
control_interfaces__action__Control_FeedbackMessage__Sequence__init(control_interfaces__action__Control_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_interfaces__action__Control_FeedbackMessage * data = NULL;
  if (size) {
    data = (control_interfaces__action__Control_FeedbackMessage *)calloc(size, sizeof(control_interfaces__action__Control_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__Control_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__Control_FeedbackMessage__fini(&data[i - 1]);
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
control_interfaces__action__Control_FeedbackMessage__Sequence__fini(control_interfaces__action__Control_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_interfaces__action__Control_FeedbackMessage__fini(&array->data[i]);
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

control_interfaces__action__Control_FeedbackMessage__Sequence *
control_interfaces__action__Control_FeedbackMessage__Sequence__create(size_t size)
{
  control_interfaces__action__Control_FeedbackMessage__Sequence * array = (control_interfaces__action__Control_FeedbackMessage__Sequence *)malloc(sizeof(control_interfaces__action__Control_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__Control_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__Control_FeedbackMessage__Sequence__destroy(control_interfaces__action__Control_FeedbackMessage__Sequence * array)
{
  if (array) {
    control_interfaces__action__Control_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
