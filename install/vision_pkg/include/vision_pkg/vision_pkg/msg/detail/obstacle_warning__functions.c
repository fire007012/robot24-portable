// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vision_pkg:msg/ObstacleWarning.idl
// generated code does not contain a copyright notice
#include "vision_pkg/msg/detail/obstacle_warning__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
vision_pkg__msg__ObstacleWarning__init(vision_pkg__msg__ObstacleWarning * msg)
{
  if (!msg) {
    return false;
  }
  // left_dist
  // center_dist
  // right_dist
  // left_warn
  // center_warn
  // right_warn
  return true;
}

void
vision_pkg__msg__ObstacleWarning__fini(vision_pkg__msg__ObstacleWarning * msg)
{
  if (!msg) {
    return;
  }
  // left_dist
  // center_dist
  // right_dist
  // left_warn
  // center_warn
  // right_warn
}

bool
vision_pkg__msg__ObstacleWarning__are_equal(const vision_pkg__msg__ObstacleWarning * lhs, const vision_pkg__msg__ObstacleWarning * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_dist
  if (lhs->left_dist != rhs->left_dist) {
    return false;
  }
  // center_dist
  if (lhs->center_dist != rhs->center_dist) {
    return false;
  }
  // right_dist
  if (lhs->right_dist != rhs->right_dist) {
    return false;
  }
  // left_warn
  if (lhs->left_warn != rhs->left_warn) {
    return false;
  }
  // center_warn
  if (lhs->center_warn != rhs->center_warn) {
    return false;
  }
  // right_warn
  if (lhs->right_warn != rhs->right_warn) {
    return false;
  }
  return true;
}

bool
vision_pkg__msg__ObstacleWarning__copy(
  const vision_pkg__msg__ObstacleWarning * input,
  vision_pkg__msg__ObstacleWarning * output)
{
  if (!input || !output) {
    return false;
  }
  // left_dist
  output->left_dist = input->left_dist;
  // center_dist
  output->center_dist = input->center_dist;
  // right_dist
  output->right_dist = input->right_dist;
  // left_warn
  output->left_warn = input->left_warn;
  // center_warn
  output->center_warn = input->center_warn;
  // right_warn
  output->right_warn = input->right_warn;
  return true;
}

vision_pkg__msg__ObstacleWarning *
vision_pkg__msg__ObstacleWarning__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_pkg__msg__ObstacleWarning * msg = (vision_pkg__msg__ObstacleWarning *)allocator.allocate(sizeof(vision_pkg__msg__ObstacleWarning), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_pkg__msg__ObstacleWarning));
  bool success = vision_pkg__msg__ObstacleWarning__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_pkg__msg__ObstacleWarning__destroy(vision_pkg__msg__ObstacleWarning * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_pkg__msg__ObstacleWarning__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_pkg__msg__ObstacleWarning__Sequence__init(vision_pkg__msg__ObstacleWarning__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_pkg__msg__ObstacleWarning * data = NULL;

  if (size) {
    data = (vision_pkg__msg__ObstacleWarning *)allocator.zero_allocate(size, sizeof(vision_pkg__msg__ObstacleWarning), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_pkg__msg__ObstacleWarning__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_pkg__msg__ObstacleWarning__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vision_pkg__msg__ObstacleWarning__Sequence__fini(vision_pkg__msg__ObstacleWarning__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vision_pkg__msg__ObstacleWarning__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vision_pkg__msg__ObstacleWarning__Sequence *
vision_pkg__msg__ObstacleWarning__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_pkg__msg__ObstacleWarning__Sequence * array = (vision_pkg__msg__ObstacleWarning__Sequence *)allocator.allocate(sizeof(vision_pkg__msg__ObstacleWarning__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_pkg__msg__ObstacleWarning__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_pkg__msg__ObstacleWarning__Sequence__destroy(vision_pkg__msg__ObstacleWarning__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_pkg__msg__ObstacleWarning__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_pkg__msg__ObstacleWarning__Sequence__are_equal(const vision_pkg__msg__ObstacleWarning__Sequence * lhs, const vision_pkg__msg__ObstacleWarning__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_pkg__msg__ObstacleWarning__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_pkg__msg__ObstacleWarning__Sequence__copy(
  const vision_pkg__msg__ObstacleWarning__Sequence * input,
  vision_pkg__msg__ObstacleWarning__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_pkg__msg__ObstacleWarning);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_pkg__msg__ObstacleWarning * data =
      (vision_pkg__msg__ObstacleWarning *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_pkg__msg__ObstacleWarning__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_pkg__msg__ObstacleWarning__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_pkg__msg__ObstacleWarning__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
