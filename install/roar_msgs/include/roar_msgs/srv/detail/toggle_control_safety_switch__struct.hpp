// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roar_msgs:srv/ToggleControlSafetySwitch.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__SRV__DETAIL__TOGGLE_CONTROL_SAFETY_SWITCH__STRUCT_HPP_
#define ROAR_MSGS__SRV__DETAIL__TOGGLE_CONTROL_SAFETY_SWITCH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__roar_msgs__srv__ToggleControlSafetySwitch_Request __attribute__((deprecated))
#else
# define DEPRECATED__roar_msgs__srv__ToggleControlSafetySwitch_Request __declspec(deprecated)
#endif

namespace roar_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ToggleControlSafetySwitch_Request_
{
  using Type = ToggleControlSafetySwitch_Request_<ContainerAllocator>;

  explicit ToggleControlSafetySwitch_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_safety_on = false;
    }
  }

  explicit ToggleControlSafetySwitch_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_safety_on = false;
    }
  }

  // field types and members
  using _is_safety_on_type =
    bool;
  _is_safety_on_type is_safety_on;

  // setters for named parameter idiom
  Type & set__is_safety_on(
    const bool & _arg)
  {
    this->is_safety_on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roar_msgs::srv::ToggleControlSafetySwitch_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const roar_msgs::srv::ToggleControlSafetySwitch_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roar_msgs::srv::ToggleControlSafetySwitch_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roar_msgs::srv::ToggleControlSafetySwitch_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roar_msgs__srv__ToggleControlSafetySwitch_Request
    std::shared_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roar_msgs__srv__ToggleControlSafetySwitch_Request
    std::shared_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ToggleControlSafetySwitch_Request_ & other) const
  {
    if (this->is_safety_on != other.is_safety_on) {
      return false;
    }
    return true;
  }
  bool operator!=(const ToggleControlSafetySwitch_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ToggleControlSafetySwitch_Request_

// alias to use template instance with default allocator
using ToggleControlSafetySwitch_Request =
  roar_msgs::srv::ToggleControlSafetySwitch_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roar_msgs


#ifndef _WIN32
# define DEPRECATED__roar_msgs__srv__ToggleControlSafetySwitch_Response __attribute__((deprecated))
#else
# define DEPRECATED__roar_msgs__srv__ToggleControlSafetySwitch_Response __declspec(deprecated)
#endif

namespace roar_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ToggleControlSafetySwitch_Response_
{
  using Type = ToggleControlSafetySwitch_Response_<ContainerAllocator>;

  explicit ToggleControlSafetySwitch_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit ToggleControlSafetySwitch_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roar_msgs::srv::ToggleControlSafetySwitch_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const roar_msgs::srv::ToggleControlSafetySwitch_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roar_msgs::srv::ToggleControlSafetySwitch_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roar_msgs::srv::ToggleControlSafetySwitch_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roar_msgs__srv__ToggleControlSafetySwitch_Response
    std::shared_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roar_msgs__srv__ToggleControlSafetySwitch_Response
    std::shared_ptr<roar_msgs::srv::ToggleControlSafetySwitch_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ToggleControlSafetySwitch_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ToggleControlSafetySwitch_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ToggleControlSafetySwitch_Response_

// alias to use template instance with default allocator
using ToggleControlSafetySwitch_Response =
  roar_msgs::srv::ToggleControlSafetySwitch_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roar_msgs

namespace roar_msgs
{

namespace srv
{

struct ToggleControlSafetySwitch
{
  using Request = roar_msgs::srv::ToggleControlSafetySwitch_Request;
  using Response = roar_msgs::srv::ToggleControlSafetySwitch_Response;
};

}  // namespace srv

}  // namespace roar_msgs

#endif  // ROAR_MSGS__SRV__DETAIL__TOGGLE_CONTROL_SAFETY_SWITCH__STRUCT_HPP_
