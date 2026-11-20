// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from can_driver:srv/SetZero.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__SET_ZERO__BUILDER_HPP_
#define CAN_DRIVER__SRV__DETAIL__SET_ZERO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "can_driver/srv/detail/set_zero__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace can_driver
{

namespace srv
{

namespace builder
{

class Init_SetZero_Request_apply_to_motor
{
public:
  explicit Init_SetZero_Request_apply_to_motor(::can_driver::srv::SetZero_Request & msg)
  : msg_(msg)
  {}
  ::can_driver::srv::SetZero_Request apply_to_motor(::can_driver::srv::SetZero_Request::_apply_to_motor_type arg)
  {
    msg_.apply_to_motor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::srv::SetZero_Request msg_;
};

class Init_SetZero_Request_use_current_position_as_zero
{
public:
  explicit Init_SetZero_Request_use_current_position_as_zero(::can_driver::srv::SetZero_Request & msg)
  : msg_(msg)
  {}
  Init_SetZero_Request_apply_to_motor use_current_position_as_zero(::can_driver::srv::SetZero_Request::_use_current_position_as_zero_type arg)
  {
    msg_.use_current_position_as_zero = std::move(arg);
    return Init_SetZero_Request_apply_to_motor(msg_);
  }

private:
  ::can_driver::srv::SetZero_Request msg_;
};

class Init_SetZero_Request_zero_offset_rad
{
public:
  explicit Init_SetZero_Request_zero_offset_rad(::can_driver::srv::SetZero_Request & msg)
  : msg_(msg)
  {}
  Init_SetZero_Request_use_current_position_as_zero zero_offset_rad(::can_driver::srv::SetZero_Request::_zero_offset_rad_type arg)
  {
    msg_.zero_offset_rad = std::move(arg);
    return Init_SetZero_Request_use_current_position_as_zero(msg_);
  }

private:
  ::can_driver::srv::SetZero_Request msg_;
};

class Init_SetZero_Request_motor_id
{
public:
  Init_SetZero_Request_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetZero_Request_zero_offset_rad motor_id(::can_driver::srv::SetZero_Request::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_SetZero_Request_zero_offset_rad(msg_);
  }

private:
  ::can_driver::srv::SetZero_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::srv::SetZero_Request>()
{
  return can_driver::srv::builder::Init_SetZero_Request_motor_id();
}

}  // namespace can_driver


namespace can_driver
{

namespace srv
{

namespace builder
{

class Init_SetZero_Response_current_position_rad
{
public:
  explicit Init_SetZero_Response_current_position_rad(::can_driver::srv::SetZero_Response & msg)
  : msg_(msg)
  {}
  ::can_driver::srv::SetZero_Response current_position_rad(::can_driver::srv::SetZero_Response::_current_position_rad_type arg)
  {
    msg_.current_position_rad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::srv::SetZero_Response msg_;
};

class Init_SetZero_Response_applied_zero_offset_rad
{
public:
  explicit Init_SetZero_Response_applied_zero_offset_rad(::can_driver::srv::SetZero_Response & msg)
  : msg_(msg)
  {}
  Init_SetZero_Response_current_position_rad applied_zero_offset_rad(::can_driver::srv::SetZero_Response::_applied_zero_offset_rad_type arg)
  {
    msg_.applied_zero_offset_rad = std::move(arg);
    return Init_SetZero_Response_current_position_rad(msg_);
  }

private:
  ::can_driver::srv::SetZero_Response msg_;
};

class Init_SetZero_Response_previous_zero_offset_rad
{
public:
  explicit Init_SetZero_Response_previous_zero_offset_rad(::can_driver::srv::SetZero_Response & msg)
  : msg_(msg)
  {}
  Init_SetZero_Response_applied_zero_offset_rad previous_zero_offset_rad(::can_driver::srv::SetZero_Response::_previous_zero_offset_rad_type arg)
  {
    msg_.previous_zero_offset_rad = std::move(arg);
    return Init_SetZero_Response_applied_zero_offset_rad(msg_);
  }

private:
  ::can_driver::srv::SetZero_Response msg_;
};

class Init_SetZero_Response_message
{
public:
  explicit Init_SetZero_Response_message(::can_driver::srv::SetZero_Response & msg)
  : msg_(msg)
  {}
  Init_SetZero_Response_previous_zero_offset_rad message(::can_driver::srv::SetZero_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SetZero_Response_previous_zero_offset_rad(msg_);
  }

private:
  ::can_driver::srv::SetZero_Response msg_;
};

class Init_SetZero_Response_success
{
public:
  Init_SetZero_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetZero_Response_message success(::can_driver::srv::SetZero_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetZero_Response_message(msg_);
  }

private:
  ::can_driver::srv::SetZero_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::srv::SetZero_Response>()
{
  return can_driver::srv::builder::Init_SetZero_Response_success();
}

}  // namespace can_driver

#endif  // CAN_DRIVER__SRV__DETAIL__SET_ZERO__BUILDER_HPP_
