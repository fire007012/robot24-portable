// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from can_driver:srv/Recover.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__RECOVER__STRUCT_H_
#define CAN_DRIVER__SRV__DETAIL__RECOVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Recover in the package can_driver.
typedef struct can_driver__srv__Recover_Request
{
  /// 目标电机 ID；0xFFFF 表示全局恢复
  uint16_t motor_id;
} can_driver__srv__Recover_Request;

// Struct for a sequence of can_driver__srv__Recover_Request.
typedef struct can_driver__srv__Recover_Request__Sequence
{
  can_driver__srv__Recover_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__srv__Recover_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Recover in the package can_driver.
typedef struct can_driver__srv__Recover_Response
{
  bool success;
  /// 失败时返回原因
  rosidl_runtime_c__String message;
} can_driver__srv__Recover_Response;

// Struct for a sequence of can_driver__srv__Recover_Response.
typedef struct can_driver__srv__Recover_Response__Sequence
{
  can_driver__srv__Recover_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__srv__Recover_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAN_DRIVER__SRV__DETAIL__RECOVER__STRUCT_H_
