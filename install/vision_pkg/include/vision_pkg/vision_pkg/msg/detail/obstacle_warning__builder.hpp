// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_pkg:msg/ObstacleWarning.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__BUILDER_HPP_
#define VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_pkg/msg/detail/obstacle_warning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_pkg
{

namespace msg
{

namespace builder
{

class Init_ObstacleWarning_right_warn
{
public:
  explicit Init_ObstacleWarning_right_warn(::vision_pkg::msg::ObstacleWarning & msg)
  : msg_(msg)
  {}
  ::vision_pkg::msg::ObstacleWarning right_warn(::vision_pkg::msg::ObstacleWarning::_right_warn_type arg)
  {
    msg_.right_warn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_pkg::msg::ObstacleWarning msg_;
};

class Init_ObstacleWarning_center_warn
{
public:
  explicit Init_ObstacleWarning_center_warn(::vision_pkg::msg::ObstacleWarning & msg)
  : msg_(msg)
  {}
  Init_ObstacleWarning_right_warn center_warn(::vision_pkg::msg::ObstacleWarning::_center_warn_type arg)
  {
    msg_.center_warn = std::move(arg);
    return Init_ObstacleWarning_right_warn(msg_);
  }

private:
  ::vision_pkg::msg::ObstacleWarning msg_;
};

class Init_ObstacleWarning_left_warn
{
public:
  explicit Init_ObstacleWarning_left_warn(::vision_pkg::msg::ObstacleWarning & msg)
  : msg_(msg)
  {}
  Init_ObstacleWarning_center_warn left_warn(::vision_pkg::msg::ObstacleWarning::_left_warn_type arg)
  {
    msg_.left_warn = std::move(arg);
    return Init_ObstacleWarning_center_warn(msg_);
  }

private:
  ::vision_pkg::msg::ObstacleWarning msg_;
};

class Init_ObstacleWarning_right_dist
{
public:
  explicit Init_ObstacleWarning_right_dist(::vision_pkg::msg::ObstacleWarning & msg)
  : msg_(msg)
  {}
  Init_ObstacleWarning_left_warn right_dist(::vision_pkg::msg::ObstacleWarning::_right_dist_type arg)
  {
    msg_.right_dist = std::move(arg);
    return Init_ObstacleWarning_left_warn(msg_);
  }

private:
  ::vision_pkg::msg::ObstacleWarning msg_;
};

class Init_ObstacleWarning_center_dist
{
public:
  explicit Init_ObstacleWarning_center_dist(::vision_pkg::msg::ObstacleWarning & msg)
  : msg_(msg)
  {}
  Init_ObstacleWarning_right_dist center_dist(::vision_pkg::msg::ObstacleWarning::_center_dist_type arg)
  {
    msg_.center_dist = std::move(arg);
    return Init_ObstacleWarning_right_dist(msg_);
  }

private:
  ::vision_pkg::msg::ObstacleWarning msg_;
};

class Init_ObstacleWarning_left_dist
{
public:
  Init_ObstacleWarning_left_dist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleWarning_center_dist left_dist(::vision_pkg::msg::ObstacleWarning::_left_dist_type arg)
  {
    msg_.left_dist = std::move(arg);
    return Init_ObstacleWarning_center_dist(msg_);
  }

private:
  ::vision_pkg::msg::ObstacleWarning msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_pkg::msg::ObstacleWarning>()
{
  return vision_pkg::msg::builder::Init_ObstacleWarning_left_dist();
}

}  // namespace vision_pkg

#endif  // VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__BUILDER_HPP_
