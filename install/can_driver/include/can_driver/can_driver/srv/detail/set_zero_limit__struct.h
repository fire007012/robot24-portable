// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from can_driver:srv/SetZeroLimit.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__SET_ZERO_LIMIT__STRUCT_H_
#define CAN_DRIVER__SRV__DETAIL__SET_ZERO_LIMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetZeroLimit in the package can_driver.
typedef struct can_driver__srv__SetZeroLimit_Request
{
  /// 目标电机ID
  uint16_t motor_id;
  /// 零点偏置（rad，按 joint 正方向）
  double zero_offset_rad;
  /// true: 忽略 zero_offset_rad，按当前实际位置自动归零
  bool use_current_position_as_zero;
  /// 手工下限（rad）
  double min_position_rad;
  /// 手工上限（rad）
  double max_position_rad;
  /// true: 从URDF读取限位并叠加偏置；false: 使用上面手工值
  bool use_urdf_limits;
  /// true: 下发到电机物理限位寄存器
  bool apply_to_motor;
} can_driver__srv__SetZeroLimit_Request;

// Struct for a sequence of can_driver__srv__SetZeroLimit_Request.
typedef struct can_driver__srv__SetZeroLimit_Request__Sequence
{
  can_driver__srv__SetZeroLimit_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__srv__SetZeroLimit_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetZeroLimit in the package can_driver.
typedef struct can_driver__srv__SetZeroLimit_Response
{
  bool success;
  rosidl_runtime_c__String message;
  /// 实际使用的零点偏置（rad）
  double applied_zero_offset_rad;
  /// 生效下限（rad）
  double applied_min_rad;
  /// 生效上限（rad）
  double applied_max_rad;
  /// 设置时读取到的当前位置（rad）
  double current_position_rad;
} can_driver__srv__SetZeroLimit_Response;

// Struct for a sequence of can_driver__srv__SetZeroLimit_Response.
typedef struct can_driver__srv__SetZeroLimit_Response__Sequence
{
  can_driver__srv__SetZeroLimit_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__srv__SetZeroLimit_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAN_DRIVER__SRV__DETAIL__SET_ZERO_LIMIT__STRUCT_H_
