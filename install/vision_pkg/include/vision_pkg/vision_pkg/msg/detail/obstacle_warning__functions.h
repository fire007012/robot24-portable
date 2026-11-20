// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vision_pkg:msg/ObstacleWarning.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__FUNCTIONS_H_
#define VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vision_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "vision_pkg/msg/detail/obstacle_warning__struct.h"

/// Initialize msg/ObstacleWarning message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vision_pkg__msg__ObstacleWarning
 * )) before or use
 * vision_pkg__msg__ObstacleWarning__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__msg__ObstacleWarning__init(vision_pkg__msg__ObstacleWarning * msg);

/// Finalize msg/ObstacleWarning message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
void
vision_pkg__msg__ObstacleWarning__fini(vision_pkg__msg__ObstacleWarning * msg);

/// Create msg/ObstacleWarning message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vision_pkg__msg__ObstacleWarning__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
vision_pkg__msg__ObstacleWarning *
vision_pkg__msg__ObstacleWarning__create();

/// Destroy msg/ObstacleWarning message.
/**
 * It calls
 * vision_pkg__msg__ObstacleWarning__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
void
vision_pkg__msg__ObstacleWarning__destroy(vision_pkg__msg__ObstacleWarning * msg);

/// Check for msg/ObstacleWarning message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__msg__ObstacleWarning__are_equal(const vision_pkg__msg__ObstacleWarning * lhs, const vision_pkg__msg__ObstacleWarning * rhs);

/// Copy a msg/ObstacleWarning message.
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
vision_pkg__msg__ObstacleWarning__copy(
  const vision_pkg__msg__ObstacleWarning * input,
  vision_pkg__msg__ObstacleWarning * output);

/// Initialize array of msg/ObstacleWarning messages.
/**
 * It allocates the memory for the number of elements and calls
 * vision_pkg__msg__ObstacleWarning__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__msg__ObstacleWarning__Sequence__init(vision_pkg__msg__ObstacleWarning__Sequence * array, size_t size);

/// Finalize array of msg/ObstacleWarning messages.
/**
 * It calls
 * vision_pkg__msg__ObstacleWarning__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
void
vision_pkg__msg__ObstacleWarning__Sequence__fini(vision_pkg__msg__ObstacleWarning__Sequence * array);

/// Create array of msg/ObstacleWarning messages.
/**
 * It allocates the memory for the array and calls
 * vision_pkg__msg__ObstacleWarning__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
vision_pkg__msg__ObstacleWarning__Sequence *
vision_pkg__msg__ObstacleWarning__Sequence__create(size_t size);

/// Destroy array of msg/ObstacleWarning messages.
/**
 * It calls
 * vision_pkg__msg__ObstacleWarning__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
void
vision_pkg__msg__ObstacleWarning__Sequence__destroy(vision_pkg__msg__ObstacleWarning__Sequence * array);

/// Check for msg/ObstacleWarning message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_pkg
bool
vision_pkg__msg__ObstacleWarning__Sequence__are_equal(const vision_pkg__msg__ObstacleWarning__Sequence * lhs, const vision_pkg__msg__ObstacleWarning__Sequence * rhs);

/// Copy an array of msg/ObstacleWarning messages.
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
vision_pkg__msg__ObstacleWarning__Sequence__copy(
  const vision_pkg__msg__ObstacleWarning__Sequence * input,
  vision_pkg__msg__ObstacleWarning__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__FUNCTIONS_H_
