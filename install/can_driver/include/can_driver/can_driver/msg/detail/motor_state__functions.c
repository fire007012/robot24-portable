// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from can_driver:msg/MotorState.idl
// generated code does not contain a copyright notice
#include "can_driver/msg/detail/motor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
can_driver__msg__MotorState__init(can_driver__msg__MotorState * msg)
{
  if (!msg) {
    return false;
  }
  // motor_id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    can_driver__msg__MotorState__fini(msg);
    return false;
  }
  // mode
  // enabled
  // fault
  // position
  // velocity
  // current
  // joint_position
  // joint_velocity
  // mode_valid
  // status_valid
  // position_valid
  // velocity_valid
  // current_valid
  // feedback_fresh
  return true;
}

void
can_driver__msg__MotorState__fini(can_driver__msg__MotorState * msg)
{
  if (!msg) {
    return;
  }
  // motor_id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // mode
  // enabled
  // fault
  // position
  // velocity
  // current
  // joint_position
  // joint_velocity
  // mode_valid
  // status_valid
  // position_valid
  // velocity_valid
  // current_valid
  // feedback_fresh
}

bool
can_driver__msg__MotorState__are_equal(const can_driver__msg__MotorState * lhs, const can_driver__msg__MotorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_id
  if (lhs->motor_id != rhs->motor_id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // fault
  if (lhs->fault != rhs->fault) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // joint_position
  if (lhs->joint_position != rhs->joint_position) {
    return false;
  }
  // joint_velocity
  if (lhs->joint_velocity != rhs->joint_velocity) {
    return false;
  }
  // mode_valid
  if (lhs->mode_valid != rhs->mode_valid) {
    return false;
  }
  // status_valid
  if (lhs->status_valid != rhs->status_valid) {
    return false;
  }
  // position_valid
  if (lhs->position_valid != rhs->position_valid) {
    return false;
  }
  // velocity_valid
  if (lhs->velocity_valid != rhs->velocity_valid) {
    return false;
  }
  // current_valid
  if (lhs->current_valid != rhs->current_valid) {
    return false;
  }
  // feedback_fresh
  if (lhs->feedback_fresh != rhs->feedback_fresh) {
    return false;
  }
  return true;
}

bool
can_driver__msg__MotorState__copy(
  const can_driver__msg__MotorState * input,
  can_driver__msg__MotorState * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_id
  output->motor_id = input->motor_id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // mode
  output->mode = input->mode;
  // enabled
  output->enabled = input->enabled;
  // fault
  output->fault = input->fault;
  // position
  output->position = input->position;
  // velocity
  output->velocity = input->velocity;
  // current
  output->current = input->current;
  // joint_position
  output->joint_position = input->joint_position;
  // joint_velocity
  output->joint_velocity = input->joint_velocity;
  // mode_valid
  output->mode_valid = input->mode_valid;
  // status_valid
  output->status_valid = input->status_valid;
  // position_valid
  output->position_valid = input->position_valid;
  // velocity_valid
  output->velocity_valid = input->velocity_valid;
  // current_valid
  output->current_valid = input->current_valid;
  // feedback_fresh
  output->feedback_fresh = input->feedback_fresh;
  return true;
}

can_driver__msg__MotorState *
can_driver__msg__MotorState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__msg__MotorState * msg = (can_driver__msg__MotorState *)allocator.allocate(sizeof(can_driver__msg__MotorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__msg__MotorState));
  bool success = can_driver__msg__MotorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__msg__MotorState__destroy(can_driver__msg__MotorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__msg__MotorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__msg__MotorState__Sequence__init(can_driver__msg__MotorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__msg__MotorState * data = NULL;

  if (size) {
    data = (can_driver__msg__MotorState *)allocator.zero_allocate(size, sizeof(can_driver__msg__MotorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__msg__MotorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__msg__MotorState__fini(&data[i - 1]);
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
can_driver__msg__MotorState__Sequence__fini(can_driver__msg__MotorState__Sequence * array)
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
      can_driver__msg__MotorState__fini(&array->data[i]);
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

can_driver__msg__MotorState__Sequence *
can_driver__msg__MotorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__msg__MotorState__Sequence * array = (can_driver__msg__MotorState__Sequence *)allocator.allocate(sizeof(can_driver__msg__MotorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__msg__MotorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__msg__MotorState__Sequence__destroy(can_driver__msg__MotorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__msg__MotorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__msg__MotorState__Sequence__are_equal(const can_driver__msg__MotorState__Sequence * lhs, const can_driver__msg__MotorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__msg__MotorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__msg__MotorState__Sequence__copy(
  const can_driver__msg__MotorState__Sequence * input,
  can_driver__msg__MotorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__msg__MotorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__msg__MotorState * data =
      (can_driver__msg__MotorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__msg__MotorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__msg__MotorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__msg__MotorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
