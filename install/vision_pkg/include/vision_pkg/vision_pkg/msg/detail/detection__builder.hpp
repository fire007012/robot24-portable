// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_pkg:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define VISION_PKG__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_pkg/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_pkg
{

namespace msg
{

namespace builder
{

class Init_Detection_class_name
{
public:
  explicit Init_Detection_class_name(::vision_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  ::vision_pkg::msg::Detection class_name(::vision_pkg::msg::Detection::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_pkg::msg::Detection msg_;
};

class Init_Detection_height
{
public:
  explicit Init_Detection_height(::vision_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_class_name height(::vision_pkg::msg::Detection::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Detection_class_name(msg_);
  }

private:
  ::vision_pkg::msg::Detection msg_;
};

class Init_Detection_width
{
public:
  explicit Init_Detection_width(::vision_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_height width(::vision_pkg::msg::Detection::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Detection_height(msg_);
  }

private:
  ::vision_pkg::msg::Detection msg_;
};

class Init_Detection_y
{
public:
  explicit Init_Detection_y(::vision_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_width y(::vision_pkg::msg::Detection::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Detection_width(msg_);
  }

private:
  ::vision_pkg::msg::Detection msg_;
};

class Init_Detection_x
{
public:
  explicit Init_Detection_x(::vision_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_y x(::vision_pkg::msg::Detection::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Detection_y(msg_);
  }

private:
  ::vision_pkg::msg::Detection msg_;
};

class Init_Detection_confidence
{
public:
  explicit Init_Detection_confidence(::vision_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_x confidence(::vision_pkg::msg::Detection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Detection_x(msg_);
  }

private:
  ::vision_pkg::msg::Detection msg_;
};

class Init_Detection_id
{
public:
  explicit Init_Detection_id(::vision_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_confidence id(::vision_pkg::msg::Detection::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Detection_confidence(msg_);
  }

private:
  ::vision_pkg::msg::Detection msg_;
};

class Init_Detection_header
{
public:
  Init_Detection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_id header(::vision_pkg::msg::Detection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Detection_id(msg_);
  }

private:
  ::vision_pkg::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_pkg::msg::Detection>()
{
  return vision_pkg::msg::builder::Init_Detection_header();
}

}  // namespace vision_pkg

#endif  // VISION_PKG__MSG__DETAIL__DETECTION__BUILDER_HPP_
