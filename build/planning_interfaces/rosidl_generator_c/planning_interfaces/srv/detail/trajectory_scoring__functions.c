// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_interfaces:srv/TrajectoryScoring.idl
// generated code does not contain a copyright notice
#include "planning_interfaces/srv/detail/trajectory_scoring__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `trajectory`
#include "nav_msgs/msg/detail/path__functions.h"
// Member `costmap`
#include "nav2_msgs/msg/detail/costmap__functions.h"
// Member `odom`
#include "nav_msgs/msg/detail/odometry__functions.h"
// Member `next_waypoint`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
planning_interfaces__srv__TrajectoryScoring_Request__init(planning_interfaces__srv__TrajectoryScoring_Request * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!nav_msgs__msg__Path__init(&msg->trajectory)) {
    planning_interfaces__srv__TrajectoryScoring_Request__fini(msg);
    return false;
  }
  // costmap
  if (!nav2_msgs__msg__Costmap__init(&msg->costmap)) {
    planning_interfaces__srv__TrajectoryScoring_Request__fini(msg);
    return false;
  }
  // odom
  if (!nav_msgs__msg__Odometry__init(&msg->odom)) {
    planning_interfaces__srv__TrajectoryScoring_Request__fini(msg);
    return false;
  }
  // next_waypoint
  if (!geometry_msgs__msg__PoseStamped__init(&msg->next_waypoint)) {
    planning_interfaces__srv__TrajectoryScoring_Request__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__srv__TrajectoryScoring_Request__fini(planning_interfaces__srv__TrajectoryScoring_Request * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  nav_msgs__msg__Path__fini(&msg->trajectory);
  // costmap
  nav2_msgs__msg__Costmap__fini(&msg->costmap);
  // odom
  nav_msgs__msg__Odometry__fini(&msg->odom);
  // next_waypoint
  geometry_msgs__msg__PoseStamped__fini(&msg->next_waypoint);
}

planning_interfaces__srv__TrajectoryScoring_Request *
planning_interfaces__srv__TrajectoryScoring_Request__create()
{
  planning_interfaces__srv__TrajectoryScoring_Request * msg = (planning_interfaces__srv__TrajectoryScoring_Request *)malloc(sizeof(planning_interfaces__srv__TrajectoryScoring_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__srv__TrajectoryScoring_Request));
  bool success = planning_interfaces__srv__TrajectoryScoring_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__srv__TrajectoryScoring_Request__destroy(planning_interfaces__srv__TrajectoryScoring_Request * msg)
{
  if (msg) {
    planning_interfaces__srv__TrajectoryScoring_Request__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__srv__TrajectoryScoring_Request__Sequence__init(planning_interfaces__srv__TrajectoryScoring_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__srv__TrajectoryScoring_Request * data = NULL;
  if (size) {
    data = (planning_interfaces__srv__TrajectoryScoring_Request *)calloc(size, sizeof(planning_interfaces__srv__TrajectoryScoring_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__srv__TrajectoryScoring_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__srv__TrajectoryScoring_Request__fini(&data[i - 1]);
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
planning_interfaces__srv__TrajectoryScoring_Request__Sequence__fini(planning_interfaces__srv__TrajectoryScoring_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__srv__TrajectoryScoring_Request__fini(&array->data[i]);
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

planning_interfaces__srv__TrajectoryScoring_Request__Sequence *
planning_interfaces__srv__TrajectoryScoring_Request__Sequence__create(size_t size)
{
  planning_interfaces__srv__TrajectoryScoring_Request__Sequence * array = (planning_interfaces__srv__TrajectoryScoring_Request__Sequence *)malloc(sizeof(planning_interfaces__srv__TrajectoryScoring_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__srv__TrajectoryScoring_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__srv__TrajectoryScoring_Request__Sequence__destroy(planning_interfaces__srv__TrajectoryScoring_Request__Sequence * array)
{
  if (array) {
    planning_interfaces__srv__TrajectoryScoring_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `score`
#include "planning_interfaces/msg/detail/trajectory_score__functions.h"

bool
planning_interfaces__srv__TrajectoryScoring_Response__init(planning_interfaces__srv__TrajectoryScoring_Response * msg)
{
  if (!msg) {
    return false;
  }
  // score
  if (!planning_interfaces__msg__TrajectoryScore__init(&msg->score)) {
    planning_interfaces__srv__TrajectoryScoring_Response__fini(msg);
    return false;
  }
  return true;
}

void
planning_interfaces__srv__TrajectoryScoring_Response__fini(planning_interfaces__srv__TrajectoryScoring_Response * msg)
{
  if (!msg) {
    return;
  }
  // score
  planning_interfaces__msg__TrajectoryScore__fini(&msg->score);
}

planning_interfaces__srv__TrajectoryScoring_Response *
planning_interfaces__srv__TrajectoryScoring_Response__create()
{
  planning_interfaces__srv__TrajectoryScoring_Response * msg = (planning_interfaces__srv__TrajectoryScoring_Response *)malloc(sizeof(planning_interfaces__srv__TrajectoryScoring_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_interfaces__srv__TrajectoryScoring_Response));
  bool success = planning_interfaces__srv__TrajectoryScoring_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
planning_interfaces__srv__TrajectoryScoring_Response__destroy(planning_interfaces__srv__TrajectoryScoring_Response * msg)
{
  if (msg) {
    planning_interfaces__srv__TrajectoryScoring_Response__fini(msg);
  }
  free(msg);
}


bool
planning_interfaces__srv__TrajectoryScoring_Response__Sequence__init(planning_interfaces__srv__TrajectoryScoring_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  planning_interfaces__srv__TrajectoryScoring_Response * data = NULL;
  if (size) {
    data = (planning_interfaces__srv__TrajectoryScoring_Response *)calloc(size, sizeof(planning_interfaces__srv__TrajectoryScoring_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_interfaces__srv__TrajectoryScoring_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_interfaces__srv__TrajectoryScoring_Response__fini(&data[i - 1]);
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
planning_interfaces__srv__TrajectoryScoring_Response__Sequence__fini(planning_interfaces__srv__TrajectoryScoring_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planning_interfaces__srv__TrajectoryScoring_Response__fini(&array->data[i]);
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

planning_interfaces__srv__TrajectoryScoring_Response__Sequence *
planning_interfaces__srv__TrajectoryScoring_Response__Sequence__create(size_t size)
{
  planning_interfaces__srv__TrajectoryScoring_Response__Sequence * array = (planning_interfaces__srv__TrajectoryScoring_Response__Sequence *)malloc(sizeof(planning_interfaces__srv__TrajectoryScoring_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = planning_interfaces__srv__TrajectoryScoring_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
planning_interfaces__srv__TrajectoryScoring_Response__Sequence__destroy(planning_interfaces__srv__TrajectoryScoring_Response__Sequence * array)
{
  if (array) {
    planning_interfaces__srv__TrajectoryScoring_Response__Sequence__fini(array);
  }
  free(array);
}
