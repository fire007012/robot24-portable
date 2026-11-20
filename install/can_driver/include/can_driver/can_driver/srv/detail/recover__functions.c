// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from can_driver:srv/Recover.idl
// generated code does not contain a copyright notice
#include "can_driver/srv/detail/recover__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
can_driver__srv__Recover_Request__init(can_driver__srv__Recover_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motor_id
  return true;
}

void
can_driver__srv__Recover_Request__fini(can_driver__srv__Recover_Request * msg)
{
  if (!msg) {
    return;
  }
  // motor_id
}

bool
can_driver__srv__Recover_Request__are_equal(const can_driver__srv__Recover_Request * lhs, const can_driver__srv__Recover_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_id
  if (lhs->motor_id != rhs->motor_id) {
    return false;
  }
  return true;
}

bool
can_driver__srv__Recover_Request__copy(
  const can_driver__srv__Recover_Request * input,
  can_driver__srv__Recover_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_id
  output->motor_id = input->motor_id;
  return true;
}

can_driver__srv__Recover_Request *
can_driver__srv__Recover_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__srv__Recover_Request * msg = (can_driver__srv__Recover_Request *)allocator.allocate(sizeof(can_driver__srv__Recover_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__srv__Recover_Request));
  bool success = can_driver__srv__Recover_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__srv__Recover_Request__destroy(can_driver__srv__Recover_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__srv__Recover_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__srv__Recover_Request__Sequence__init(can_driver__srv__Recover_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__srv__Recover_Request * data = NULL;

  if (size) {
    data = (can_driver__srv__Recover_Request *)allocator.zero_allocate(size, sizeof(can_driver__srv__Recover_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__srv__Recover_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__srv__Recover_Request__fini(&data[i - 1]);
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
can_driver__srv__Recover_Request__Sequence__fini(can_driver__srv__Recover_Request__Sequence * array)
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
      can_driver__srv__Recover_Request__fini(&array->data[i]);
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

can_driver__srv__Recover_Request__Sequence *
can_driver__srv__Recover_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__srv__Recover_Request__Sequence * array = (can_driver__srv__Recover_Request__Sequence *)allocator.allocate(sizeof(can_driver__srv__Recover_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__srv__Recover_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__srv__Recover_Request__Sequence__destroy(can_driver__srv__Recover_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__srv__Recover_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__srv__Recover_Request__Sequence__are_equal(const can_driver__srv__Recover_Request__Sequence * lhs, const can_driver__srv__Recover_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__srv__Recover_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__srv__Recover_Request__Sequence__copy(
  const can_driver__srv__Recover_Request__Sequence * input,
  can_driver__srv__Recover_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__srv__Recover_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__srv__Recover_Request * data =
      (can_driver__srv__Recover_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__srv__Recover_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__srv__Recover_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__srv__Recover_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
can_driver__srv__Recover_Response__init(can_driver__srv__Recover_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    can_driver__srv__Recover_Response__fini(msg);
    return false;
  }
  return true;
}

void
can_driver__srv__Recover_Response__fini(can_driver__srv__Recover_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
can_driver__srv__Recover_Response__are_equal(const can_driver__srv__Recover_Response * lhs, const can_driver__srv__Recover_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
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
can_driver__srv__Recover_Response__copy(
  const can_driver__srv__Recover_Response * input,
  can_driver__srv__Recover_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

can_driver__srv__Recover_Response *
can_driver__srv__Recover_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__srv__Recover_Response * msg = (can_driver__srv__Recover_Response *)allocator.allocate(sizeof(can_driver__srv__Recover_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__srv__Recover_Response));
  bool success = can_driver__srv__Recover_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__srv__Recover_Response__destroy(can_driver__srv__Recover_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__srv__Recover_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__srv__Recover_Response__Sequence__init(can_driver__srv__Recover_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__srv__Recover_Response * data = NULL;

  if (size) {
    data = (can_driver__srv__Recover_Response *)allocator.zero_allocate(size, sizeof(can_driver__srv__Recover_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__srv__Recover_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__srv__Recover_Response__fini(&data[i - 1]);
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
can_driver__srv__Recover_Response__Sequence__fini(can_driver__srv__Recover_Response__Sequence * array)
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
      can_driver__srv__Recover_Response__fini(&array->data[i]);
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

can_driver__srv__Recover_Response__Sequence *
can_driver__srv__Recover_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__srv__Recover_Response__Sequence * array = (can_driver__srv__Recover_Response__Sequence *)allocator.allocate(sizeof(can_driver__srv__Recover_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__srv__Recover_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__srv__Recover_Response__Sequence__destroy(can_driver__srv__Recover_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__srv__Recover_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__srv__Recover_Response__Sequence__are_equal(const can_driver__srv__Recover_Response__Sequence * lhs, const can_driver__srv__Recover_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__srv__Recover_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__srv__Recover_Response__Sequence__copy(
  const can_driver__srv__Recover_Response__Sequence * input,
  can_driver__srv__Recover_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__srv__Recover_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__srv__Recover_Response * data =
      (can_driver__srv__Recover_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__srv__Recover_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__srv__Recover_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__srv__Recover_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
