// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planning_interfaces:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY_SCORE__STRUCT_HPP_
#define PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY_SCORE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__planning_interfaces__msg__TrajectoryScore __attribute__((deprecated))
#else
# define DEPRECATED__planning_interfaces__msg__TrajectoryScore __declspec(deprecated)
#endif

namespace planning_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryScore_
{
  using Type = TrajectoryScore_<ContainerAllocator>;

  explicit TrajectoryScore_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->raw_score = 0.0f;
      this->scale = 0.0f;
    }
  }

  explicit TrajectoryScore_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->raw_score = 0.0f;
      this->scale = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _raw_score_type =
    float;
  _raw_score_type raw_score;
  using _scale_type =
    float;
  _scale_type scale;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__raw_score(
    const float & _arg)
  {
    this->raw_score = _arg;
    return *this;
  }
  Type & set__scale(
    const float & _arg)
  {
    this->scale = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planning_interfaces::msg::TrajectoryScore_<ContainerAllocator> *;
  using ConstRawPtr =
    const planning_interfaces::msg::TrajectoryScore_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planning_interfaces::msg::TrajectoryScore_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planning_interfaces::msg::TrajectoryScore_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planning_interfaces::msg::TrajectoryScore_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planning_interfaces::msg::TrajectoryScore_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planning_interfaces::msg::TrajectoryScore_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planning_interfaces::msg::TrajectoryScore_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planning_interfaces::msg::TrajectoryScore_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planning_interfaces::msg::TrajectoryScore_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planning_interfaces__msg__TrajectoryScore
    std::shared_ptr<planning_interfaces::msg::TrajectoryScore_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planning_interfaces__msg__TrajectoryScore
    std::shared_ptr<planning_interfaces::msg::TrajectoryScore_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryScore_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->raw_score != other.raw_score) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryScore_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryScore_

// alias to use template instance with default allocator
using TrajectoryScore =
  planning_interfaces::msg::TrajectoryScore_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace planning_interfaces

#endif  // PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY_SCORE__STRUCT_HPP_
