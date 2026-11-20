// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from can_driver:srv/SetZero.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__SET_ZERO__STRUCT_H_
#define CAN_DRIVER__SRV__DETAIL__SET_ZERO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetZero in the package can_driver.
typedef struct can_driver__srv__SetZero_Request
{
  uint16_t motor_id;
  double zero_offset_rad;
  bool use_current_position_as_zero;
  bool apply_to_motor;
} can_driver__srv__SetZero_Request;

// Struct for a sequence of can_driver__srv__SetZero_Request.
typedef struct can_driver__srv__SetZero_Request__Sequence
{
  can_driver__srv__SetZero_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__srv__SetZero_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetZero in the package can_driver.
typedef struct can_driver__srv__SetZero_Response
{
  bool success;
  rosidl_runtime_c__String message;
  double previous_zero_offset_rad;
  double applied_zero_offset_rad;
  double current_position_rad;
} can_driver__srv__SetZero_Response;

// Struct for a sequence of can_driver__srv__SetZero_Response.
typedef struct can_driver__srv__SetZero_Response__Sequence
{
  can_driver__srv__SetZero_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_driver__srv__SetZero_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAN_DRIVER__SRV__DETAIL__SET_ZERO__STRUCT_H_
