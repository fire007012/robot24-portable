// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_hardware:srv/GroupOperation.idl
// generated code does not contain a copyright notice
#include "robot_hardware/srv/detail/group_operation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `groups`
// Member `operation`
// Member `resource`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_hardware__srv__GroupOperation_Request__init(robot_hardware__srv__GroupOperation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // groups
  if (!rosidl_runtime_c__String__Sequence__init(&msg->groups, 0)) {
    robot_hardware__srv__GroupOperation_Request__fini(msg);
    return false;
  }
  // operation
  if (!rosidl_runtime_c__String__init(&msg->operation)) {
    robot_hardware__srv__GroupOperation_Request__fini(msg);
    return false;
  }
  // resource
  if (!rosidl_runtime_c__String__init(&msg->resource)) {
    robot_hardware__srv__GroupOperation_Request__fini(msg);
    return false;
  }
  return true;
}

void
robot_hardware__srv__GroupOperation_Request__fini(robot_hardware__srv__GroupOperation_Request * msg)
{
  if (!msg) {
    return;
  }
  // groups
  rosidl_runtime_c__String__Sequence__fini(&msg->groups);
  // operation
  rosidl_runtime_c__String__fini(&msg->operation);
  // resource
  rosidl_runtime_c__String__fini(&msg->resource);
}

bool
robot_hardware__srv__GroupOperation_Request__are_equal(const robot_hardware__srv__GroupOperation_Request * lhs, const robot_hardware__srv__GroupOperation_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // groups
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->groups), &(rhs->groups)))
  {
    return false;
  }
  // operation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operation), &(rhs->operation)))
  {
    return false;
  }
  // resource
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->resource), &(rhs->resource)))
  {
    return false;
  }
  return true;
}

bool
robot_hardware__srv__GroupOperation_Request__copy(
  const robot_hardware__srv__GroupOperation_Request * input,
  robot_hardware__srv__GroupOperation_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // groups
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->groups), &(output->groups)))
  {
    return false;
  }
  // operation
  if (!rosidl_runtime_c__String__copy(
      &(input->operation), &(output->operation)))
  {
    return false;
  }
  // resource
  if (!rosidl_runtime_c__String__copy(
      &(input->resource), &(output->resource)))
  {
    return false;
  }
  return true;
}

