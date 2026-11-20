// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_pkg:msg/DetectedObject3DArray.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D_ARRAY__BUILDER_HPP_
#define VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_pkg/msg/detail/detected_object3_d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_pkg
{

namespace msg
{

namespace builder
{

class Init_DetectedObject3DArray_objects
{
public:
  explicit Init_DetectedObject3DArray_objects(::vision_pkg::msg::DetectedObject3DArray & msg)
  : msg_(msg)
  {}
  ::vision_pkg::msg::DetectedObject3DArray objects(::vision_pkg::msg::DetectedObject3DArray::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_pkg::msg::DetectedObject3DArray msg_;
};

class Init_DetectedObject3DArray_header
{
public:
  Init_DetectedObject3DArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObject3DArray_objects header(::vision_pkg::msg::DetectedObject3DArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectedObject3DArray_objects(msg_);
  }

private:
  ::vision_pkg::msg::DetectedObject3DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_pkg::msg::DetectedObject3DArray>()
{
  return vision_pkg::msg::builder::Init_DetectedObject3DArray_header();
}

}  // namespace vision_pkg

#endif  // VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D_ARRAY__BUILDER_HPP_
