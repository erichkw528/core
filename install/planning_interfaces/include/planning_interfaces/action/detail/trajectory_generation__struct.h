// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_interfaces:action/TrajectoryGeneration.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__ACTION__DETAIL__TRAJECTORY_GENERATION__STRUCT_H_
#define PLANNING_INTERFACES__ACTION__DETAIL__TRAJECTORY_GENERATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'costmap'
#include "nav2_msgs/msg/detail/costmap__struct.h"
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__struct.h"
// Member 'global_path'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'next_waypoint'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'footprint'
#include "geometry_msgs/msg/detail/polygon_stamped__struct.h"

// Struct defined in action/TrajectoryGeneration in the package planning_interfaces.
typedef struct planning_interfaces__action__TrajectoryGeneration_Goal
{
  nav2_msgs__msg__Costmap costmap;
  nav_msgs__msg__Odometry odom;
  nav_msgs__msg__Path global_path;
  geometry_msgs__msg__PoseStamped next_waypoint;
  geometry_msgs__msg__PolygonStamped footprint;
} planning_interfaces__action__TrajectoryGeneration_Goal;

// Struct for a sequence of planning_interfaces__action__TrajectoryGeneration_Goal.
typedef struct planning_interfaces__action__TrajectoryGeneration_Goal__Sequence
{
  planning_interfaces__action__TrajectoryGeneration_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__action__TrajectoryGeneration_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'trajectories'
#include "planning_interfaces/msg/detail/trajectories__struct.h"

// Struct defined in action/TrajectoryGeneration in the package planning_interfaces.
typedef struct planning_interfaces__action__TrajectoryGeneration_Result
{
  planning_interfaces__msg__Trajectories trajectories;
} planning_interfaces__action__TrajectoryGeneration_Result;

// Struct for a sequence of planning_interfaces__action__TrajectoryGeneration_Result.
typedef struct planning_interfaces__action__TrajectoryGeneration_Result__Sequence
{
  planning_interfaces__action__TrajectoryGeneration_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__action__TrajectoryGeneration_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "planning_interfaces/msg/detail/trajectory__struct.h"

// Struct defined in action/TrajectoryGeneration in the package planning_interfaces.
typedef struct planning_interfaces__action__TrajectoryGeneration_Feedback
{
  planning_interfaces__msg__Trajectory trajectory;
} planning_interfaces__action__TrajectoryGeneration_Feedback;

// Struct for a sequence of planning_interfaces__action__TrajectoryGeneration_Feedback.
typedef struct planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence
{
  planning_interfaces__action__TrajectoryGeneration_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "planning_interfaces/action/detail/trajectory_generation__struct.h"

// Struct defined in action/TrajectoryGeneration in the package planning_interfaces.
typedef struct planning_interfaces__action__TrajectoryGeneration_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  planning_interfaces__action__TrajectoryGeneration_Goal goal;
} planning_interfaces__action__TrajectoryGeneration_SendGoal_Request;

// Struct for a sequence of planning_interfaces__action__TrajectoryGeneration_SendGoal_Request.
typedef struct planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence
{
  planning_interfaces__action__TrajectoryGeneration_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/TrajectoryGeneration in the package planning_interfaces.
typedef struct planning_interfaces__action__TrajectoryGeneration_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} planning_interfaces__action__TrajectoryGeneration_SendGoal_Response;

// Struct for a sequence of planning_interfaces__action__TrajectoryGeneration_SendGoal_Response.
typedef struct planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence
{
  planning_interfaces__action__TrajectoryGeneration_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/TrajectoryGeneration in the package planning_interfaces.
typedef struct planning_interfaces__action__TrajectoryGeneration_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} planning_interfaces__action__TrajectoryGeneration_GetResult_Request;

// Struct for a sequence of planning_interfaces__action__TrajectoryGeneration_GetResult_Request.
typedef struct planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence
{
  planning_interfaces__action__TrajectoryGeneration_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"

// Struct defined in action/TrajectoryGeneration in the package planning_interfaces.
typedef struct planning_interfaces__action__TrajectoryGeneration_GetResult_Response
{
  int8_t status;
  planning_interfaces__action__TrajectoryGeneration_Result result;
} planning_interfaces__action__TrajectoryGeneration_GetResult_Response;

// Struct for a sequence of planning_interfaces__action__TrajectoryGeneration_GetResult_Response.
typedef struct planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence
{
  planning_interfaces__action__TrajectoryGeneration_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"

// Struct defined in action/TrajectoryGeneration in the package planning_interfaces.
typedef struct planning_interfaces__action__TrajectoryGeneration_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  planning_interfaces__action__TrajectoryGeneration_Feedback feedback;
} planning_interfaces__action__TrajectoryGeneration_FeedbackMessage;

// Struct for a sequence of planning_interfaces__action__TrajectoryGeneration_FeedbackMessage.
typedef struct planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence
{
  planning_interfaces__action__TrajectoryGeneration_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_INTERFACES__ACTION__DETAIL__TRAJECTORY_GENERATION__STRUCT_H_