robot_hardware__srv__GroupOperation_Request *
robot_hardware__srv__GroupOperation_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_hardware__srv__GroupOperation_Request * msg = (robot_hardware__srv__GroupOperation_Request *)allocator.allocate(sizeof(robot_hardware__srv__GroupOperation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_hardware__srv__GroupOperation_Request));
  bool success = robot_hardware__srv__GroupOperation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_hardware__srv__GroupOperation_Request__destroy(robot_hardware__srv__GroupOperation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_hardware__srv__GroupOperation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_hardware__srv__GroupOperation_Request__Sequence__init(robot_hardware__srv__GroupOperation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_hardware__srv__GroupOperation_Request * data = NULL;

  if (size) {
    data = (robot_hardware__srv__GroupOperation_Request *)allocator.zero_allocate(size, sizeof(robot_hardware__srv__GroupOperation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_hardware__srv__GroupOperation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_hardware__srv__GroupOperation_Request__fini(&data[i - 1]);
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
robot_hardware__srv__GroupOperation_Request__Sequence__fini(robot_hardware__srv__GroupOperation_Request__Sequence * array)
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
      robot_hardware__srv__GroupOperation_Request__fini(&array->data[i]);
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

robot_hardware__srv__GroupOperation_Request__Sequence *
robot_hardware__srv__GroupOperation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_hardware__srv__GroupOperation_Request__Sequence * array = (robot_hardware__srv__GroupOperation_Request__Sequence *)allocator.allocate(sizeof(robot_hardware__srv__GroupOperation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_hardware__srv__GroupOperation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_hardware__srv__GroupOperation_Request__Sequence__destroy(robot_hardware__srv__GroupOperation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_hardware__srv__GroupOperation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_hardware__srv__GroupOperation_Request__Sequence__are_equal(const robot_hardware__srv__GroupOperation_Request__Sequence * lhs, const robot_hardware__srv__GroupOperation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_hardware__srv__GroupOperation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_hardware__srv__GroupOperation_Request__Sequence__copy(
  const robot_hardware__srv__GroupOperation_Request__Sequence * input,
  robot_hardware__srv__GroupOperation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_hardware__srv__GroupOperation_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_hardware__srv__GroupOperation_Request * data =
      (robot_hardware__srv__GroupOperation_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_hardware__srv__GroupOperation_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_hardware__srv__GroupOperation_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_hardware__srv__GroupOperation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `operation_id`
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
robot_hardware__srv__GroupOperation_Response__init(robot_hardware__srv__GroupOperation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // operation_id
  if (!rosidl_runtime_c__String__init(&msg->operation_id)) {
    robot_hardware__srv__GroupOperation_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    robot_hardware__srv__GroupOperation_Response__fini(msg);
    return false;
  }
  return true;
}

void
robot_hardware__srv__GroupOperation_Response__fini(robot_hardware__srv__GroupOperation_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // operation_id
  rosidl_runtime_c__String__fini(&msg->operation_id);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
robot_hardware__srv__GroupOperation_Response__are_equal(const robot_hardware__srv__GroupOperation_Response * lhs, const robot_hardware__srv__GroupOperation_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // operation_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operation_id), &(rhs->operation_id)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
robot_hardware__srv__GroupOperation_Response__copy(
  const robot_hardware__srv__GroupOperation_Response * input,
  robot_hardware__srv__GroupOperation_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // operation_id
  if (!rosidl_runtime_c__String__copy(
      &(input->operation_id), &(output->operation_id)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

robot_hardware__srv__GroupOperation_Response *
robot_hardware__srv__GroupOperation_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_hardware__srv__GroupOperation_Response * msg = (robot_hardware__srv__GroupOperation_Response *)allocator.allocate(sizeof(robot_hardware__srv__GroupOperation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_hardware__srv__GroupOperation_Response));
  bool success = robot_hardware__srv__GroupOperation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_hardware__srv__GroupOperation_Response__destroy(robot_hardware__srv__GroupOperation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_hardware__srv__GroupOperation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_hardware__srv__GroupOperation_Response__Sequence__init(robot_hardware__srv__GroupOperation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_hardware__srv__GroupOperation_Response * data = NULL;

  if (size) {
    data = (robot_hardware__srv__GroupOperation_Response *)allocator.zero_allocate(size, sizeof(robot_hardware__srv__GroupOperation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_hardware__srv__GroupOperation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_hardware__srv__GroupOperation_Response__fini(&data[i - 1]);
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
robot_hardware__srv__GroupOperation_Response__Sequence__fini(robot_hardware__srv__GroupOperation_Response__Sequence * array)
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
      robot_hardware__srv__GroupOperation_Response__fini(&array->data[i]);
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

robot_hardware__srv__GroupOperation_Response__Sequence *
robot_hardware__srv__GroupOperation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_hardware__srv__GroupOperation_Response__Sequence * array = (robot_hardware__srv__GroupOperation_Response__Sequence *)allocator.allocate(sizeof(robot_hardware__srv__GroupOperation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_hardware__srv__GroupOperation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_hardware__srv__GroupOperation_Response__Sequence__destroy(robot_hardware__srv__GroupOperation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_hardware__srv__GroupOperation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_hardware__srv__GroupOperation_Response__Sequence__are_equal(const robot_hardware__srv__GroupOperation_Response__Sequence * lhs, const robot_hardware__srv__GroupOperation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_hardware__srv__GroupOperation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_hardware__srv__GroupOperation_Response__Sequence__copy(
  const robot_hardware__srv__GroupOperation_Response__Sequence * input,
  robot_hardware__srv__GroupOperation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_hardware__srv__GroupOperation_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_hardware__srv__GroupOperation_Response * data =
      (robot_hardware__srv__GroupOperation_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_hardware__srv__GroupOperation_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_hardware__srv__GroupOperation_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_hardware__srv__GroupOperation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
