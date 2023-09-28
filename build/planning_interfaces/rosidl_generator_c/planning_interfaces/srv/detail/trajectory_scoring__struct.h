// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_interfaces:srv/TrajectoryScoring.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__SRV__DETAIL__TRAJECTORY_SCORING__STRUCT_H_
#define PLANNING_INTERFACES__SRV__DETAIL__TRAJECTORY_SCORING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'costmap'
#include "nav2_msgs/msg/detail/costmap__struct.h"
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__struct.h"
// Member 'next_waypoint'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

// Struct defined in srv/TrajectoryScoring in the package planning_interfaces.
typedef struct planning_interfaces__srv__TrajectoryScoring_Request
{
  nav_msgs__msg__Path trajectory;
  nav2_msgs__msg__Costmap costmap;
  nav_msgs__msg__Odometry odom;
  geometry_msgs__msg__PoseStamped next_waypoint;
} planning_interfaces__srv__TrajectoryScoring_Request;

// Struct for a sequence of planning_interfaces__srv__TrajectoryScoring_Request.
typedef struct planning_interfaces__srv__TrajectoryScoring_Request__Sequence
{
  planning_interfaces__srv__TrajectoryScoring_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__srv__TrajectoryScoring_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'score'
#include "planning_interfaces/msg/detail/trajectory_score__struct.h"

// Struct defined in srv/TrajectoryScoring in the package planning_interfaces.
typedef struct planning_interfaces__srv__TrajectoryScoring_Response
{
  planning_interfaces__msg__TrajectoryScore score;
} planning_interfaces__srv__TrajectoryScoring_Response;

// Struct for a sequence of planning_interfaces__srv__TrajectoryScoring_Response.
typedef struct planning_interfaces__srv__TrajectoryScoring_Response__Sequence
{
  planning_interfaces__srv__TrajectoryScoring_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__srv__TrajectoryScoring_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_INTERFACES__SRV__DETAIL__TRAJECTORY_SCORING__STRUCT_H_
