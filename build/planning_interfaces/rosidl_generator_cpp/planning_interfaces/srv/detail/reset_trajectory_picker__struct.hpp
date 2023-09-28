// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planning_interfaces:srv/ResetTrajectoryPicker.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__SRV__DETAIL__RESET_TRAJECTORY_PICKER__STRUCT_HPP_
#define PLANNING_INTERFACES__SRV__DETAIL__RESET_TRAJECTORY_PICKER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'request'
#include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planning_interfaces__srv__ResetTrajectoryPicker_Request __attribute__((deprecated))
#else
# define DEPRECATED__planning_interfaces__srv__ResetTrajectoryPicker_Request __declspec(deprecated)
#endif

namespace planning_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetTrajectoryPicker_Request_
{
  using Type = ResetTrajectoryPicker_Request_<ContainerAllocator>;

  explicit ResetTrajectoryPicker_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit ResetTrajectoryPicker_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planning_interfaces::srv::ResetTrajectoryPicker_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const planning_interfaces::srv::ResetTrajectoryPicker_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planning_interfaces::srv::ResetTrajectoryPicker_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planning_interfaces::srv::ResetTrajectoryPicker_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planning_interfaces__srv__ResetTrajectoryPicker_Request
    std::shared_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planning_interfaces__srv__ResetTrajectoryPicker_Request
    std::shared_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetTrajectoryPicker_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetTrajectoryPicker_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetTrajectoryPicker_Request_

// alias to use template instance with default allocator
using ResetTrajectoryPicker_Request =
  planning_interfaces::srv::ResetTrajectoryPicker_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace planning_interfaces


// Include directives for member types
// Member 'response'
// already included above
// #include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planning_interfaces__srv__ResetTrajectoryPicker_Response __attribute__((deprecated))
#else
# define DEPRECATED__planning_interfaces__srv__ResetTrajectoryPicker_Response __declspec(deprecated)
#endif

namespace planning_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetTrajectoryPicker_Response_
{
  using Type = ResetTrajectoryPicker_Response_<ContainerAllocator>;

  explicit ResetTrajectoryPicker_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit ResetTrajectoryPicker_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planning_interfaces::srv::ResetTrajectoryPicker_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const planning_interfaces::srv::ResetTrajectoryPicker_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planning_interfaces::srv::ResetTrajectoryPicker_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planning_interfaces::srv::ResetTrajectoryPicker_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planning_interfaces__srv__ResetTrajectoryPicker_Response
    std::shared_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planning_interfaces__srv__ResetTrajectoryPicker_Response
    std::shared_ptr<planning_interfaces::srv::ResetTrajectoryPicker_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetTrajectoryPicker_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetTrajectoryPicker_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetTrajectoryPicker_Response_

// alias to use template instance with default allocator
using ResetTrajectoryPicker_Response =
  planning_interfaces::srv::ResetTrajectoryPicker_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace planning_interfaces

namespace planning_interfaces
{

namespace srv
{

struct ResetTrajectoryPicker
{
  using Request = planning_interfaces::srv::ResetTrajectoryPicker_Request;
  using Response = planning_interfaces::srv::ResetTrajectoryPicker_Response;
};

}  // namespace srv

}  // namespace planning_interfaces

#endif  // PLANNING_INTERFACES__SRV__DETAIL__RESET_TRAJECTORY_PICKER__STRUCT_HPP_
