// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from can_driver:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "can_driver/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "can_driver/msg/detail/motor_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace can_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_can_driver
cdr_serialize(
  const can_driver::msg::MotorState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_can_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  can_driver::msg::MotorState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_can_driver
get_serialized_size(
  const can_driver::msg::MotorState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_can_driver
max_serialized_size_MotorState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace can_driver

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_can_driver
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, can_driver, msg, MotorState)();

#ifdef __cplusplus
}
#endif

#endif  // CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
