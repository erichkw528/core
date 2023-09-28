// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roar_msgs:msg/VehicleControl.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__MSG__DETAIL__VEHICLE_CONTROL__BUILDER_HPP_
#define ROAR_MSGS__MSG__DETAIL__VEHICLE_CONTROL__BUILDER_HPP_

#include "roar_msgs/msg/detail/vehicle_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace roar_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleControl_is_auto
{
public:
  explicit Init_VehicleControl_is_auto(::roar_msgs::msg::VehicleControl & msg)
  : msg_(msg)
  {}
  ::roar_msgs::msg::VehicleControl is_auto(::roar_msgs::msg::VehicleControl::_is_auto_type arg)
  {
    msg_.is_auto = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roar_msgs::msg::VehicleControl msg_;
};

class Init_VehicleControl_reverse
{
public:
  explicit Init_VehicleControl_reverse(::roar_msgs::msg::VehicleControl & msg)
  : msg_(msg)
  {}
  Init_VehicleControl_is_auto reverse(::roar_msgs::msg::VehicleControl::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return Init_VehicleControl_is_auto(msg_);
  }

private:
  ::roar_msgs::msg::VehicleControl msg_;
};

class Init_VehicleControl_brake
{
public:
  explicit Init_VehicleControl_brake(::roar_msgs::msg::VehicleControl & msg)
  : msg_(msg)
  {}
  Init_VehicleControl_reverse brake(::roar_msgs::msg::VehicleControl::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_VehicleControl_reverse(msg_);
  }

private:
  ::roar_msgs::msg::VehicleControl msg_;
};

class Init_VehicleControl_steering_angle
{
public:
  explicit Init_VehicleControl_steering_angle(::roar_msgs::msg::VehicleControl & msg)
  : msg_(msg)
  {}
  Init_VehicleControl_brake steering_angle(::roar_msgs::msg::VehicleControl::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_VehicleControl_brake(msg_);
  }

private:
  ::roar_msgs::msg::VehicleControl msg_;
};

class Init_VehicleControl_target_speed
{
public:
  explicit Init_VehicleControl_target_speed(::roar_msgs::msg::VehicleControl & msg)
  : msg_(msg)
  {}
  Init_VehicleControl_steering_angle target_speed(::roar_msgs::msg::VehicleControl::_target_speed_type arg)
  {
    msg_.target_speed = std::move(arg);
    return Init_VehicleControl_steering_angle(msg_);
  }

private:
  ::roar_msgs::msg::VehicleControl msg_;
};

class Init_VehicleControl_header
{
public:
  Init_VehicleControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleControl_target_speed header(::roar_msgs::msg::VehicleControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleControl_target_speed(msg_);
  }

private:
  ::roar_msgs::msg::VehicleControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roar_msgs::msg::VehicleControl>()
{
  return roar_msgs::msg::builder::Init_VehicleControl_header();
}

}  // namespace roar_msgs

#endif  // ROAR_MSGS__MSG__DETAIL__VEHICLE_CONTROL__BUILDER_HPP_
