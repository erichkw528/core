// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_interfaces:msg/Trajectories.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__BUILDER_HPP_
#define PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__BUILDER_HPP_

#include "planning_interfaces/msg/detail/trajectories__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace planning_interfaces
{

namespace msg
{

namespace builder
{

class Init_Trajectories_trajectories
{
public:
  Init_Trajectories_trajectories()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::planning_interfaces::msg::Trajectories trajectories(::planning_interfaces::msg::Trajectories::_trajectories_type arg)
  {
    msg_.trajectories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::msg::Trajectories msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::msg::Trajectories>()
{
  return planning_interfaces::msg::builder::Init_Trajectories_trajectories();
}

}  // namespace planning_interfaces

#endif  // PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__BUILDER_HPP_
