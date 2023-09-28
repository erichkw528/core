// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roar_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
#define ROAR_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_

#include "roar_msgs/msg/detail/vehicle_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace roar_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleState_vehicle_control
{
public:
  explicit Init_VehicleState_vehicle_control(::roar_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  ::roar_msgs::msg::VehicleState vehicle_control(::roar_msgs::msg::VehicleState::_vehicle_control_type arg)
  {
    msg_.vehicle_control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roar_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_next_waypoint
{
public:
  explicit Init_VehicleState_next_waypoint(::roar_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_vehicle_control next_waypoint(::roar_msgs::msg::VehicleState::_next_waypoint_type arg)
  {
    msg_.next_waypoint = std::move(arg);
    return Init_VehicleState_vehicle_control(msg_);
  }

private:
  ::roar_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_global_path
{
public:
  explicit Init_VehicleState_global_path(::roar_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_next_waypoint global_path(::roar_msgs::msg::VehicleState::_global_path_type arg)
  {
    msg_.global_path = std::move(arg);
    return Init_VehicleState_next_waypoint(msg_);
  }

private:
  ::roar_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_vehicle_status
{
public:
  explicit Init_VehicleState_vehicle_status(::roar_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_global_path vehicle_status(::roar_msgs::msg::VehicleState::_vehicle_status_type arg)
  {
    msg_.vehicle_status = std::move(arg);
    return Init_VehicleState_global_path(msg_);
  }

private:
  ::roar_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_imu
{
public:
  explicit Init_VehicleState_imu(::roar_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_vehicle_status imu(::roar_msgs::msg::VehicleState::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_VehicleState_vehicle_status(msg_);
  }

private:
  ::roar_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_odometry
{
public:
  explicit Init_VehicleState_odometry(::roar_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_imu odometry(::roar_msgs::msg::VehicleState::_odometry_type arg)
  {
    msg_.odometry = std::move(arg);
    return Init_VehicleState_imu(msg_);
  }

private:
  ::roar_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_header
{
public:
  Init_VehicleState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleState_odometry header(::roar_msgs::msg::VehicleState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleState_odometry(msg_);
  }

private:
  ::roar_msgs::msg::VehicleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roar_msgs::msg::VehicleState>()
{
  return roar_msgs::msg::builder::Init_VehicleState_header();
}

}  // namespace roar_msgs

#endif  // ROAR_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
