// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vision_pkg:srv/SetDetectionEnabled.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__FUNCTIONS_H_
#define VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vision_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "vision_pkg/srv/detail/set_detection_enabled__struct.h"

/// Initialize srv/SetDetectionEnabled message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vision_pkg__srv__SetDetectionEnabled_Request
 * )) before or use
 * vision_pkg__srv__SetDetectionEnabled_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__srv__SetDetectionEnabled_Request__init(vision_pkg__srv__SetDetectionEnabled_Request * msg);

/// Finalize srv/SetDetectionEnabled message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
void
vision_pkg__srv__SetDetectionEnabled_Request__fini(vision_pkg__srv__SetDetectionEnabled_Request * msg);

/// Create srv/SetDetectionEnabled message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vision_pkg__srv__SetDetectionEnabled_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
vision_pkg__srv__SetDetectionEnabled_Request *
vision_pkg__srv__SetDetectionEnabled_Request__create();

/// Destroy srv/SetDetectionEnabled message.
/**
 * It calls
 * vision_pkg__srv__SetDetectionEnabled_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
void
vision_pkg__srv__SetDetectionEnabled_Request__destroy(vision_pkg__srv__SetDetectionEnabled_Request * msg);

/// Check for srv/SetDetectionEnabled message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__srv__SetDetectionEnabled_Request__are_equal(const vision_pkg__srv__SetDetectionEnabled_Request * lhs, const vision_pkg__srv__SetDetectionEnabled_Request * rhs);

/// Copy a srv/SetDetectionEnabled message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__srv__SetDetectionEnabled_Request__copy(
  const vision_pkg__srv__SetDetectionEnabled_Request * input,
  vision_pkg__srv__SetDetectionEnabled_Request * output);

/// Initialize array of srv/SetDetectionEnabled messages.
/**
 * It allocates the memory for the number of elements and calls
 * vision_pkg__srv__SetDetectionEnabled_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__srv__SetDetectionEnabled_Request__Sequence__init(vision_pkg__srv__SetDetectionEnabled_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetDetectionEnabled messages.
/**
 * It calls
 * vision_pkg__srv__SetDetectionEnabled_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
void
vision_pkg__srv__SetDetectionEnabled_Request__Sequence__fini(vision_pkg__srv__SetDetectionEnabled_Request__Sequence * array);

/// Create array of srv/SetDetectionEnabled messages.
/**
 * It allocates the memory for the array and calls
 * vision_pkg__srv__SetDetectionEnabled_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
vision_pkg__srv__SetDetectionEnabled_Request__Sequence *
vision_pkg__srv__SetDetectionEnabled_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetDetectionEnabled messages.
/**
 * It calls
 * vision_pkg__srv__SetDetectionEnabled_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
void
vision_pkg__srv__SetDetectionEnabled_Request__Sequence__destroy(vision_pkg__srv__SetDetectionEnabled_Request__Sequence * array);

/// Check for srv/SetDetectionEnabled message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__srv__SetDetectionEnabled_Request__Sequence__are_equal(const vision_pkg__srv__SetDetectionEnabled_Request__Sequence * lhs, const vision_pkg__srv__SetDetectionEnabled_Request__Sequence * rhs);

/// Copy an array of srv/SetDetectionEnabled messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__srv__SetDetectionEnabled_Request__Sequence__copy(
  const vision_pkg__srv__SetDetectionEnabled_Request__Sequence * input,
  vision_pkg__srv__SetDetectionEnabled_Request__Sequence * output);

/// Initialize srv/SetDetectionEnabled message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vision_pkg__srv__SetDetectionEnabled_Response
 * )) before or use
 * vision_pkg__srv__SetDetectionEnabled_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__srv__SetDetectionEnabled_Response__init(vision_pkg__srv__SetDetectionEnabled_Response * msg);

/// Finalize srv/SetDetectionEnabled message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
void
vision_pkg__srv__SetDetectionEnabled_Response__fini(vision_pkg__srv__SetDetectionEnabled_Response * msg);

/// Create srv/SetDetectionEnabled message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vision_pkg__srv__SetDetectionEnabled_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
vision_pkg__srv__SetDetectionEnabled_Response *
vision_pkg__srv__SetDetectionEnabled_Response__create();

/// Destroy srv/SetDetectionEnabled message.
/**
 * It calls
 * vision_pkg__srv__SetDetectionEnabled_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
void
vision_pkg__srv__SetDetectionEnabled_Response__destroy(vision_pkg__srv__SetDetectionEnabled_Response * msg);

/// Check for srv/SetDetectionEnabled message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__srv__SetDetectionEnabled_Response__are_equal(const vision_pkg__srv__SetDetectionEnabled_Response * lhs, const vision_pkg__srv__SetDetectionEnabled_Response * rhs);

/// Copy a srv/SetDetectionEnabled message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__srv__SetDetectionEnabled_Response__copy(
  const vision_pkg__srv__SetDetectionEnabled_Response * input,
  vision_pkg__srv__SetDetectionEnabled_Response * output);

/// Initialize array of srv/SetDetectionEnabled messages.
/**
 * It allocates the memory for the number of elements and calls
 * vision_pkg__srv__SetDetectionEnabled_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__srv__SetDetectionEnabled_Response__Sequence__init(vision_pkg__srv__SetDetectionEnabled_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetDetectionEnabled messages.
/**
 * It calls
 * vision_pkg__srv__SetDetectionEnabled_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
void
vision_pkg__srv__SetDetectionEnabled_Response__Sequence__fini(vision_pkg__srv__SetDetectionEnabled_Response__Sequence * array);

/// Create array of srv/SetDetectionEnabled messages.
/**
 * It allocates the memory for the array and calls
 * vision_pkg__srv__SetDetectionEnabled_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
vision_pkg__srv__SetDetectionEnabled_Response__Sequence *
vision_pkg__srv__SetDetectionEnabled_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetDetectionEnabled messages.
/**
 * It calls
 * vision_pkg__srv__SetDetectionEnabled_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
void
vision_pkg__srv__SetDetectionEnabled_Response__Sequence__destroy(vision_pkg__srv__SetDetectionEnabled_Response__Sequence * array);

/// Check for srv/SetDetectionEnabled message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__srv__SetDetectionEnabled_Response__Sequence__are_equal(const vision_pkg__srv__SetDetectionEnabled_Response__Sequence * lhs, const vision_pkg__srv__SetDetectionEnabled_Response__Sequence * rhs);

/// Copy an array of srv/SetDetectionEnabled messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__srv__SetDetectionEnabled_Response__Sequence__copy(
  const vision_pkg__srv__SetDetectionEnabled_Response__Sequence * input,
  vision_pkg__srv__SetDetectionEnabled_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__FUNCTIONS_H_
