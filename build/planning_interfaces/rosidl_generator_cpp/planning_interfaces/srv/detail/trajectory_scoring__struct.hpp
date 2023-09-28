// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planning_interfaces:srv/TrajectoryScoring.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__SRV__DETAIL__TRAJECTORY_SCORING__STRUCT_HPP_
#define PLANNING_INTERFACES__SRV__DETAIL__TRAJECTORY_SCORING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'trajectory'
#include "nav_msgs/msg/detail/path__struct.hpp"
// Member 'costmap'
#include "nav2_msgs/msg/detail/costmap__struct.hpp"
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__struct.hpp"
// Member 'next_waypoint'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planning_interfaces__srv__TrajectoryScoring_Request __attribute__((deprecated))
#else
# define DEPRECATED__planning_interfaces__srv__TrajectoryScoring_Request __declspec(deprecated)
#endif

namespace planning_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajectoryScoring_Request_
{
  using Type = TrajectoryScoring_Request_<ContainerAllocator>;

  explicit TrajectoryScoring_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init),
    costmap(_init),
    odom(_init),
    next_waypoint(_init)
  {
    (void)_init;
  }

  explicit TrajectoryScoring_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init),
    costmap(_alloc, _init),
    odom(_alloc, _init),
    next_waypoint(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _trajectory_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _trajectory_type trajectory;
  using _costmap_type =
    nav2_msgs::msg::Costmap_<ContainerAllocator>;
  _costmap_type costmap;
  using _odom_type =
    nav_msgs::msg::Odometry_<ContainerAllocator>;
  _odom_type odom;
  using _next_waypoint_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _next_waypoint_type next_waypoint;

  // setters for named parameter idiom
  Type & set__trajectory(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__costmap(
    const nav2_msgs::msg::Costmap_<ContainerAllocator> & _arg)
  {
    this->costmap = _arg;
    return *this;
  }
  Type & set__odom(
    const nav_msgs::msg::Odometry_<ContainerAllocator> & _arg)
  {
    this->odom = _arg;
    return *this;
  }
  Type & set__next_waypoint(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->next_waypoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planning_interfaces::srv::TrajectoryScoring_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const planning_interfaces::srv::TrajectoryScoring_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planning_interfaces::srv::TrajectoryScoring_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planning_interfaces::srv::TrajectoryScoring_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planning_interfaces::srv::TrajectoryScoring_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planning_interfaces::srv::TrajectoryScoring_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planning_interfaces::srv::TrajectoryScoring_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planning_interfaces::srv::TrajectoryScoring_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planning_interfaces::srv::TrajectoryScoring_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planning_interfaces::srv::TrajectoryScoring_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planning_interfaces__srv__TrajectoryScoring_Request
    std::shared_ptr<planning_interfaces::srv::TrajectoryScoring_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planning_interfaces__srv__TrajectoryScoring_Request
    std::shared_ptr<planning_interfaces::srv::TrajectoryScoring_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryScoring_Request_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->costmap != other.costmap) {
      return false;
    }
    if (this->odom != other.odom) {
      return false;
    }
    if (this->next_waypoint != other.next_waypoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryScoring_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryScoring_Request_

// alias to use template instance with default allocator
using TrajectoryScoring_Request =
  planning_interfaces::srv::TrajectoryScoring_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace planning_interfaces


// Include directives for member types
// Member 'score'
#include "planning_interfaces/msg/detail/trajectory_score__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planning_interfaces__srv__TrajectoryScoring_Response __attribute__((deprecated))
#else
# define DEPRECATED__planning_interfaces__srv__TrajectoryScoring_Response __declspec(deprecated)
#endif

namespace planning_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajectoryScoring_Response_
{
  using Type = TrajectoryScoring_Response_<ContainerAllocator>;

  explicit TrajectoryScoring_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : score(_init)
  {
    (void)_init;
  }

  explicit TrajectoryScoring_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : score(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _score_type =
    planning_interfaces::msg::TrajectoryScore_<ContainerAllocator>;
  _score_type score;

  // setters for named parameter idiom
  Type & set__score(
    const planning_interfaces::msg::TrajectoryScore_<ContainerAllocator> & _arg)
  {
    this->score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planning_interfaces::srv::TrajectoryScoring_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const planning_interfaces::srv::TrajectoryScoring_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planning_interfaces::srv::TrajectoryScoring_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planning_interfaces::srv::TrajectoryScoring_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planning_interfaces::srv::TrajectoryScoring_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planning_interfaces::srv::TrajectoryScoring_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planning_interfaces::srv::TrajectoryScoring_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planning_interfaces::srv::TrajectoryScoring_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planning_interfaces::srv::TrajectoryScoring_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planning_interfaces::srv::TrajectoryScoring_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planning_interfaces__srv__TrajectoryScoring_Response
    std::shared_ptr<planning_interfaces::srv::TrajectoryScoring_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planning_interfaces__srv__TrajectoryScoring_Response
    std::shared_ptr<planning_interfaces::srv::TrajectoryScoring_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryScoring_Response_ & other) const
  {
    if (this->score != other.score) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryScoring_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryScoring_Response_

// alias to use template instance with default allocator
using TrajectoryScoring_Response =
  planning_interfaces::srv::TrajectoryScoring_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace planning_interfaces

namespace planning_interfaces
{

namespace srv
{

struct TrajectoryScoring
{
  using Request = planning_interfaces::srv::TrajectoryScoring_Request;
  using Response = planning_interfaces::srv::TrajectoryScoring_Response;
};

}  // namespace srv

}  // namespace planning_interfaces

#endif  // PLANNING_INTERFACES__SRV__DETAIL__TRAJECTORY_SCORING__STRUCT_HPP_
