// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from planning_interfaces:action/TrajectoryGeneration.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"
#include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "planning_interfaces/action/detail/trajectory_generation__functions.h"
#include "planning_interfaces/action/detail/trajectory_generation__struct.h"


// Include directives for member types
// Member `costmap`
#include "nav2_msgs/msg/costmap.h"
// Member `costmap`
#include "nav2_msgs/msg/detail/costmap__rosidl_typesupport_introspection_c.h"
// Member `odom`
#include "nav_msgs/msg/odometry.h"
// Member `odom`
#include "nav_msgs/msg/detail/odometry__rosidl_typesupport_introspection_c.h"
// Member `global_path`
#include "nav_msgs/msg/path.h"
// Member `global_path`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `next_waypoint`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `next_waypoint`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `footprint`
#include "geometry_msgs/msg/polygon_stamped.h"
// Member `footprint`
#include "geometry_msgs/msg/detail/polygon_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_interfaces__action__TrajectoryGeneration_Goal__init(message_memory);
}

void TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_fini_function(void * message_memory)
{
  planning_interfaces__action__TrajectoryGeneration_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_member_array[5] = {
  {
    "costmap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_Goal, costmap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_Goal, odom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_Goal, global_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "next_waypoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_Goal, next_waypoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footprint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_Goal, footprint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_members = {
  "planning_interfaces__action",  // message namespace
  "TrajectoryGeneration_Goal",  // message name
  5,  // number of fields
  sizeof(planning_interfaces__action__TrajectoryGeneration_Goal),
  TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_member_array,  // message members
  TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_type_support_handle = {
  0,
  &TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_Goal)() {
  TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, Costmap)();
  TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Odometry)();
  TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PolygonStamped)();
  if (!TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_type_support_handle.typesupport_identifier) {
    TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryGeneration_Goal__rosidl_typesupport_introspection_c__TrajectoryGeneration_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"


// Include directives for member types
// Member `trajectories`
#include "planning_interfaces/msg/trajectories.h"
// Member `trajectories`
#include "planning_interfaces/msg/detail/trajectories__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_interfaces__action__TrajectoryGeneration_Result__init(message_memory);
}

void TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_fini_function(void * message_memory)
{
  planning_interfaces__action__TrajectoryGeneration_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_message_member_array[1] = {
  {
    "trajectories",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_Result, trajectories),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_message_members = {
  "planning_interfaces__action",  // message namespace
  "TrajectoryGeneration_Result",  // message name
  1,  // number of fields
  sizeof(planning_interfaces__action__TrajectoryGeneration_Result),
  TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_message_member_array,  // message members
  TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_message_type_support_handle = {
  0,
  &TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_Result)() {
  TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, msg, Trajectories)();
  if (!TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_message_type_support_handle.typesupport_identifier) {
    TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryGeneration_Result__rosidl_typesupport_introspection_c__TrajectoryGeneration_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"


// Include directives for member types
// Member `trajectory`
#include "planning_interfaces/msg/trajectory.h"
// Member `trajectory`
#include "planning_interfaces/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_interfaces__action__TrajectoryGeneration_Feedback__init(message_memory);
}

void TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_fini_function(void * message_memory)
{
  planning_interfaces__action__TrajectoryGeneration_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_message_member_array[1] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_Feedback, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_message_members = {
  "planning_interfaces__action",  // message namespace
  "TrajectoryGeneration_Feedback",  // message name
  1,  // number of fields
  sizeof(planning_interfaces__action__TrajectoryGeneration_Feedback),
  TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_message_member_array,  // message members
  TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_message_type_support_handle = {
  0,
  &TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_Feedback)() {
  TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, msg, Trajectory)();
  if (!TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_message_type_support_handle.typesupport_identifier) {
    TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryGeneration_Feedback__rosidl_typesupport_introspection_c__TrajectoryGeneration_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "planning_interfaces/action/trajectory_generation.h"
// Member `goal`
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__init(message_memory);
}

void TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_fini_function(void * message_memory)
{
  planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_message_members = {
  "planning_interfaces__action",  // message namespace
  "TrajectoryGeneration_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request),
  TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_message_member_array,  // message members
  TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_message_type_support_handle = {
  0,
  &TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Request)() {
  TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_Goal)();
  if (!TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryGeneration_SendGoal_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__init(message_memory);
}

void TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_fini_function(void * message_memory)
{
  planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_message_members = {
  "planning_interfaces__action",  // message namespace
  "TrajectoryGeneration_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response),
  TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_message_member_array,  // message members
  TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_message_type_support_handle = {
  0,
  &TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Response)() {
  TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryGeneration_SendGoal_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_service_members = {
  "planning_interfaces__action",  // service namespace
  "TrajectoryGeneration_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_service_type_support_handle = {
  0,
  &planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_SendGoal)() {
  if (!planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_service_type_support_handle.typesupport_identifier) {
    planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Response)()->data;
  }

  return &planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_interfaces__action__TrajectoryGeneration_GetResult_Request__init(message_memory);
}

void TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_fini_function(void * message_memory)
{
  planning_interfaces__action__TrajectoryGeneration_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_message_members = {
  "planning_interfaces__action",  // message namespace
  "TrajectoryGeneration_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(planning_interfaces__action__TrajectoryGeneration_GetResult_Request),
  TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_message_member_array,  // message members
  TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_message_type_support_handle = {
  0,
  &TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Request)() {
  TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryGeneration_GetResult_Request__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "planning_interfaces/action/trajectory_generation.h"
// Member `result`
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_interfaces__action__TrajectoryGeneration_GetResult_Response__init(message_memory);
}

void TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_fini_function(void * message_memory)
{
  planning_interfaces__action__TrajectoryGeneration_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_message_members = {
  "planning_interfaces__action",  // message namespace
  "TrajectoryGeneration_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(planning_interfaces__action__TrajectoryGeneration_GetResult_Response),
  TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_message_member_array,  // message members
  TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_message_type_support_handle = {
  0,
  &TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Response)() {
  TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_Result)();
  if (!TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryGeneration_GetResult_Response__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_service_members = {
  "planning_interfaces__action",  // service namespace
  "TrajectoryGeneration_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_service_type_support_handle = {
  0,
  &planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_GetResult)() {
  if (!planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_service_type_support_handle.typesupport_identifier) {
    planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Response)()->data;
  }

  return &planning_interfaces__action__detail__trajectory_generation__rosidl_typesupport_introspection_c__TrajectoryGeneration_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "planning_interfaces/action/trajectory_generation.h"
// Member `feedback`
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__init(message_memory);
}

void TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_fini_function(void * message_memory)
{
  planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_message_members = {
  "planning_interfaces__action",  // message namespace
  "TrajectoryGeneration_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage),
  TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_message_member_array,  // message members
  TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_message_type_support_handle = {
  0,
  &TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_FeedbackMessage)() {
  TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_Feedback)();
  if (!TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryGeneration_FeedbackMessage__rosidl_typesupport_introspection_c__TrajectoryGeneration_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
