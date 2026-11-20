// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from can_driver:srv/ApplyLimits.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__APPLY_LIMITS__STRUCT_H_
#define CAN_DRIVER__SRV__DETAIL__APPLY_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ApplyLimits in the package can_driver.
typedef struct can_driver__srv__ApplyLimits_Request
{
  uint16_t motor_id;
  double min_position_rad;
  double max_position_rad;
  bool use_urdf_limits;
  bool apply_to_motor;
  bool require_current_inside_limits;
} can_driver__srv__ApplyLimits_Request;

// Struct for a sequence of can_driver__srv__ApplyLimits_Request.
typedef struct can_driver__srv__ApplyLimits_Request__Sequence
{
  can_driver__srv__ApplyLimits_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__srv__ApplyLimits_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ApplyLimits in the package can_driver.
typedef struct can_driver__srv__ApplyLimits_Response
{
  bool success;
  rosidl_runtime_c__String message;
  double active_zero_offset_rad;
  double applied_min_rad;
  double applied_max_rad;
  double current_position_rad;
} can_driver__srv__ApplyLimits_Response;

// Struct for a sequence of can_driver__srv__ApplyLimits_Response.
typedef struct can_driver__srv__ApplyLimits_Response__Sequence
{
  can_driver__srv__ApplyLimits_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__srv__ApplyLimits_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAN_DRIVER__SRV__DETAIL__APPLY_LIMITS__STRUCT_H_
