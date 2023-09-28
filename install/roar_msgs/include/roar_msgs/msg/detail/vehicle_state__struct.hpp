// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roar_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
#define ROAR_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'odometry'
#include "nav_msgs/msg/detail/odometry__struct.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.hpp"
// Member 'vehicle_status'
#include "roar_msgs/msg/detail/vehicle_status__struct.hpp"
// Member 'global_path'
#include "nav_msgs/msg/detail/path__struct.hpp"
// Member 'next_waypoint'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'vehicle_control'
#include "roar_msgs/msg/detail/vehicle_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__roar_msgs__msg__VehicleState __attribute__((deprecated))
#else
# define DEPRECATED__roar_msgs__msg__VehicleState __declspec(deprecated)
#endif

namespace roar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleState_
{
  using Type = VehicleState_<ContainerAllocator>;

  explicit VehicleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    odometry(_init),
    imu(_init),
    vehicle_status(_init),
    global_path(_init),
    next_waypoint(_init),
    vehicle_control(_init)
  {
    (void)_init;
  }

  explicit VehicleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    odometry(_alloc, _init),
    imu(_alloc, _init),
    vehicle_status(_alloc, _init),
    global_path(_alloc, _init),
    next_waypoint(_alloc, _init),
    vehicle_control(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _odometry_type =
    nav_msgs::msg::Odometry_<ContainerAllocator>;
  _odometry_type odometry;
  using _imu_type =
    sensor_msgs::msg::Imu_<ContainerAllocator>;
  _imu_type imu;
  using _vehicle_status_type =
    roar_msgs::msg::VehicleStatus_<ContainerAllocator>;
  _vehicle_status_type vehicle_status;
  using _global_path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _global_path_type global_path;
  using _next_waypoint_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _next_waypoint_type next_waypoint;
  using _vehicle_control_type =
    roar_msgs::msg::VehicleControl_<ContainerAllocator>;
  _vehicle_control_type vehicle_control;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__odometry(
    const nav_msgs::msg::Odometry_<ContainerAllocator> & _arg)
  {
    this->odometry = _arg;
    return *this;
  }
  Type & set__imu(
    const sensor_msgs::msg::Imu_<ContainerAllocator> & _arg)
  {
    this->imu = _arg;
    return *this;
  }
  Type & set__vehicle_status(
    const roar_msgs::msg::VehicleStatus_<ContainerAllocator> & _arg)
  {
    this->vehicle_status = _arg;
    return *this;
  }
  Type & set__global_path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->global_path = _arg;
    return *this;
  }
  Type & set__next_waypoint(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->next_waypoint = _arg;
    return *this;
  }
  Type & set__vehicle_control(
    const roar_msgs::msg::VehicleControl_<ContainerAllocator> & _arg)
  {
    this->vehicle_control = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roar_msgs::msg::VehicleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const roar_msgs::msg::VehicleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roar_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roar_msgs::msg::VehicleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roar_msgs::msg::VehicleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roar_msgs::msg::VehicleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roar_msgs::msg::VehicleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roar_msgs::msg::VehicleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roar_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roar_msgs::msg::VehicleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roar_msgs__msg__VehicleState
    std::shared_ptr<roar_msgs::msg::VehicleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roar_msgs__msg__VehicleState
    std::shared_ptr<roar_msgs::msg::VehicleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->odometry != other.odometry) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    if (this->vehicle_status != other.vehicle_status) {
      return false;
    }
    if (this->global_path != other.global_path) {
      return false;
    }
    if (this->next_waypoint != other.next_waypoint) {
      return false;
    }
    if (this->vehicle_control != other.vehicle_control) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleState_

// alias to use template instance with default allocator
using VehicleState =
  roar_msgs::msg::VehicleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roar_msgs

#endif  // ROAR_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
