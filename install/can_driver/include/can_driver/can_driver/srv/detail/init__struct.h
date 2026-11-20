// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from can_driver:srv/Init.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__INIT__STRUCT_H_
#define CAN_DRIVER__SRV__DETAIL__INIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'device'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Init in the package can_driver.
typedef struct can_driver__srv__Init_Request
{
  /// SocketCAN 设备名（如 canable0/vcan0）
  rosidl_runtime_c__String device;
  /// 是否让当前 socket 接收自己发出的帧（测试场景常用）
  bool loopback;
} can_driver__srv__Init_Request;

// Struct for a sequence of can_driver__srv__Init_Request.
typedef struct can_driver__srv__Init_Request__Sequence
{
  can_driver__srv__Init_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__srv__Init_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Init in the package can_driver.
typedef struct can_driver__srv__Init_Response
{
  bool success;
  /// 失败时返回原因
  rosidl_runtime_c__String message;
} can_driver__srv__Init_Response;

// Struct for a sequence of can_driver__srv__Init_Response.
typedef struct can_driver__srv__Init_Response__Sequence
{
  can_driver__srv__Init_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__srv__Init_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAN_DRIVER__SRV__DETAIL__INIT__STRUCT_H_
