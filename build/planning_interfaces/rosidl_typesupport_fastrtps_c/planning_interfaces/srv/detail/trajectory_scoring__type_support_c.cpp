// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from planning_interfaces:srv/TrajectoryScoring.idl
// generated code does not contain a copyright notice
#include "planning_interfaces/srv/detail/trajectory_scoring__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "planning_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "planning_interfaces/srv/detail/trajectory_scoring__struct.h"
#include "planning_interfaces/srv/detail/trajectory_scoring__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose_stamped__functions.h"  // next_waypoint
#include "nav2_msgs/msg/detail/costmap__functions.h"  // costmap
#include "nav_msgs/msg/detail/odometry__functions.h"  // odom
#include "nav_msgs/msg/detail/path__functions.h"  // trajectory

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t get_serialized_size_geometry_msgs__msg__PoseStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t max_serialized_size_geometry_msgs__msg__PoseStamped(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t get_serialized_size_nav2_msgs__msg__Costmap(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t max_serialized_size_nav2_msgs__msg__Costmap(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, msg, Costmap)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t get_serialized_size_nav_msgs__msg__Odometry(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t max_serialized_size_nav_msgs__msg__Odometry(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t get_serialized_size_nav_msgs__msg__Path(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t max_serialized_size_nav_msgs__msg__Path(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path)();


using _TrajectoryScoring_Request__ros_msg_type = planning_interfaces__srv__TrajectoryScoring_Request;

static bool _TrajectoryScoring_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryScoring_Request__ros_msg_type * ros_message = static_cast<const _TrajectoryScoring_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trajectory, cdr))
    {
      return false;
    }
  }

  // Field name: costmap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav2_msgs, msg, Costmap
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->costmap, cdr))
    {
      return false;
    }
  }

  // Field name: odom
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->odom, cdr))
    {
      return false;
    }
  }

  // Field name: next_waypoint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->next_waypoint, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryScoring_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryScoring_Request__ros_msg_type * ros_message = static_cast<_TrajectoryScoring_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trajectory))
    {
      return false;
    }
  }

  // Field name: costmap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav2_msgs, msg, Costmap
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->costmap))
    {
      return false;
    }
  }

  // Field name: odom
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->odom))
    {
      return false;
    }
  }

  // Field name: next_waypoint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->next_waypoint))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t get_serialized_size_planning_interfaces__srv__TrajectoryScoring_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryScoring_Request__ros_msg_type * ros_message = static_cast<const _TrajectoryScoring_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trajectory

  current_alignment += get_serialized_size_nav_msgs__msg__Path(
    &(ros_message->trajectory), current_alignment);
  // field.name costmap

  current_alignment += get_serialized_size_nav2_msgs__msg__Costmap(
    &(ros_message->costmap), current_alignment);
  // field.name odom

  current_alignment += get_serialized_size_nav_msgs__msg__Odometry(
    &(ros_message->odom), current_alignment);
  // field.name next_waypoint

  current_alignment += get_serialized_size_geometry_msgs__msg__PoseStamped(
    &(ros_message->next_waypoint), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryScoring_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_planning_interfaces__srv__TrajectoryScoring_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t max_serialized_size_planning_interfaces__srv__TrajectoryScoring_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: trajectory
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav_msgs__msg__Path(
        full_bounded, current_alignment);
    }
  }
  // member: costmap
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav2_msgs__msg__Costmap(
        full_bounded, current_alignment);
    }
  }
  // member: odom
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav_msgs__msg__Odometry(
        full_bounded, current_alignment);
    }
  }
  // member: next_waypoint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PoseStamped(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryScoring_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_planning_interfaces__srv__TrajectoryScoring_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryScoring_Request = {
  "planning_interfaces::srv",
  "TrajectoryScoring_Request",
  _TrajectoryScoring_Request__cdr_serialize,
  _TrajectoryScoring_Request__cdr_deserialize,
  _TrajectoryScoring_Request__get_serialized_size,
  _TrajectoryScoring_Request__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryScoring_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryScoring_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, srv, TrajectoryScoring_Request)() {
  return &_TrajectoryScoring_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "planning_interfaces/srv/detail/trajectory_scoring__struct.h"
// already included above
// #include "planning_interfaces/srv/detail/trajectory_scoring__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "planning_interfaces/msg/detail/trajectory_score__functions.h"  // score

// forward declare type support functions
size_t get_serialized_size_planning_interfaces__msg__TrajectoryScore(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_planning_interfaces__msg__TrajectoryScore(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, msg, TrajectoryScore)();


using _TrajectoryScoring_Response__ros_msg_type = planning_interfaces__srv__TrajectoryScoring_Response;

static bool _TrajectoryScoring_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryScoring_Response__ros_msg_type * ros_message = static_cast<const _TrajectoryScoring_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: score
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, planning_interfaces, msg, TrajectoryScore
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->score, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryScoring_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryScoring_Response__ros_msg_type * ros_message = static_cast<_TrajectoryScoring_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: score
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, planning_interfaces, msg, TrajectoryScore
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->score))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t get_serialized_size_planning_interfaces__srv__TrajectoryScoring_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryScoring_Response__ros_msg_type * ros_message = static_cast<const _TrajectoryScoring_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name score

  current_alignment += get_serialized_size_planning_interfaces__msg__TrajectoryScore(
    &(ros_message->score), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryScoring_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_planning_interfaces__srv__TrajectoryScoring_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t max_serialized_size_planning_interfaces__srv__TrajectoryScoring_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: score
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_planning_interfaces__msg__TrajectoryScore(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryScoring_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_planning_interfaces__srv__TrajectoryScoring_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryScoring_Response = {
  "planning_interfaces::srv",
  "TrajectoryScoring_Response",
  _TrajectoryScoring_Response__cdr_serialize,
  _TrajectoryScoring_Response__cdr_deserialize,
  _TrajectoryScoring_Response__get_serialized_size,
  _TrajectoryScoring_Response__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryScoring_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryScoring_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, srv, TrajectoryScoring_Response)() {
  return &_TrajectoryScoring_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "planning_interfaces/srv/trajectory_scoring.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TrajectoryScoring__callbacks = {
  "planning_interfaces::srv",
  "TrajectoryScoring",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, srv, TrajectoryScoring_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, srv, TrajectoryScoring_Response)(),
};

static rosidl_service_type_support_t TrajectoryScoring__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TrajectoryScoring__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, srv, TrajectoryScoring)() {
  return &TrajectoryScoring__handle;
}

#if defined(__cplusplus)
}
#endif
