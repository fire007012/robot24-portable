// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from can_driver:srv/Recover.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__RECOVER__BUILDER_HPP_
#define CAN_DRIVER__SRV__DETAIL__RECOVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "can_driver/srv/detail/recover__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace can_driver
{

namespace srv
{

namespace builder
{

class Init_Recover_Request_motor_id
{
public:
  Init_Recover_Request_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::can_driver::srv::Recover_Request motor_id(::can_driver::srv::Recover_Request::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::srv::Recover_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::srv::Recover_Request>()
{
  return can_driver::srv::builder::Init_Recover_Request_motor_id();
}

}  // namespace can_driver


namespace can_driver
{

namespace srv
{

namespace builder
{

class Init_Recover_Response_message
{
public:
  explicit Init_Recover_Response_message(::can_driver::srv::Recover_Response & msg)
  : msg_(msg)
  {}
  ::can_driver::srv::Recover_Response message(::can_driver::srv::Recover_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::srv::Recover_Response msg_;
};

class Init_Recover_Response_success
{
public:
  Init_Recover_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Recover_Response_message success(::can_driver::srv::Recover_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Recover_Response_message(msg_);
  }

private:
  ::can_driver::srv::Recover_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::srv::Recover_Response>()
{
  return can_driver::srv::builder::Init_Recover_Response_success();
}

}  // namespace can_driver

#endif  // CAN_DRIVER__SRV__DETAIL__RECOVER__BUILDER_HPP_
