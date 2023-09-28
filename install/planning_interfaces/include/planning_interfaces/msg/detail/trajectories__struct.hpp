// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planning_interfaces:msg/Trajectories.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__STRUCT_HPP_
#define PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'trajectories'
#include "planning_interfaces/msg/detail/trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planning_interfaces__msg__Trajectories __attribute__((deprecated))
#else
# define DEPRECATED__planning_interfaces__msg__Trajectories __declspec(deprecated)
#endif

namespace planning_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trajectories_
{
  using Type = Trajectories_<ContainerAllocator>;

  explicit Trajectories_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Trajectories_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _trajectories_type =
    std::vector<planning_interfaces::msg::Trajectory_<ContainerAllocator>, typename ContainerAllocator::template rebind<planning_interfaces::msg::Trajectory_<ContainerAllocator>>::other>;
  _trajectories_type trajectories;

  // setters for named parameter idiom
  Type & set__trajectories(
    const std::vector<planning_interfaces::msg::Trajectory_<ContainerAllocator>, typename ContainerAllocator::template rebind<planning_interfaces::msg::Trajectory_<ContainerAllocator>>::other> & _arg)
  {
    this->trajectories = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planning_interfaces::msg::Trajectories_<ContainerAllocator> *;
  using ConstRawPtr =
    const planning_interfaces::msg::Trajectories_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planning_interfaces::msg::Trajectories_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planning_interfaces::msg::Trajectories_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planning_interfaces::msg::Trajectories_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planning_interfaces::msg::Trajectories_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planning_interfaces::msg::Trajectories_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planning_interfaces::msg::Trajectories_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planning_interfaces::msg::Trajectories_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planning_interfaces::msg::Trajectories_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planning_interfaces__msg__Trajectories
    std::shared_ptr<planning_interfaces::msg::Trajectories_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planning_interfaces__msg__Trajectories
    std::shared_ptr<planning_interfaces::msg::Trajectories_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trajectories_ & other) const
  {
    if (this->trajectories != other.trajectories) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trajectories_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trajectories_

// alias to use template instance with default allocator
using Trajectories =
  planning_interfaces::msg::Trajectories_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace planning_interfaces

#endif  // PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__STRUCT_HPP_
