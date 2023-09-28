// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from planning_interfaces:action/TrajectoryGeneration.idl
// generated code does not contain a copyright notice
#include "planning_interfaces/action/detail/trajectory_generation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "planning_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "planning_interfaces/action/detail/trajectory_generation__struct.h"
#include "planning_interfaces/action/detail/trajectory_generation__functions.h"
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

#include "geometry_msgs/msg/detail/polygon_stamped__functions.h"  // footprint
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"  // next_waypoint
#include "nav2_msgs/msg/detail/costmap__functions.h"  // costmap
#include "nav_msgs/msg/detail/odometry__functions.h"  // odom
#include "nav_msgs/msg/detail/path__functions.h"  // global_path

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t get_serialized_size_geometry_msgs__msg__PolygonStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t max_serialized_size_geometry_msgs__msg__PolygonStamped(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PolygonStamped)();
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


using _TrajectoryGeneration_Goal__ros_msg_type = planning_interfaces__action__TrajectoryGeneration_Goal;

static bool _TrajectoryGeneration_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryGeneration_Goal__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_Goal__ros_msg_type *>(untyped_ros_message);
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

  // Field name: global_path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->global_path, cdr))
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

  // Field name: footprint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PolygonStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->footprint, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryGeneration_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryGeneration_Goal__ros_msg_type * ros_message = static_cast<_TrajectoryGeneration_Goal__ros_msg_type *>(untyped_ros_message);
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

  // Field name: global_path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->global_path))
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

  // Field name: footprint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PolygonStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->footprint))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t get_serialized_size_planning_interfaces__action__TrajectoryGeneration_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryGeneration_Goal__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name costmap

  current_alignment += get_serialized_size_nav2_msgs__msg__Costmap(
    &(ros_message->costmap), current_alignment);
  // field.name odom

  current_alignment += get_serialized_size_nav_msgs__msg__Odometry(
    &(ros_message->odom), current_alignment);
  // field.name global_path

  current_alignment += get_serialized_size_nav_msgs__msg__Path(
    &(ros_message->global_path), current_alignment);
  // field.name next_waypoint

  current_alignment += get_serialized_size_geometry_msgs__msg__PoseStamped(
    &(ros_message->next_waypoint), current_alignment);
  // field.name footprint

  current_alignment += get_serialized_size_geometry_msgs__msg__PolygonStamped(
    &(ros_message->footprint), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryGeneration_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_planning_interfaces__action__TrajectoryGeneration_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t max_serialized_size_planning_interfaces__action__TrajectoryGeneration_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

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
  // member: global_path
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav_msgs__msg__Path(
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
  // member: footprint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PolygonStamped(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryGeneration_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_planning_interfaces__action__TrajectoryGeneration_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryGeneration_Goal = {
  "planning_interfaces::action",
  "TrajectoryGeneration_Goal",
  _TrajectoryGeneration_Goal__cdr_serialize,
  _TrajectoryGeneration_Goal__cdr_deserialize,
  _TrajectoryGeneration_Goal__get_serialized_size,
  _TrajectoryGeneration_Goal__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryGeneration_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryGeneration_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Goal)() {
  return &_TrajectoryGeneration_Goal__type_support;
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
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
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

#include "planning_interfaces/msg/detail/trajectories__functions.h"  // trajectories

// forward declare type support functions
size_t get_serialized_size_planning_interfaces__msg__Trajectories(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_planning_interfaces__msg__Trajectories(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, msg, Trajectories)();


using _TrajectoryGeneration_Result__ros_msg_type = planning_interfaces__action__TrajectoryGeneration_Result;

static bool _TrajectoryGeneration_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryGeneration_Result__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectories
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, planning_interfaces, msg, Trajectories
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trajectories, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryGeneration_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryGeneration_Result__ros_msg_type * ros_message = static_cast<_TrajectoryGeneration_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectories
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, planning_interfaces, msg, Trajectories
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trajectories))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t get_serialized_size_planning_interfaces__action__TrajectoryGeneration_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryGeneration_Result__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trajectories

  current_alignment += get_serialized_size_planning_interfaces__msg__Trajectories(
    &(ros_message->trajectories), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryGeneration_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_planning_interfaces__action__TrajectoryGeneration_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t max_serialized_size_planning_interfaces__action__TrajectoryGeneration_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: trajectories
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_planning_interfaces__msg__Trajectories(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryGeneration_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_planning_interfaces__action__TrajectoryGeneration_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryGeneration_Result = {
  "planning_interfaces::action",
  "TrajectoryGeneration_Result",
  _TrajectoryGeneration_Result__cdr_serialize,
  _TrajectoryGeneration_Result__cdr_deserialize,
  _TrajectoryGeneration_Result__get_serialized_size,
  _TrajectoryGeneration_Result__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryGeneration_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryGeneration_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Result)() {
  return &_TrajectoryGeneration_Result__type_support;
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
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
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

#include "planning_interfaces/msg/detail/trajectory__functions.h"  // trajectory

// forward declare type support functions
size_t get_serialized_size_planning_interfaces__msg__Trajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_planning_interfaces__msg__Trajectory(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, msg, Trajectory)();


using _TrajectoryGeneration_Feedback__ros_msg_type = planning_interfaces__action__TrajectoryGeneration_Feedback;

static bool _TrajectoryGeneration_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryGeneration_Feedback__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, planning_interfaces, msg, Trajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trajectory, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryGeneration_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryGeneration_Feedback__ros_msg_type * ros_message = static_cast<_TrajectoryGeneration_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, planning_interfaces, msg, Trajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trajectory))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t get_serialized_size_planning_interfaces__action__TrajectoryGeneration_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryGeneration_Feedback__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trajectory

  current_alignment += get_serialized_size_planning_interfaces__msg__Trajectory(
    &(ros_message->trajectory), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryGeneration_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_planning_interfaces__action__TrajectoryGeneration_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t max_serialized_size_planning_interfaces__action__TrajectoryGeneration_Feedback(
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
        max_serialized_size_planning_interfaces__msg__Trajectory(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryGeneration_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_planning_interfaces__action__TrajectoryGeneration_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryGeneration_Feedback = {
  "planning_interfaces::action",
  "TrajectoryGeneration_Feedback",
  _TrajectoryGeneration_Feedback__cdr_serialize,
  _TrajectoryGeneration_Feedback__cdr_deserialize,
  _TrajectoryGeneration_Feedback__get_serialized_size,
  _TrajectoryGeneration_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryGeneration_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryGeneration_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Feedback)() {
  return &_TrajectoryGeneration_Feedback__type_support;
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
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
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

// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_planning_interfaces__action__TrajectoryGeneration_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_planning_interfaces__action__TrajectoryGeneration_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _TrajectoryGeneration_SendGoal_Request__ros_msg_type = planning_interfaces__action__TrajectoryGeneration_SendGoal_Request;

static bool _TrajectoryGeneration_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryGeneration_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryGeneration_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryGeneration_SendGoal_Request__ros_msg_type * ros_message = static_cast<_TrajectoryGeneration_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t get_serialized_size_planning_interfaces__action__TrajectoryGeneration_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryGeneration_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_planning_interfaces__action__TrajectoryGeneration_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryGeneration_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_planning_interfaces__action__TrajectoryGeneration_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t max_serialized_size_planning_interfaces__action__TrajectoryGeneration_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_planning_interfaces__action__TrajectoryGeneration_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryGeneration_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_planning_interfaces__action__TrajectoryGeneration_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryGeneration_SendGoal_Request = {
  "planning_interfaces::action",
  "TrajectoryGeneration_SendGoal_Request",
  _TrajectoryGeneration_SendGoal_Request__cdr_serialize,
  _TrajectoryGeneration_SendGoal_Request__cdr_deserialize,
  _TrajectoryGeneration_SendGoal_Request__get_serialized_size,
  _TrajectoryGeneration_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryGeneration_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryGeneration_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Request)() {
  return &_TrajectoryGeneration_SendGoal_Request__type_support;
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
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _TrajectoryGeneration_SendGoal_Response__ros_msg_type = planning_interfaces__action__TrajectoryGeneration_SendGoal_Response;

static bool _TrajectoryGeneration_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryGeneration_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryGeneration_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryGeneration_SendGoal_Response__ros_msg_type * ros_message = static_cast<_TrajectoryGeneration_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t get_serialized_size_planning_interfaces__action__TrajectoryGeneration_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryGeneration_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryGeneration_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_planning_interfaces__action__TrajectoryGeneration_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t max_serialized_size_planning_interfaces__action__TrajectoryGeneration_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryGeneration_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_planning_interfaces__action__TrajectoryGeneration_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryGeneration_SendGoal_Response = {
  "planning_interfaces::action",
  "TrajectoryGeneration_SendGoal_Response",
  _TrajectoryGeneration_SendGoal_Response__cdr_serialize,
  _TrajectoryGeneration_SendGoal_Response__cdr_deserialize,
  _TrajectoryGeneration_SendGoal_Response__get_serialized_size,
  _TrajectoryGeneration_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryGeneration_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryGeneration_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Response)() {
  return &_TrajectoryGeneration_SendGoal_Response__type_support;
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
#include "planning_interfaces/action/trajectory_generation.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TrajectoryGeneration_SendGoal__callbacks = {
  "planning_interfaces::action",
  "TrajectoryGeneration_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Response)(),
};

static rosidl_service_type_support_t TrajectoryGeneration_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TrajectoryGeneration_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_SendGoal)() {
  return &TrajectoryGeneration_SendGoal__handle;
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
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
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

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _TrajectoryGeneration_GetResult_Request__ros_msg_type = planning_interfaces__action__TrajectoryGeneration_GetResult_Request;

static bool _TrajectoryGeneration_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryGeneration_GetResult_Request__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryGeneration_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryGeneration_GetResult_Request__ros_msg_type * ros_message = static_cast<_TrajectoryGeneration_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t get_serialized_size_planning_interfaces__action__TrajectoryGeneration_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryGeneration_GetResult_Request__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryGeneration_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_planning_interfaces__action__TrajectoryGeneration_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t max_serialized_size_planning_interfaces__action__TrajectoryGeneration_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryGeneration_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_planning_interfaces__action__TrajectoryGeneration_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryGeneration_GetResult_Request = {
  "planning_interfaces::action",
  "TrajectoryGeneration_GetResult_Request",
  _TrajectoryGeneration_GetResult_Request__cdr_serialize,
  _TrajectoryGeneration_GetResult_Request__cdr_deserialize,
  _TrajectoryGeneration_GetResult_Request__get_serialized_size,
  _TrajectoryGeneration_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryGeneration_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryGeneration_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Request)() {
  return &_TrajectoryGeneration_GetResult_Request__type_support;
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
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
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

// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_planning_interfaces__action__TrajectoryGeneration_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_planning_interfaces__action__TrajectoryGeneration_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Result)();


using _TrajectoryGeneration_GetResult_Response__ros_msg_type = planning_interfaces__action__TrajectoryGeneration_GetResult_Response;

static bool _TrajectoryGeneration_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryGeneration_GetResult_Response__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryGeneration_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryGeneration_GetResult_Response__ros_msg_type * ros_message = static_cast<_TrajectoryGeneration_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t get_serialized_size_planning_interfaces__action__TrajectoryGeneration_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryGeneration_GetResult_Response__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_planning_interfaces__action__TrajectoryGeneration_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryGeneration_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_planning_interfaces__action__TrajectoryGeneration_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t max_serialized_size_planning_interfaces__action__TrajectoryGeneration_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_planning_interfaces__action__TrajectoryGeneration_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryGeneration_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_planning_interfaces__action__TrajectoryGeneration_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryGeneration_GetResult_Response = {
  "planning_interfaces::action",
  "TrajectoryGeneration_GetResult_Response",
  _TrajectoryGeneration_GetResult_Response__cdr_serialize,
  _TrajectoryGeneration_GetResult_Response__cdr_deserialize,
  _TrajectoryGeneration_GetResult_Response__get_serialized_size,
  _TrajectoryGeneration_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryGeneration_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryGeneration_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Response)() {
  return &_TrajectoryGeneration_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "planning_interfaces/action/trajectory_generation.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TrajectoryGeneration_GetResult__callbacks = {
  "planning_interfaces::action",
  "TrajectoryGeneration_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Response)(),
};

static rosidl_service_type_support_t TrajectoryGeneration_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TrajectoryGeneration_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_GetResult)() {
  return &TrajectoryGeneration_GetResult__handle;
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
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"
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

// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_planning_interfaces__action__TrajectoryGeneration_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_planning_interfaces__action__TrajectoryGeneration_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _TrajectoryGeneration_FeedbackMessage__ros_msg_type = planning_interfaces__action__TrajectoryGeneration_FeedbackMessage;

static bool _TrajectoryGeneration_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryGeneration_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryGeneration_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryGeneration_FeedbackMessage__ros_msg_type * ros_message = static_cast<_TrajectoryGeneration_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t get_serialized_size_planning_interfaces__action__TrajectoryGeneration_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryGeneration_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _TrajectoryGeneration_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_planning_interfaces__action__TrajectoryGeneration_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryGeneration_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_planning_interfaces__action__TrajectoryGeneration_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_interfaces
size_t max_serialized_size_planning_interfaces__action__TrajectoryGeneration_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_planning_interfaces__action__TrajectoryGeneration_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryGeneration_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_planning_interfaces__action__TrajectoryGeneration_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryGeneration_FeedbackMessage = {
  "planning_interfaces::action",
  "TrajectoryGeneration_FeedbackMessage",
  _TrajectoryGeneration_FeedbackMessage__cdr_serialize,
  _TrajectoryGeneration_FeedbackMessage__cdr_deserialize,
  _TrajectoryGeneration_FeedbackMessage__get_serialized_size,
  _TrajectoryGeneration_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryGeneration_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryGeneration_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_FeedbackMessage)() {
  return &_TrajectoryGeneration_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
