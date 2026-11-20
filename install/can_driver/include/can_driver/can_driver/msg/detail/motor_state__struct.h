// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from can_driver:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
#define CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_UNKNOWN'.
/**
  * Common mode constants so topics/services share the same enum semantics.
 */
enum
{
  can_driver__msg__MotorState__MODE_UNKNOWN = 0
};

/// Constant 'MODE_POSITION'.
enum
{
  can_driver__msg__MotorState__MODE_POSITION = 1
};

/// Constant 'MODE_VELOCITY'.
enum
{
  can_driver__msg__MotorState__MODE_VELOCITY = 2
};

/// Constant 'MODE_CSP'.
enum
{
  can_driver__msg__MotorState__MODE_CSP = 3
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotorState in the package can_driver.
typedef struct can_driver__msg__MotorState
{
  /// 电机 ID（总线节点号）
  uint16_t motor_id;
  /// 关节/电机名称
  rosidl_runtime_c__String name;
  /// 运行模式，见下方 MODE_* 常量
  uint8_t mode;
  /// 使能状态
  bool enabled;
  /// 故障标志
  bool fault;
  /// 位置反馈（协议原始单位）
  int32_t position;
  /// 速度反馈（协议原始单位）
  int32_t velocity;
  /// 电流反馈（协议原始单位）
  int16_t current;
  /// 驱动侧关节位置（SI/rad），已应用 direction_sign 与软件 zero offset
  double joint_position;
  /// 驱动侧关节速度（SI/rad/s），已应用 direction_sign
  double joint_velocity;
  /// mode 是否来自真实反馈
  bool mode_valid;
  /// enabled/fault 是否来自真实反馈
  bool status_valid;
  /// position 是否来自真实反馈
  bool position_valid;
  /// velocity 是否来自真实反馈
  bool velocity_valid;
  /// current 是否来自真实反馈
  bool current_valid;
  /// 最近是否收到过新反馈
  bool feedback_fresh;
} can_driver__msg__MotorState;

// Struct for a sequence of can_driver__msg__MotorState.
typedef struct can_driver__msg__MotorState__Sequence
{
  can_driver__msg__MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__msg__MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
