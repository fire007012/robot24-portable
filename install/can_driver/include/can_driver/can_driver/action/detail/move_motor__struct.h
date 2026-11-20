// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from can_driver:action/MoveMotor.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__ACTION__DETAIL__MOVE_MOTOR__STRUCT_H_
#define CAN_DRIVER__ACTION__DETAIL__MOVE_MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveMotor in the package can_driver.
typedef struct can_driver__action__MoveMotor_Goal
{
  /// 目标电机 ID
  uint16_t motor_id;
  /// 目标位置（控制层单位）
  double target_position;
  /// 目标速度（控制层单位）
  double target_velocity;
  /// 最大执行时长（秒）
  double max_duration;
} can_driver__action__MoveMotor_Goal;

// Struct for a sequence of can_driver__action__MoveMotor_Goal.
typedef struct can_driver__action__MoveMotor_Goal__Sequence
{
  can_driver__action__MoveMotor_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__action__MoveMotor_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveMotor in the package can_driver.
typedef struct can_driver__action__MoveMotor_Result
{
  bool success;
  /// 失败原因
  rosidl_runtime_c__String message;
} can_driver__action__MoveMotor_Result;

// Struct for a sequence of can_driver__action__MoveMotor_Result.
typedef struct can_driver__action__MoveMotor_Result__Sequence
{
  can_driver__action__MoveMotor_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__action__MoveMotor_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveMotor in the package can_driver.
typedef struct can_driver__action__MoveMotor_Feedback
{
  /// 当前位置信息
  double current_position;
  /// 当前速度信息
  double current_velocity;
  /// 已运行时长（秒）
  double elapsed_time;
} can_driver__action__MoveMotor_Feedback;

// Struct for a sequence of can_driver__action__MoveMotor_Feedback.
typedef struct can_driver__action__MoveMotor_Feedback__Sequence
{
  can_driver__action__MoveMotor_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__action__MoveMotor_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "can_driver/action/detail/move_motor__struct.h"

/// Struct defined in action/MoveMotor in the package can_driver.
typedef struct can_driver__action__MoveMotor_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  can_driver__action__MoveMotor_Goal goal;
} can_driver__action__MoveMotor_SendGoal_Request;

// Struct for a sequence of can_driver__action__MoveMotor_SendGoal_Request.
typedef struct can_driver__action__MoveMotor_SendGoal_Request__Sequence
{
  can_driver__action__MoveMotor_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__action__MoveMotor_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveMotor in the package can_driver.
typedef struct can_driver__action__MoveMotor_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} can_driver__action__MoveMotor_SendGoal_Response;

// Struct for a sequence of can_driver__action__MoveMotor_SendGoal_Response.
typedef struct can_driver__action__MoveMotor_SendGoal_Response__Sequence
{
  can_driver__action__MoveMotor_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__action__MoveMotor_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveMotor in the package can_driver.
typedef struct can_driver__action__MoveMotor_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} can_driver__action__MoveMotor_GetResult_Request;

// Struct for a sequence of can_driver__action__MoveMotor_GetResult_Request.
typedef struct can_driver__action__MoveMotor_GetResult_Request__Sequence
{
  can_driver__action__MoveMotor_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__action__MoveMotor_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "can_driver/action/detail/move_motor__struct.h"

/// Struct defined in action/MoveMotor in the package can_driver.
typedef struct can_driver__action__MoveMotor_GetResult_Response
{
  int8_t status;
  can_driver__action__MoveMotor_Result result;
} can_driver__action__MoveMotor_GetResult_Response;

// Struct for a sequence of can_driver__action__MoveMotor_GetResult_Response.
typedef struct can_driver__action__MoveMotor_GetResult_Response__Sequence
{
  can_driver__action__MoveMotor_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__action__MoveMotor_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "can_driver/action/detail/move_motor__struct.h"

/// Struct defined in action/MoveMotor in the package can_driver.
typedef struct can_driver__action__MoveMotor_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  can_driver__action__MoveMotor_Feedback feedback;
} can_driver__action__MoveMotor_FeedbackMessage;

// Struct for a sequence of can_driver__action__MoveMotor_FeedbackMessage.
typedef struct can_driver__action__MoveMotor_FeedbackMessage__Sequence
{
  can_driver__action__MoveMotor_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__action__MoveMotor_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAN_DRIVER__ACTION__DETAIL__MOVE_MOTOR__STRUCT_H_
