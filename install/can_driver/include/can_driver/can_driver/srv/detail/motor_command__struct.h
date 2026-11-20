// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from can_driver:srv/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define CAN_DRIVER__SRV__DETAIL__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CMD_ENABLE'.
/**
  * command 常量
 */
enum
{
  can_driver__srv__MotorCommand_Request__CMD_ENABLE = 0
};

/// Constant 'CMD_DISABLE'.
enum
{
  can_driver__srv__MotorCommand_Request__CMD_DISABLE = 1
};

/// Constant 'CMD_STOP'.
enum
{
  can_driver__srv__MotorCommand_Request__CMD_STOP = 2
};

/// Constant 'CMD_SET_MODE'.
/**
  * value: 0=position  1=velocity  2=csp
 */
enum
{
  can_driver__srv__MotorCommand_Request__CMD_SET_MODE = 3
};

/// Struct defined in srv/MotorCommand in the package can_driver.
typedef struct can_driver__srv__MotorCommand_Request
{
  /// 电机 ID
  uint16_t motor_id;
  /// 指令类型，见下方 CMD_* 常量
  uint8_t command;
  /// 指令参数（例如速度、位置或 mode 值）
  double value;
} can_driver__srv__MotorCommand_Request;

// Struct for a sequence of can_driver__srv__MotorCommand_Request.
typedef struct can_driver__srv__MotorCommand_Request__Sequence
{
  can_driver__srv__MotorCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__srv__MotorCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MotorCommand in the package can_driver.
typedef struct can_driver__srv__MotorCommand_Response
{
  bool success;
  /// 失败时返回原因
  rosidl_runtime_c__String message;
} can_driver__srv__MotorCommand_Response;

// Struct for a sequence of can_driver__srv__MotorCommand_Response.
typedef struct can_driver__srv__MotorCommand_Response__Sequence
{
  can_driver__srv__MotorCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__srv__MotorCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAN_DRIVER__SRV__DETAIL__MOTOR_COMMAND__STRUCT_H_
