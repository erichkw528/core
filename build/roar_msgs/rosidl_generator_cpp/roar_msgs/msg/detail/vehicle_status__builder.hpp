// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roar_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
#define ROAR_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_

#include "roar_msgs/msg/detail/vehicle_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace roar_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStatus_steering_angle_deg
{
public:
  explicit Init_VehicleStatus_steering_angle_deg(::roar_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  ::roar_msgs::msg::VehicleStatus steering_angle_deg(::roar_msgs::msg::VehicleStatus::_steering_angle_deg_type arg)
  {
    msg_.steering_angle_deg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roar_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_speed
{
public:
  explicit Init_VehicleStatus_speed(::roar_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_steering_angle_deg speed(::roar_msgs::msg::VehicleStatus::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_VehicleStatus_steering_angle_deg(msg_);
  }

private:
  ::roar_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_header
{
public:
  Init_VehicleStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatus_speed header(::roar_msgs::msg::VehicleStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleStatus_speed(msg_);
  }

private:
  ::roar_msgs::msg::VehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roar_msgs::msg::VehicleStatus>()
{
  return roar_msgs::msg::builder::Init_VehicleStatus_header();
}

}  // namespace roar_msgs

#endif  // ROAR_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
