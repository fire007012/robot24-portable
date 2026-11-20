// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from can_driver:srv/ApplyLimits.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__APPLY_LIMITS__BUILDER_HPP_
#define CAN_DRIVER__SRV__DETAIL__APPLY_LIMITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "can_driver/srv/detail/apply_limits__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace can_driver
{

namespace srv
{

namespace builder
{

class Init_ApplyLimits_Request_require_current_inside_limits
{
public:
  explicit Init_ApplyLimits_Request_require_current_inside_limits(::can_driver::srv::ApplyLimits_Request & msg)
  : msg_(msg)
  {}
  ::can_driver::srv::ApplyLimits_Request require_current_inside_limits(::can_driver::srv::ApplyLimits_Request::_require_current_inside_limits_type arg)
  {
    msg_.require_current_inside_limits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::srv::ApplyLimits_Request msg_;
};

class Init_ApplyLimits_Request_apply_to_motor
{
public:
  explicit Init_ApplyLimits_Request_apply_to_motor(::can_driver::srv::ApplyLimits_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyLimits_Request_require_current_inside_limits apply_to_motor(::can_driver::srv::ApplyLimits_Request::_apply_to_motor_type arg)
  {
    msg_.apply_to_motor = std::move(arg);
    return Init_ApplyLimits_Request_require_current_inside_limits(msg_);
  }

private:
  ::can_driver::srv::ApplyLimits_Request msg_;
};

class Init_ApplyLimits_Request_use_urdf_limits
{
public:
  explicit Init_ApplyLimits_Request_use_urdf_limits(::can_driver::srv::ApplyLimits_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyLimits_Request_apply_to_motor use_urdf_limits(::can_driver::srv::ApplyLimits_Request::_use_urdf_limits_type arg)
  {
    msg_.use_urdf_limits = std::move(arg);
    return Init_ApplyLimits_Request_apply_to_motor(msg_);
  }

private:
  ::can_driver::srv::ApplyLimits_Request msg_;
};

class Init_ApplyLimits_Request_max_position_rad
{
public:
  explicit Init_ApplyLimits_Request_max_position_rad(::can_driver::srv::ApplyLimits_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyLimits_Request_use_urdf_limits max_position_rad(::can_driver::srv::ApplyLimits_Request::_max_position_rad_type arg)
  {
    msg_.max_position_rad = std::move(arg);
    return Init_ApplyLimits_Request_use_urdf_limits(msg_);
  }

private:
  ::can_driver::srv::ApplyLimits_Request msg_;
};

class Init_ApplyLimits_Request_min_position_rad
{
public:
  explicit Init_ApplyLimits_Request_min_position_rad(::can_driver::srv::ApplyLimits_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyLimits_Request_max_position_rad min_position_rad(::can_driver::srv::ApplyLimits_Request::_min_position_rad_type arg)
  {
    msg_.min_position_rad = std::move(arg);
    return Init_ApplyLimits_Request_max_position_rad(msg_);
  }

private:
  ::can_driver::srv::ApplyLimits_Request msg_;
};

class Init_ApplyLimits_Request_motor_id
{
public:
  Init_ApplyLimits_Request_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplyLimits_Request_min_position_rad motor_id(::can_driver::srv::ApplyLimits_Request::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_ApplyLimits_Request_min_position_rad(msg_);
  }

private:
  ::can_driver::srv::ApplyLimits_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::srv::ApplyLimits_Request>()
{
  return can_driver::srv::builder::Init_ApplyLimits_Request_motor_id();
}

}  // namespace can_driver


namespace can_driver
{

namespace srv
{

namespace builder
{

class Init_ApplyLimits_Response_current_position_rad
{
public:
  explicit Init_ApplyLimits_Response_current_position_rad(::can_driver::srv::ApplyLimits_Response & msg)
  : msg_(msg)
  {}
  ::can_driver::srv::ApplyLimits_Response current_position_rad(::can_driver::srv::ApplyLimits_Response::_current_position_rad_type arg)
  {
    msg_.current_position_rad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::srv::ApplyLimits_Response msg_;
};

class Init_ApplyLimits_Response_applied_max_rad
{
public:
  explicit Init_ApplyLimits_Response_applied_max_rad(::can_driver::srv::ApplyLimits_Response & msg)
  : msg_(msg)
  {}
  Init_ApplyLimits_Response_current_position_rad applied_max_rad(::can_driver::srv::ApplyLimits_Response::_applied_max_rad_type arg)
  {
    msg_.applied_max_rad = std::move(arg);
    return Init_ApplyLimits_Response_current_position_rad(msg_);
  }

private:
  ::can_driver::srv::ApplyLimits_Response msg_;
};

class Init_ApplyLimits_Response_applied_min_rad
{
public:
  explicit Init_ApplyLimits_Response_applied_min_rad(::can_driver::srv::ApplyLimits_Response & msg)
  : msg_(msg)
  {}
  Init_ApplyLimits_Response_applied_max_rad applied_min_rad(::can_driver::srv::ApplyLimits_Response::_applied_min_rad_type arg)
  {
    msg_.applied_min_rad = std::move(arg);
    return Init_ApplyLimits_Response_applied_max_rad(msg_);
  }

private:
  ::can_driver::srv::ApplyLimits_Response msg_;
};

class Init_ApplyLimits_Response_active_zero_offset_rad
{
public:
  explicit Init_ApplyLimits_Response_active_zero_offset_rad(::can_driver::srv::ApplyLimits_Response & msg)
  : msg_(msg)
  {}
  Init_ApplyLimits_Response_applied_min_rad active_zero_offset_rad(::can_driver::srv::ApplyLimits_Response::_active_zero_offset_rad_type arg)
  {
    msg_.active_zero_offset_rad = std::move(arg);
    return Init_ApplyLimits_Response_applied_min_rad(msg_);
  }

private:
  ::can_driver::srv::ApplyLimits_Response msg_;
};

class Init_ApplyLimits_Response_message
{
public:
  explicit Init_ApplyLimits_Response_message(::can_driver::srv::ApplyLimits_Response & msg)
  : msg_(msg)
  {}
  Init_ApplyLimits_Response_active_zero_offset_rad message(::can_driver::srv::ApplyLimits_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ApplyLimits_Response_active_zero_offset_rad(msg_);
  }

private:
  ::can_driver::srv::ApplyLimits_Response msg_;
};

class Init_ApplyLimits_Response_success
{
public:
  Init_ApplyLimits_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplyLimits_Response_message success(::can_driver::srv::ApplyLimits_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ApplyLimits_Response_message(msg_);
  }

private:
  ::can_driver::srv::ApplyLimits_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::srv::ApplyLimits_Response>()
{
  return can_driver::srv::builder::Init_ApplyLimits_Response_success();
}

}  // namespace can_driver

#endif  // CAN_DRIVER__SRV__DETAIL__APPLY_LIMITS__BUILDER_HPP_
