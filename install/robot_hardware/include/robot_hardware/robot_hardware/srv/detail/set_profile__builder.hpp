// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_hardware:srv/SetProfile.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__SRV__DETAIL__SET_PROFILE__BUILDER_HPP_
#define ROBOT_HARDWARE__SRV__DETAIL__SET_PROFILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_hardware/srv/detail/set_profile__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_hardware
{

namespace srv
{

namespace builder
{

class Init_SetProfile_Request_profile
{
public:
  Init_SetProfile_Request_profile()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_hardware::srv::SetProfile_Request profile(::robot_hardware::srv::SetProfile_Request::_profile_type arg)
  {
    msg_.profile = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_hardware::srv::SetProfile_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_hardware::srv::SetProfile_Request>()
{
  return robot_hardware::srv::builder::Init_SetProfile_Request_profile();
}

}  // namespace robot_hardware


namespace robot_hardware
{

namespace srv
{

namespace builder
{

class Init_SetProfile_Response_message
{
public:
  explicit Init_SetProfile_Response_message(::robot_hardware::srv::SetProfile_Response & msg)
  : msg_(msg)
  {}
  ::robot_hardware::srv::SetProfile_Response message(::robot_hardware::srv::SetProfile_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_hardware::srv::SetProfile_Response msg_;
};

class Init_SetProfile_Response_success
{
public:
  Init_SetProfile_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetProfile_Response_message success(::robot_hardware::srv::SetProfile_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetProfile_Response_message(msg_);
  }

private:
  ::robot_hardware::srv::SetProfile_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_hardware::srv::SetProfile_Response>()
{
  return robot_hardware::srv::builder::Init_SetProfile_Response_success();
}

}  // namespace robot_hardware

#endif  // ROBOT_HARDWARE__SRV__DETAIL__SET_PROFILE__BUILDER_HPP_
