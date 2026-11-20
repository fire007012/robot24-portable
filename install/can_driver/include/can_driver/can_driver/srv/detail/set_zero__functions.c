// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from can_driver:srv/SetZero.idl
// generated code does not contain a copyright notice
#include "can_driver/srv/detail/set_zero__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
can_driver__srv__SetZero_Request__init(can_driver__srv__SetZero_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motor_id
  // zero_offset_rad
  // use_current_position_as_zero
  // apply_to_motor
  return true;
}

void
can_driver__srv__SetZero_Request__fini(can_driver__srv__SetZero_Request * msg)
{
  if (!msg) {
    return;
  }
  // motor_id
  // zero_offset_rad
  // use_current_position_as_zero
  // apply_to_motor
}

bool
can_driver__srv__SetZero_Request__are_equal(const can_driver__srv__SetZero_Request * lhs, const can_driver__srv__SetZero_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_id
  if (lhs->motor_id != rhs->motor_id) {
    return false;
  }
  // zero_offset_rad
  if (lhs->zero_offset_rad != rhs->zero_offset_rad) {
    return false;
  }
  // use_current_position_as_zero
  if (lhs->use_current_position_as_zero != rhs->use_current_position_as_zero) {
    return false;
  }
  // apply_to_motor
  if (lhs->apply_to_motor != rhs->apply_to_motor) {
    return false;
  }
  return true;
}

bool
can_driver__srv__SetZero_Request__copy(
  const can_driver__srv__SetZero_Request * input,
  can_driver__srv__SetZero_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_id
  output->motor_id = input->motor_id;
  // zero_offset_rad
  output->zero_offset_rad = input->zero_offset_rad;
  // use_current_position_as_zero
  output->use_current_position_as_zero = input->use_current_position_as_zero;
  // apply_to_motor
  output->apply_to_motor = input->apply_to_motor;
  return true;
}

can_driver__srv__SetZero_Request *
can_driver__srv__SetZero_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__srv__SetZero_Request * msg = (can_driver__srv__SetZero_Request *)allocator.allocate(sizeof(can_driver__srv__SetZero_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__srv__SetZero_Request));
  bool success = can_driver__srv__SetZero_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__srv__SetZero_Request__destroy(can_driver__srv__SetZero_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__srv__SetZero_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__srv__SetZero_Request__Sequence__init(can_driver__srv__SetZero_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__srv__SetZero_Request * data = NULL;

  if (size) {
    data = (can_driver__srv__SetZero_Request *)allocator.zero_allocate(size, sizeof(can_driver__srv__SetZero_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__srv__SetZero_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__srv__SetZero_Request__fini(&data[i - 1]);
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
can_driver__srv__SetZero_Request__Sequence__fini(can_driver__srv__SetZero_Request__Sequence * array)
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
      can_driver__srv__SetZero_Request__fini(&array->data[i]);
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

can_driver__srv__SetZero_Request__Sequence *
can_driver__srv__SetZero_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__srv__SetZero_Request__Sequence * array = (can_driver__srv__SetZero_Request__Sequence *)allocator.allocate(sizeof(can_driver__srv__SetZero_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__srv__SetZero_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__srv__SetZero_Request__Sequence__destroy(can_driver__srv__SetZero_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__srv__SetZero_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__srv__SetZero_Request__Sequence__are_equal(const can_driver__srv__SetZero_Request__Sequence * lhs, const can_driver__srv__SetZero_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__srv__SetZero_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__srv__SetZero_Request__Sequence__copy(
  const can_driver__srv__SetZero_Request__Sequence * input,
  can_driver__srv__SetZero_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__srv__SetZero_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__srv__SetZero_Request * data =
      (can_driver__srv__SetZero_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__srv__SetZero_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__srv__SetZero_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__srv__SetZero_Request__copy(
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
can_driver__srv__SetZero_Response__init(can_driver__srv__SetZero_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    can_driver__srv__SetZero_Response__fini(msg);
    return false;
  }
  // previous_zero_offset_rad
  // applied_zero_offset_rad
  // current_position_rad
  return true;
}

void
can_driver__srv__SetZero_Response__fini(can_driver__srv__SetZero_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // previous_zero_offset_rad
  // applied_zero_offset_rad
  // current_position_rad
}

bool
can_driver__srv__SetZero_Response__are_equal(const can_driver__srv__SetZero_Response * lhs, const can_driver__srv__SetZero_Response * rhs)
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
  // previous_zero_offset_rad
  if (lhs->previous_zero_offset_rad != rhs->previous_zero_offset_rad) {
    return false;
  }
  // applied_zero_offset_rad
  if (lhs->applied_zero_offset_rad != rhs->applied_zero_offset_rad) {
    return false;
  }
  // current_position_rad
  if (lhs->current_position_rad != rhs->current_position_rad) {
    return false;
  }
  return true;
}

bool
can_driver__srv__SetZero_Response__copy(
  const can_driver__srv__SetZero_Response * input,
  can_driver__srv__SetZero_Response * output)
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
  // previous_zero_offset_rad
  output->previous_zero_offset_rad = input->previous_zero_offset_rad;
  // applied_zero_offset_rad
  output->applied_zero_offset_rad = input->applied_zero_offset_rad;
  // current_position_rad
  output->current_position_rad = input->current_position_rad;
  return true;
}

can_driver__srv__SetZero_Response *
can_driver__srv__SetZero_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__srv__SetZero_Response * msg = (can_driver__srv__SetZero_Response *)allocator.allocate(sizeof(can_driver__srv__SetZero_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__srv__SetZero_Response));
  bool success = can_driver__srv__SetZero_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__srv__SetZero_Response__destroy(can_driver__srv__SetZero_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__srv__SetZero_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__srv__SetZero_Response__Sequence__init(can_driver__srv__SetZero_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__srv__SetZero_Response * data = NULL;

  if (size) {
    data = (can_driver__srv__SetZero_Response *)allocator.zero_allocate(size, sizeof(can_driver__srv__SetZero_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__srv__SetZero_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__srv__SetZero_Response__fini(&data[i - 1]);
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
can_driver__srv__SetZero_Response__Sequence__fini(can_driver__srv__SetZero_Response__Sequence * array)
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
      can_driver__srv__SetZero_Response__fini(&array->data[i]);
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

can_driver__srv__SetZero_Response__Sequence *
can_driver__srv__SetZero_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__srv__SetZero_Response__Sequence * array = (can_driver__srv__SetZero_Response__Sequence *)allocator.allocate(sizeof(can_driver__srv__SetZero_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__srv__SetZero_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__srv__SetZero_Response__Sequence__destroy(can_driver__srv__SetZero_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__srv__SetZero_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__srv__SetZero_Response__Sequence__are_equal(const can_driver__srv__SetZero_Response__Sequence * lhs, const can_driver__srv__SetZero_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__srv__SetZero_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__srv__SetZero_Response__Sequence__copy(
  const can_driver__srv__SetZero_Response__Sequence * input,
  can_driver__srv__SetZero_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__srv__SetZero_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__srv__SetZero_Response * data =
      (can_driver__srv__SetZero_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__srv__SetZero_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__srv__SetZero_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__srv__SetZero_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
