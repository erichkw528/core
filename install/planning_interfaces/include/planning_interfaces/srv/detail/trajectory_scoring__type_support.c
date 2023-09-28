// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from planning_interfaces:srv/TrajectoryScoring.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "planning_interfaces/srv/detail/trajectory_scoring__rosidl_typesupport_introspection_c.h"
#include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "planning_interfaces/srv/detail/trajectory_scoring__functions.h"
#include "planning_interfaces/srv/detail/trajectory_scoring__struct.h"


// Include directives for member types
// Member `trajectory`
#include "nav_msgs/msg/path.h"
// Member `trajectory`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `costmap`
#include "nav2_msgs/msg/costmap.h"
// Member `costmap`
#include "nav2_msgs/msg/detail/costmap__rosidl_typesupport_introspection_c.h"
// Member `odom`
#include "nav_msgs/msg/odometry.h"
// Member `odom`
#include "nav_msgs/msg/detail/odometry__rosidl_typesupport_introspection_c.h"
// Member `next_waypoint`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `next_waypoint`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_interfaces__srv__TrajectoryScoring_Request__init(message_memory);
}

void TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_fini_function(void * message_memory)
{
  planning_interfaces__srv__TrajectoryScoring_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_member_array[4] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__srv__TrajectoryScoring_Request, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "costmap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__srv__TrajectoryScoring_Request, costmap),  // bytes offset in struct
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
    offsetof(planning_interfaces__srv__TrajectoryScoring_Request, odom),  // bytes offset in struct
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
    offsetof(planning_interfaces__srv__TrajectoryScoring_Request, next_waypoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_members = {
  "planning_interfaces__srv",  // message namespace
  "TrajectoryScoring_Request",  // message name
  4,  // number of fields
  sizeof(planning_interfaces__srv__TrajectoryScoring_Request),
  TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_member_array,  // message members
  TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_type_support_handle = {
  0,
  &TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, srv, TrajectoryScoring_Request)() {
  TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, Costmap)();
  TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Odometry)();
  TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_type_support_handle.typesupport_identifier) {
    TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryScoring_Request__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "planning_interfaces/srv/detail/trajectory_scoring__rosidl_typesupport_introspection_c.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "planning_interfaces/srv/detail/trajectory_scoring__functions.h"
// already included above
// #include "planning_interfaces/srv/detail/trajectory_scoring__struct.h"


// Include directives for member types
// Member `score`
#include "planning_interfaces/msg/trajectory_score.h"
// Member `score`
#include "planning_interfaces/msg/detail/trajectory_score__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_interfaces__srv__TrajectoryScoring_Response__init(message_memory);
}

void TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_fini_function(void * message_memory)
{
  planning_interfaces__srv__TrajectoryScoring_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_message_member_array[1] = {
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_interfaces__srv__TrajectoryScoring_Response, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_message_members = {
  "planning_interfaces__srv",  // message namespace
  "TrajectoryScoring_Response",  // message name
  1,  // number of fields
  sizeof(planning_interfaces__srv__TrajectoryScoring_Response),
  TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_message_member_array,  // message members
  TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_message_type_support_handle = {
  0,
  &TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, srv, TrajectoryScoring_Response)() {
  TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, msg, TrajectoryScore)();
  if (!TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_message_type_support_handle.typesupport_identifier) {
    TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryScoring_Response__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "planning_interfaces/srv/detail/trajectory_scoring__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers planning_interfaces__srv__detail__trajectory_scoring__rosidl_typesupport_introspection_c__TrajectoryScoring_service_members = {
  "planning_interfaces__srv",  // service namespace
  "TrajectoryScoring",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // planning_interfaces__srv__detail__trajectory_scoring__rosidl_typesupport_introspection_c__TrajectoryScoring_Request_message_type_support_handle,
  NULL  // response message
  // planning_interfaces__srv__detail__trajectory_scoring__rosidl_typesupport_introspection_c__TrajectoryScoring_Response_message_type_support_handle
};

static rosidl_service_type_support_t planning_interfaces__srv__detail__trajectory_scoring__rosidl_typesupport_introspection_c__TrajectoryScoring_service_type_support_handle = {
  0,
  &planning_interfaces__srv__detail__trajectory_scoring__rosidl_typesupport_introspection_c__TrajectoryScoring_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, srv, TrajectoryScoring_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, srv, TrajectoryScoring_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, srv, TrajectoryScoring)() {
  if (!planning_interfaces__srv__detail__trajectory_scoring__rosidl_typesupport_introspection_c__TrajectoryScoring_service_type_support_handle.typesupport_identifier) {
    planning_interfaces__srv__detail__trajectory_scoring__rosidl_typesupport_introspection_c__TrajectoryScoring_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)planning_interfaces__srv__detail__trajectory_scoring__rosidl_typesupport_introspection_c__TrajectoryScoring_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, srv, TrajectoryScoring_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, srv, TrajectoryScoring_Response)()->data;
  }

  return &planning_interfaces__srv__detail__trajectory_scoring__rosidl_typesupport_introspection_c__TrajectoryScoring_service_type_support_handle;
}
