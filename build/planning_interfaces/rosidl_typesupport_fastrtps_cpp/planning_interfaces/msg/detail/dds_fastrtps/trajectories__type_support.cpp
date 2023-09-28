// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from planning_interfaces:msg/Trajectories.idl
// generated code does not contain a copyright notice
#include "planning_interfaces/msg/detail/trajectories__rosidl_typesupport_fastrtps_cpp.hpp"
#include "planning_interfaces/msg/detail/trajectories__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace planning_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const planning_interfaces::msg::Trajectory &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  planning_interfaces::msg::Trajectory &);
size_t get_serialized_size(
  const planning_interfaces::msg::Trajectory &,
  size_t current_alignment);
size_t
max_serialized_size_Trajectory(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace planning_interfaces


namespace planning_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_interfaces
cdr_serialize(
  const planning_interfaces::msg::Trajectories & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trajectories
  {
    size_t size = ros_message.trajectories.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      planning_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.trajectories[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  planning_interfaces::msg::Trajectories & ros_message)
{
  // Member: trajectories
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.trajectories.resize(size);
    for (size_t i = 0; i < size; i++) {
      planning_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.trajectories[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_interfaces
get_serialized_size(
  const planning_interfaces::msg::Trajectories & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: trajectories
  {
    size_t array_size = ros_message.trajectories.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        planning_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.trajectories[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_interfaces
max_serialized_size_Trajectories(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: trajectories
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        planning_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Trajectory(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Trajectories__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const planning_interfaces::msg::Trajectories *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Trajectories__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<planning_interfaces::msg::Trajectories *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Trajectories__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const planning_interfaces::msg::Trajectories *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Trajectories__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Trajectories(full_bounded, 0);
}

static message_type_support_callbacks_t _Trajectories__callbacks = {
  "planning_interfaces::msg",
  "Trajectories",
  _Trajectories__cdr_serialize,
  _Trajectories__cdr_deserialize,
  _Trajectories__get_serialized_size,
  _Trajectories__max_serialized_size
};

static rosidl_message_type_support_t _Trajectories__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Trajectories__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace planning_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<planning_interfaces::msg::Trajectories>()
{
  return &planning_interfaces::msg::typesupport_fastrtps_cpp::_Trajectories__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, planning_interfaces, msg, Trajectories)() {
  return &planning_interfaces::msg::typesupport_fastrtps_cpp::_Trajectories__handle;
}

#ifdef __cplusplus
}
#endif
