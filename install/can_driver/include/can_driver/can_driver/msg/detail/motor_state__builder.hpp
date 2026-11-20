// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from can_driver:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "can_driver/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace can_driver
{

namespace msg
{

namespace builder
{

class Init_MotorState_feedback_fresh
{
public:
  explicit Init_MotorState_feedback_fresh(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::can_driver::msg::MotorState feedback_fresh(::can_driver::msg::MotorState::_feedback_fresh_type arg)
  {
    msg_.feedback_fresh = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_current_valid
{
public:
  explicit Init_MotorState_current_valid(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_feedback_fresh current_valid(::can_driver::msg::MotorState::_current_valid_type arg)
  {
    msg_.current_valid = std::move(arg);
    return Init_MotorState_feedback_fresh(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_velocity_valid
{
public:
  explicit Init_MotorState_velocity_valid(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_current_valid velocity_valid(::can_driver::msg::MotorState::_velocity_valid_type arg)
  {
    msg_.velocity_valid = std::move(arg);
    return Init_MotorState_current_valid(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_position_valid
{
public:
  explicit Init_MotorState_position_valid(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_velocity_valid position_valid(::can_driver::msg::MotorState::_position_valid_type arg)
  {
    msg_.position_valid = std::move(arg);
    return Init_MotorState_velocity_valid(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_status_valid
{
public:
  explicit Init_MotorState_status_valid(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_position_valid status_valid(::can_driver::msg::MotorState::_status_valid_type arg)
  {
    msg_.status_valid = std::move(arg);
    return Init_MotorState_position_valid(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_mode_valid
{
public:
  explicit Init_MotorState_mode_valid(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_status_valid mode_valid(::can_driver::msg::MotorState::_mode_valid_type arg)
  {
    msg_.mode_valid = std::move(arg);
    return Init_MotorState_status_valid(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_joint_velocity
{
public:
  explicit Init_MotorState_joint_velocity(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_mode_valid joint_velocity(::can_driver::msg::MotorState::_joint_velocity_type arg)
  {
    msg_.joint_velocity = std::move(arg);
    return Init_MotorState_mode_valid(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_joint_position
{
public:
  explicit Init_MotorState_joint_position(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_joint_velocity joint_position(::can_driver::msg::MotorState::_joint_position_type arg)
  {
    msg_.joint_position = std::move(arg);
    return Init_MotorState_joint_velocity(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_current
{
public:
  explicit Init_MotorState_current(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_joint_position current(::can_driver::msg::MotorState::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_MotorState_joint_position(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_velocity
{
public:
  explicit Init_MotorState_velocity(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_current velocity(::can_driver::msg::MotorState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MotorState_current(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_position
{
public:
  explicit Init_MotorState_position(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_velocity position(::can_driver::msg::MotorState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MotorState_velocity(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_fault
{
public:
  explicit Init_MotorState_fault(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_position fault(::can_driver::msg::MotorState::_fault_type arg)
  {
    msg_.fault = std::move(arg);
    return Init_MotorState_position(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_enabled
{
public:
  explicit Init_MotorState_enabled(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_fault enabled(::can_driver::msg::MotorState::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_MotorState_fault(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_mode
{
public:
  explicit Init_MotorState_mode(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_enabled mode(::can_driver::msg::MotorState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorState_enabled(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_name
{
public:
  explicit Init_MotorState_name(::can_driver::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_mode name(::can_driver::msg::MotorState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MotorState_mode(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

class Init_MotorState_motor_id
{
public:
  Init_MotorState_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_name motor_id(::can_driver::msg::MotorState::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_MotorState_name(msg_);
  }

private:
  ::can_driver::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::msg::MotorState>()
{
  return can_driver::msg::builder::Init_MotorState_motor_id();
}

}  // namespace can_driver

#endif  // CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
