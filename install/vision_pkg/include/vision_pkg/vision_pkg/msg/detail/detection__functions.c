// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vision_pkg:msg/Detection.idl
// generated code does not contain a copyright notice
#include "vision_pkg/msg/detail/detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

bool
vision_pkg__msg__Detection__init(vision_pkg__msg__Detection * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vision_pkg__msg__Detection__fini(msg);
    return false;
  }
  // id
  // confidence
  // x
  // y
  // width
  // height
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    vision_pkg__msg__Detection__fini(msg);
    return false;
  }
  return true;
}

void
vision_pkg__msg__Detection__fini(vision_pkg__msg__Detection * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // confidence
  // x
  // y
  // width
  // height
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
}

bool
vision_pkg__msg__Detection__are_equal(const vision_pkg__msg__Detection * lhs, const vision_pkg__msg__Detection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  return true;
}

bool
vision_pkg__msg__Detection__copy(
  const vision_pkg__msg__Detection * input,
  vision_pkg__msg__Detection * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // confidence
  output->confidence = input->confidence;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  return true;
}

vision_pkg__msg__Detection *
vision_pkg__msg__Detection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_pkg__msg__Detection * msg = (vision_pkg__msg__Detection *)allocator.allocate(sizeof(vision_pkg__msg__Detection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_pkg__msg__Detection));
  bool success = vision_pkg__msg__Detection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_pkg__msg__Detection__destroy(vision_pkg__msg__Detection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_pkg__msg__Detection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_pkg__msg__Detection__Sequence__init(vision_pkg__msg__Detection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_pkg__msg__Detection * data = NULL;

  if (size) {
    data = (vision_pkg__msg__Detection *)allocator.zero_allocate(size, sizeof(vision_pkg__msg__Detection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_pkg__msg__Detection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_pkg__msg__Detection__fini(&data[i - 1]);
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
vision_pkg__msg__Detection__Sequence__fini(vision_pkg__msg__Detection__Sequence * array)
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
      vision_pkg__msg__Detection__fini(&array->data[i]);
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

vision_pkg__msg__Detection__Sequence *
vision_pkg__msg__Detection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_pkg__msg__Detection__Sequence * array = (vision_pkg__msg__Detection__Sequence *)allocator.allocate(sizeof(vision_pkg__msg__Detection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_pkg__msg__Detection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_pkg__msg__Detection__Sequence__destroy(vision_pkg__msg__Detection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_pkg__msg__Detection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_pkg__msg__Detection__Sequence__are_equal(const vision_pkg__msg__Detection__Sequence * lhs, const vision_pkg__msg__Detection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_pkg__msg__Detection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_pkg__msg__Detection__Sequence__copy(
  const vision_pkg__msg__Detection__Sequence * input,
  vision_pkg__msg__Detection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_pkg__msg__Detection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_pkg__msg__Detection * data =
      (vision_pkg__msg__Detection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_pkg__msg__Detection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_pkg__msg__Detection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_pkg__msg__Detection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
