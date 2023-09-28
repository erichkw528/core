// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_interfaces:action/TrajectoryGeneration.idl
// generated code does not contain a copyright notice
#include "planning_interfaces/action/detail/trajectory_generation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `costmap`
#include "nav2_msgs/msg/detail/costmap__functions.h"
// Member `odom`
#include "nav_msgs/msg/detail/odometry__functions.h"
// Member `global_path`
#include "nav_msgs/msg/detail/path__functions.h"
// Member `next_waypoint`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `footprint`
#include "geometry_msgs/msg/detail/polygon_stamped__functions.h"

bool
planning_interfaces__action__TrajectoryGeneration_Goal__init(planning_interfaces__action__TrajectoryGeneration_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // costmap
  if (!nav2_msgs__msg__Costmap__init(&msg->costmap)) {
    planning_interfaces__action__TrajectoryGeneration_Goal__fini(msg);
    return false;
  }
  // odom
  if (!nav_msgs__msg__Odometry__init(&msg->odom)) {
    planning_interfaces__action__TrajectoryGeneration_Goal__fini(msg);
    return false;
  }
  // global_path
  if (!nav_msgs__msg__Path__init(&msg->global_path)) {
    planning_interfaces__action__TrajectoryGeneration_Goal__fini(msg);
    return false;
  }
  // next_waypoint
  if (!geometry_msgs__msg__PoseStamped__init(&msg->next_waypoint)) {
    planning_interfaces__action__TrajectoryGeneration_Goal__fini(msg);
    return false;
  }
  // footprint
  if (!geometry_msgs__msg__PolygonStamped__init(&msg->footprint)) {
    planning_interfaces__action__TrajectoryGeneration_Goal__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__action__TrajectoryGeneration_Goal__fini(planning_interfaces__action__TrajectoryGeneration_Goal * msg)
{
  if (!msg) {
    return;
  }
  // costmap
  nav2_msgs__msg__Costmap__fini(&msg->costmap);
  // odom
  nav_msgs__msg__Odometry__fini(&msg->odom);
  // global_path
  nav_msgs__msg__Path__fini(&msg->global_path);
  // next_waypoint
  geometry_msgs__msg__PoseStamped__fini(&msg->next_waypoint);
  // footprint
  geometry_msgs__msg__PolygonStamped__fini(&msg->footprint);
}

planning_interfaces__action__TrajectoryGeneration_Goal *
planning_interfaces__action__TrajectoryGeneration_Goal__create()
{
  planning_interfaces__action__TrajectoryGeneration_Goal * msg = (planning_interfaces__action__TrajectoryGeneration_Goal *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__action__TrajectoryGeneration_Goal));
  bool success = planning_interfaces__action__TrajectoryGeneration_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__action__TrajectoryGeneration_Goal__destroy(planning_interfaces__action__TrajectoryGeneration_Goal * msg)
{
  if (msg) {
    planning_interfaces__action__TrajectoryGeneration_Goal__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__action__TrajectoryGeneration_Goal__Sequence__init(planning_interfaces__action__TrajectoryGeneration_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__action__TrajectoryGeneration_Goal * data = NULL;
  if (size) {
    data = (planning_interfaces__action__TrajectoryGeneration_Goal *)calloc(size, sizeof(planning_interfaces__action__TrajectoryGeneration_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__action__TrajectoryGeneration_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__action__TrajectoryGeneration_Goal__fini(&data[i - 1]);
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
planning_interfaces__action__TrajectoryGeneration_Goal__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__action__TrajectoryGeneration_Goal__fini(&array->data[i]);
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

planning_interfaces__action__TrajectoryGeneration_Goal__Sequence *
planning_interfaces__action__TrajectoryGeneration_Goal__Sequence__create(size_t size)
{
  planning_interfaces__action__TrajectoryGeneration_Goal__Sequence * array = (planning_interfaces__action__TrajectoryGeneration_Goal__Sequence *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__action__TrajectoryGeneration_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__action__TrajectoryGeneration_Goal__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_Goal__Sequence * array)
{
  if (array) {
    planning_interfaces__action__TrajectoryGeneration_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `trajectories`
#include "planning_interfaces/msg/detail/trajectories__functions.h"

bool
planning_interfaces__action__TrajectoryGeneration_Result__init(planning_interfaces__action__TrajectoryGeneration_Result * msg)
{
  if (!msg) {
    return false;
  }
  // trajectories
  if (!planning_interfaces__msg__Trajectories__init(&msg->trajectories)) {
    planning_interfaces__action__TrajectoryGeneration_Result__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__action__TrajectoryGeneration_Result__fini(planning_interfaces__action__TrajectoryGeneration_Result * msg)
{
  if (!msg) {
    return;
  }
  // trajectories
  planning_interfaces__msg__Trajectories__fini(&msg->trajectories);
}

planning_interfaces__action__TrajectoryGeneration_Result *
planning_interfaces__action__TrajectoryGeneration_Result__create()
{
  planning_interfaces__action__TrajectoryGeneration_Result * msg = (planning_interfaces__action__TrajectoryGeneration_Result *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__action__TrajectoryGeneration_Result));
  bool success = planning_interfaces__action__TrajectoryGeneration_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__action__TrajectoryGeneration_Result__destroy(planning_interfaces__action__TrajectoryGeneration_Result * msg)
{
  if (msg) {
    planning_interfaces__action__TrajectoryGeneration_Result__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__action__TrajectoryGeneration_Result__Sequence__init(planning_interfaces__action__TrajectoryGeneration_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__action__TrajectoryGeneration_Result * data = NULL;
  if (size) {
    data = (planning_interfaces__action__TrajectoryGeneration_Result *)calloc(size, sizeof(planning_interfaces__action__TrajectoryGeneration_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__action__TrajectoryGeneration_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__action__TrajectoryGeneration_Result__fini(&data[i - 1]);
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
planning_interfaces__action__TrajectoryGeneration_Result__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__action__TrajectoryGeneration_Result__fini(&array->data[i]);
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

planning_interfaces__action__TrajectoryGeneration_Result__Sequence *
planning_interfaces__action__TrajectoryGeneration_Result__Sequence__create(size_t size)
{
  planning_interfaces__action__TrajectoryGeneration_Result__Sequence * array = (planning_interfaces__action__TrajectoryGeneration_Result__Sequence *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__action__TrajectoryGeneration_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__action__TrajectoryGeneration_Result__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_Result__Sequence * array)
{
  if (array) {
    planning_interfaces__action__TrajectoryGeneration_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `trajectory`
#include "planning_interfaces/msg/detail/trajectory__functions.h"

bool
planning_interfaces__action__TrajectoryGeneration_Feedback__init(planning_interfaces__action__TrajectoryGeneration_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!planning_interfaces__msg__Trajectory__init(&msg->trajectory)) {
    planning_interfaces__action__TrajectoryGeneration_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__action__TrajectoryGeneration_Feedback__fini(planning_interfaces__action__TrajectoryGeneration_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  planning_interfaces__msg__Trajectory__fini(&msg->trajectory);
}

planning_interfaces__action__TrajectoryGeneration_Feedback *
planning_interfaces__action__TrajectoryGeneration_Feedback__create()
{
  planning_interfaces__action__TrajectoryGeneration_Feedback * msg = (planning_interfaces__action__TrajectoryGeneration_Feedback *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__action__TrajectoryGeneration_Feedback));
  bool success = planning_interfaces__action__TrajectoryGeneration_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__action__TrajectoryGeneration_Feedback__destroy(planning_interfaces__action__TrajectoryGeneration_Feedback * msg)
{
  if (msg) {
    planning_interfaces__action__TrajectoryGeneration_Feedback__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence__init(planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__action__TrajectoryGeneration_Feedback * data = NULL;
  if (size) {
    data = (planning_interfaces__action__TrajectoryGeneration_Feedback *)calloc(size, sizeof(planning_interfaces__action__TrajectoryGeneration_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__action__TrajectoryGeneration_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__action__TrajectoryGeneration_Feedback__fini(&data[i - 1]);
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
planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__action__TrajectoryGeneration_Feedback__fini(&array->data[i]);
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

planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence *
planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence__create(size_t size)
{
  planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence * array = (planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence * array)
{
  if (array) {
    planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"

bool
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__init(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!planning_interfaces__action__TrajectoryGeneration_Goal__init(&msg->goal)) {
    planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__fini(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  planning_interfaces__action__TrajectoryGeneration_Goal__fini(&msg->goal);
}

planning_interfaces__action__TrajectoryGeneration_SendGoal_Request *
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__create()
{
  planning_interfaces__action__TrajectoryGeneration_SendGoal_Request * msg = (planning_interfaces__action__TrajectoryGeneration_SendGoal_Request *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request));
  bool success = planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__destroy(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request * msg)
{
  if (msg) {
    planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence__init(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__action__TrajectoryGeneration_SendGoal_Request * data = NULL;
  if (size) {
    data = (planning_interfaces__action__TrajectoryGeneration_SendGoal_Request *)calloc(size, sizeof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__fini(&data[i - 1]);
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
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__fini(&array->data[i]);
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

planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence *
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence__create(size_t size)
{
  planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence * array = (planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence * array)
{
  if (array) {
    planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__init(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__fini(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

planning_interfaces__action__TrajectoryGeneration_SendGoal_Response *
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__create()
{
  planning_interfaces__action__TrajectoryGeneration_SendGoal_Response * msg = (planning_interfaces__action__TrajectoryGeneration_SendGoal_Response *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response));
  bool success = planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__destroy(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response * msg)
{
  if (msg) {
    planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence__init(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__action__TrajectoryGeneration_SendGoal_Response * data = NULL;
  if (size) {
    data = (planning_interfaces__action__TrajectoryGeneration_SendGoal_Response *)calloc(size, sizeof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__fini(&data[i - 1]);
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
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__fini(&array->data[i]);
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

planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence *
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence__create(size_t size)
{
  planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence * array = (planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence * array)
{
  if (array) {
    planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__init(planning_interfaces__action__TrajectoryGeneration_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    planning_interfaces__action__TrajectoryGeneration_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__fini(planning_interfaces__action__TrajectoryGeneration_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

planning_interfaces__action__TrajectoryGeneration_GetResult_Request *
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__create()
{
  planning_interfaces__action__TrajectoryGeneration_GetResult_Request * msg = (planning_interfaces__action__TrajectoryGeneration_GetResult_Request *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__action__TrajectoryGeneration_GetResult_Request));
  bool success = planning_interfaces__action__TrajectoryGeneration_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__destroy(planning_interfaces__action__TrajectoryGeneration_GetResult_Request * msg)
{
  if (msg) {
    planning_interfaces__action__TrajectoryGeneration_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence__init(planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__action__TrajectoryGeneration_GetResult_Request * data = NULL;
  if (size) {
    data = (planning_interfaces__action__TrajectoryGeneration_GetResult_Request *)calloc(size, sizeof(planning_interfaces__action__TrajectoryGeneration_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__action__TrajectoryGeneration_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__action__TrajectoryGeneration_GetResult_Request__fini(&data[i - 1]);
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
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__action__TrajectoryGeneration_GetResult_Request__fini(&array->data[i]);
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

planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence *
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence__create(size_t size)
{
  planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence * array = (planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence * array)
{
  if (array) {
    planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"

bool
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__init(planning_interfaces__action__TrajectoryGeneration_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!planning_interfaces__action__TrajectoryGeneration_Result__init(&msg->result)) {
    planning_interfaces__action__TrajectoryGeneration_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__fini(planning_interfaces__action__TrajectoryGeneration_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  planning_interfaces__action__TrajectoryGeneration_Result__fini(&msg->result);
}

planning_interfaces__action__TrajectoryGeneration_GetResult_Response *
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__create()
{
  planning_interfaces__action__TrajectoryGeneration_GetResult_Response * msg = (planning_interfaces__action__TrajectoryGeneration_GetResult_Response *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__action__TrajectoryGeneration_GetResult_Response));
  bool success = planning_interfaces__action__TrajectoryGeneration_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__destroy(planning_interfaces__action__TrajectoryGeneration_GetResult_Response * msg)
{
  if (msg) {
    planning_interfaces__action__TrajectoryGeneration_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence__init(planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__action__TrajectoryGeneration_GetResult_Response * data = NULL;
  if (size) {
    data = (planning_interfaces__action__TrajectoryGeneration_GetResult_Response *)calloc(size, sizeof(planning_interfaces__action__TrajectoryGeneration_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__action__TrajectoryGeneration_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__action__TrajectoryGeneration_GetResult_Response__fini(&data[i - 1]);
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
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__action__TrajectoryGeneration_GetResult_Response__fini(&array->data[i]);
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

planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence *
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence__create(size_t size)
{
  planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence * array = (planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence * array)
{
  if (array) {
    planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"

bool
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__init(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!planning_interfaces__action__TrajectoryGeneration_Feedback__init(&msg->feedback)) {
    planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__fini(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  planning_interfaces__action__TrajectoryGeneration_Feedback__fini(&msg->feedback);
}

planning_interfaces__action__TrajectoryGeneration_FeedbackMessage *
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__create()
{
  planning_interfaces__action__TrajectoryGeneration_FeedbackMessage * msg = (planning_interfaces__action__TrajectoryGeneration_FeedbackMessage *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage));
  bool success = planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__destroy(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage * msg)
{
  if (msg) {
    planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence__init(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__action__TrajectoryGeneration_FeedbackMessage * data = NULL;
  if (size) {
    data = (planning_interfaces__action__TrajectoryGeneration_FeedbackMessage *)calloc(size, sizeof(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__fini(&data[i - 1]);
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
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__fini(&array->data[i]);
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

planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence *
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence__create(size_t size)
{
  planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence * array = (planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence *)malloc(sizeof(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence * array)
{
  if (array) {
    planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
