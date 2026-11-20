// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from can_driver:action/MoveMotor.idl
// generated code does not contain a copyright notice
#include "can_driver/action/detail/move_motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
can_driver__action__MoveMotor_Goal__init(can_driver__action__MoveMotor_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // motor_id
  // target_position
  // target_velocity
  // max_duration
  return true;
}

void
can_driver__action__MoveMotor_Goal__fini(can_driver__action__MoveMotor_Goal * msg)
{
  if (!msg) {
    return;
  }
  // motor_id
  // target_position
  // target_velocity
  // max_duration
}

bool
can_driver__action__MoveMotor_Goal__are_equal(const can_driver__action__MoveMotor_Goal * lhs, const can_driver__action__MoveMotor_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_id
  if (lhs->motor_id != rhs->motor_id) {
    return false;
  }
  // target_position
  if (lhs->target_position != rhs->target_position) {
    return false;
  }
  // target_velocity
  if (lhs->target_velocity != rhs->target_velocity) {
    return false;
  }
  // max_duration
  if (lhs->max_duration != rhs->max_duration) {
    return false;
  }
  return true;
}

bool
can_driver__action__MoveMotor_Goal__copy(
  const can_driver__action__MoveMotor_Goal * input,
  can_driver__action__MoveMotor_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_id
  output->motor_id = input->motor_id;
  // target_position
  output->target_position = input->target_position;
  // target_velocity
  output->target_velocity = input->target_velocity;
  // max_duration
  output->max_duration = input->max_duration;
  return true;
}

can_driver__action__MoveMotor_Goal *
can_driver__action__MoveMotor_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_Goal * msg = (can_driver__action__MoveMotor_Goal *)allocator.allocate(sizeof(can_driver__action__MoveMotor_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__action__MoveMotor_Goal));
  bool success = can_driver__action__MoveMotor_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__action__MoveMotor_Goal__destroy(can_driver__action__MoveMotor_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__action__MoveMotor_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__action__MoveMotor_Goal__Sequence__init(can_driver__action__MoveMotor_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_Goal * data = NULL;

  if (size) {
    data = (can_driver__action__MoveMotor_Goal *)allocator.zero_allocate(size, sizeof(can_driver__action__MoveMotor_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__action__MoveMotor_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__action__MoveMotor_Goal__fini(&data[i - 1]);
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
can_driver__action__MoveMotor_Goal__Sequence__fini(can_driver__action__MoveMotor_Goal__Sequence * array)
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
      can_driver__action__MoveMotor_Goal__fini(&array->data[i]);
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

can_driver__action__MoveMotor_Goal__Sequence *
can_driver__action__MoveMotor_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_Goal__Sequence * array = (can_driver__action__MoveMotor_Goal__Sequence *)allocator.allocate(sizeof(can_driver__action__MoveMotor_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__action__MoveMotor_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__action__MoveMotor_Goal__Sequence__destroy(can_driver__action__MoveMotor_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__action__MoveMotor_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__action__MoveMotor_Goal__Sequence__are_equal(const can_driver__action__MoveMotor_Goal__Sequence * lhs, const can_driver__action__MoveMotor_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__action__MoveMotor_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__action__MoveMotor_Goal__Sequence__copy(
  const can_driver__action__MoveMotor_Goal__Sequence * input,
  can_driver__action__MoveMotor_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__action__MoveMotor_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__action__MoveMotor_Goal * data =
      (can_driver__action__MoveMotor_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__action__MoveMotor_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__action__MoveMotor_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__action__MoveMotor_Goal__copy(
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
can_driver__action__MoveMotor_Result__init(can_driver__action__MoveMotor_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    can_driver__action__MoveMotor_Result__fini(msg);
    return false;
  }
  return true;
}

void
can_driver__action__MoveMotor_Result__fini(can_driver__action__MoveMotor_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
can_driver__action__MoveMotor_Result__are_equal(const can_driver__action__MoveMotor_Result * lhs, const can_driver__action__MoveMotor_Result * rhs)
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
can_driver__action__MoveMotor_Result__copy(
  const can_driver__action__MoveMotor_Result * input,
  can_driver__action__MoveMotor_Result * output)
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

can_driver__action__MoveMotor_Result *
can_driver__action__MoveMotor_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_Result * msg = (can_driver__action__MoveMotor_Result *)allocator.allocate(sizeof(can_driver__action__MoveMotor_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__action__MoveMotor_Result));
  bool success = can_driver__action__MoveMotor_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__action__MoveMotor_Result__destroy(can_driver__action__MoveMotor_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__action__MoveMotor_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__action__MoveMotor_Result__Sequence__init(can_driver__action__MoveMotor_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_Result * data = NULL;

  if (size) {
    data = (can_driver__action__MoveMotor_Result *)allocator.zero_allocate(size, sizeof(can_driver__action__MoveMotor_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__action__MoveMotor_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__action__MoveMotor_Result__fini(&data[i - 1]);
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
can_driver__action__MoveMotor_Result__Sequence__fini(can_driver__action__MoveMotor_Result__Sequence * array)
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
      can_driver__action__MoveMotor_Result__fini(&array->data[i]);
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

can_driver__action__MoveMotor_Result__Sequence *
can_driver__action__MoveMotor_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_Result__Sequence * array = (can_driver__action__MoveMotor_Result__Sequence *)allocator.allocate(sizeof(can_driver__action__MoveMotor_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__action__MoveMotor_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__action__MoveMotor_Result__Sequence__destroy(can_driver__action__MoveMotor_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__action__MoveMotor_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__action__MoveMotor_Result__Sequence__are_equal(const can_driver__action__MoveMotor_Result__Sequence * lhs, const can_driver__action__MoveMotor_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__action__MoveMotor_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__action__MoveMotor_Result__Sequence__copy(
  const can_driver__action__MoveMotor_Result__Sequence * input,
  can_driver__action__MoveMotor_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__action__MoveMotor_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__action__MoveMotor_Result * data =
      (can_driver__action__MoveMotor_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__action__MoveMotor_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__action__MoveMotor_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__action__MoveMotor_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
can_driver__action__MoveMotor_Feedback__init(can_driver__action__MoveMotor_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_position
  // current_velocity
  // elapsed_time
  return true;
}

void
can_driver__action__MoveMotor_Feedback__fini(can_driver__action__MoveMotor_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_position
  // current_velocity
  // elapsed_time
}

bool
can_driver__action__MoveMotor_Feedback__are_equal(const can_driver__action__MoveMotor_Feedback * lhs, const can_driver__action__MoveMotor_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_position
  if (lhs->current_position != rhs->current_position) {
    return false;
  }
  // current_velocity
  if (lhs->current_velocity != rhs->current_velocity) {
    return false;
  }
  // elapsed_time
  if (lhs->elapsed_time != rhs->elapsed_time) {
    return false;
  }
  return true;
}

bool
can_driver__action__MoveMotor_Feedback__copy(
  const can_driver__action__MoveMotor_Feedback * input,
  can_driver__action__MoveMotor_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_position
  output->current_position = input->current_position;
  // current_velocity
  output->current_velocity = input->current_velocity;
  // elapsed_time
  output->elapsed_time = input->elapsed_time;
  return true;
}

can_driver__action__MoveMotor_Feedback *
can_driver__action__MoveMotor_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_Feedback * msg = (can_driver__action__MoveMotor_Feedback *)allocator.allocate(sizeof(can_driver__action__MoveMotor_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__action__MoveMotor_Feedback));
  bool success = can_driver__action__MoveMotor_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__action__MoveMotor_Feedback__destroy(can_driver__action__MoveMotor_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__action__MoveMotor_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__action__MoveMotor_Feedback__Sequence__init(can_driver__action__MoveMotor_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_Feedback * data = NULL;

  if (size) {
    data = (can_driver__action__MoveMotor_Feedback *)allocator.zero_allocate(size, sizeof(can_driver__action__MoveMotor_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__action__MoveMotor_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__action__MoveMotor_Feedback__fini(&data[i - 1]);
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
can_driver__action__MoveMotor_Feedback__Sequence__fini(can_driver__action__MoveMotor_Feedback__Sequence * array)
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
      can_driver__action__MoveMotor_Feedback__fini(&array->data[i]);
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

can_driver__action__MoveMotor_Feedback__Sequence *
can_driver__action__MoveMotor_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_Feedback__Sequence * array = (can_driver__action__MoveMotor_Feedback__Sequence *)allocator.allocate(sizeof(can_driver__action__MoveMotor_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__action__MoveMotor_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__action__MoveMotor_Feedback__Sequence__destroy(can_driver__action__MoveMotor_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__action__MoveMotor_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__action__MoveMotor_Feedback__Sequence__are_equal(const can_driver__action__MoveMotor_Feedback__Sequence * lhs, const can_driver__action__MoveMotor_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__action__MoveMotor_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__action__MoveMotor_Feedback__Sequence__copy(
  const can_driver__action__MoveMotor_Feedback__Sequence * input,
  can_driver__action__MoveMotor_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__action__MoveMotor_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__action__MoveMotor_Feedback * data =
      (can_driver__action__MoveMotor_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__action__MoveMotor_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__action__MoveMotor_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__action__MoveMotor_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "can_driver/action/detail/move_motor__functions.h"

bool
can_driver__action__MoveMotor_SendGoal_Request__init(can_driver__action__MoveMotor_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    can_driver__action__MoveMotor_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!can_driver__action__MoveMotor_Goal__init(&msg->goal)) {
    can_driver__action__MoveMotor_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
can_driver__action__MoveMotor_SendGoal_Request__fini(can_driver__action__MoveMotor_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  can_driver__action__MoveMotor_Goal__fini(&msg->goal);
}

bool
can_driver__action__MoveMotor_SendGoal_Request__are_equal(const can_driver__action__MoveMotor_SendGoal_Request * lhs, const can_driver__action__MoveMotor_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!can_driver__action__MoveMotor_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
can_driver__action__MoveMotor_SendGoal_Request__copy(
  const can_driver__action__MoveMotor_SendGoal_Request * input,
  can_driver__action__MoveMotor_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!can_driver__action__MoveMotor_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

can_driver__action__MoveMotor_SendGoal_Request *
can_driver__action__MoveMotor_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_SendGoal_Request * msg = (can_driver__action__MoveMotor_SendGoal_Request *)allocator.allocate(sizeof(can_driver__action__MoveMotor_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__action__MoveMotor_SendGoal_Request));
  bool success = can_driver__action__MoveMotor_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__action__MoveMotor_SendGoal_Request__destroy(can_driver__action__MoveMotor_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__action__MoveMotor_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__action__MoveMotor_SendGoal_Request__Sequence__init(can_driver__action__MoveMotor_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_SendGoal_Request * data = NULL;

  if (size) {
    data = (can_driver__action__MoveMotor_SendGoal_Request *)allocator.zero_allocate(size, sizeof(can_driver__action__MoveMotor_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__action__MoveMotor_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__action__MoveMotor_SendGoal_Request__fini(&data[i - 1]);
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
can_driver__action__MoveMotor_SendGoal_Request__Sequence__fini(can_driver__action__MoveMotor_SendGoal_Request__Sequence * array)
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
      can_driver__action__MoveMotor_SendGoal_Request__fini(&array->data[i]);
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

can_driver__action__MoveMotor_SendGoal_Request__Sequence *
can_driver__action__MoveMotor_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_SendGoal_Request__Sequence * array = (can_driver__action__MoveMotor_SendGoal_Request__Sequence *)allocator.allocate(sizeof(can_driver__action__MoveMotor_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__action__MoveMotor_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__action__MoveMotor_SendGoal_Request__Sequence__destroy(can_driver__action__MoveMotor_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__action__MoveMotor_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__action__MoveMotor_SendGoal_Request__Sequence__are_equal(const can_driver__action__MoveMotor_SendGoal_Request__Sequence * lhs, const can_driver__action__MoveMotor_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__action__MoveMotor_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__action__MoveMotor_SendGoal_Request__Sequence__copy(
  const can_driver__action__MoveMotor_SendGoal_Request__Sequence * input,
  can_driver__action__MoveMotor_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__action__MoveMotor_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__action__MoveMotor_SendGoal_Request * data =
      (can_driver__action__MoveMotor_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__action__MoveMotor_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__action__MoveMotor_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__action__MoveMotor_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
can_driver__action__MoveMotor_SendGoal_Response__init(can_driver__action__MoveMotor_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    can_driver__action__MoveMotor_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
can_driver__action__MoveMotor_SendGoal_Response__fini(can_driver__action__MoveMotor_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
can_driver__action__MoveMotor_SendGoal_Response__are_equal(const can_driver__action__MoveMotor_SendGoal_Response * lhs, const can_driver__action__MoveMotor_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
can_driver__action__MoveMotor_SendGoal_Response__copy(
  const can_driver__action__MoveMotor_SendGoal_Response * input,
  can_driver__action__MoveMotor_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

can_driver__action__MoveMotor_SendGoal_Response *
can_driver__action__MoveMotor_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_SendGoal_Response * msg = (can_driver__action__MoveMotor_SendGoal_Response *)allocator.allocate(sizeof(can_driver__action__MoveMotor_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__action__MoveMotor_SendGoal_Response));
  bool success = can_driver__action__MoveMotor_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__action__MoveMotor_SendGoal_Response__destroy(can_driver__action__MoveMotor_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__action__MoveMotor_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__action__MoveMotor_SendGoal_Response__Sequence__init(can_driver__action__MoveMotor_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_SendGoal_Response * data = NULL;

  if (size) {
    data = (can_driver__action__MoveMotor_SendGoal_Response *)allocator.zero_allocate(size, sizeof(can_driver__action__MoveMotor_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__action__MoveMotor_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__action__MoveMotor_SendGoal_Response__fini(&data[i - 1]);
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
can_driver__action__MoveMotor_SendGoal_Response__Sequence__fini(can_driver__action__MoveMotor_SendGoal_Response__Sequence * array)
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
      can_driver__action__MoveMotor_SendGoal_Response__fini(&array->data[i]);
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

can_driver__action__MoveMotor_SendGoal_Response__Sequence *
can_driver__action__MoveMotor_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_SendGoal_Response__Sequence * array = (can_driver__action__MoveMotor_SendGoal_Response__Sequence *)allocator.allocate(sizeof(can_driver__action__MoveMotor_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__action__MoveMotor_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__action__MoveMotor_SendGoal_Response__Sequence__destroy(can_driver__action__MoveMotor_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__action__MoveMotor_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__action__MoveMotor_SendGoal_Response__Sequence__are_equal(const can_driver__action__MoveMotor_SendGoal_Response__Sequence * lhs, const can_driver__action__MoveMotor_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__action__MoveMotor_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__action__MoveMotor_SendGoal_Response__Sequence__copy(
  const can_driver__action__MoveMotor_SendGoal_Response__Sequence * input,
  can_driver__action__MoveMotor_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__action__MoveMotor_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__action__MoveMotor_SendGoal_Response * data =
      (can_driver__action__MoveMotor_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__action__MoveMotor_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__action__MoveMotor_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__action__MoveMotor_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
can_driver__action__MoveMotor_GetResult_Request__init(can_driver__action__MoveMotor_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    can_driver__action__MoveMotor_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
can_driver__action__MoveMotor_GetResult_Request__fini(can_driver__action__MoveMotor_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
can_driver__action__MoveMotor_GetResult_Request__are_equal(const can_driver__action__MoveMotor_GetResult_Request * lhs, const can_driver__action__MoveMotor_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
can_driver__action__MoveMotor_GetResult_Request__copy(
  const can_driver__action__MoveMotor_GetResult_Request * input,
  can_driver__action__MoveMotor_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

can_driver__action__MoveMotor_GetResult_Request *
can_driver__action__MoveMotor_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_GetResult_Request * msg = (can_driver__action__MoveMotor_GetResult_Request *)allocator.allocate(sizeof(can_driver__action__MoveMotor_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__action__MoveMotor_GetResult_Request));
  bool success = can_driver__action__MoveMotor_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__action__MoveMotor_GetResult_Request__destroy(can_driver__action__MoveMotor_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__action__MoveMotor_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__action__MoveMotor_GetResult_Request__Sequence__init(can_driver__action__MoveMotor_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_GetResult_Request * data = NULL;

  if (size) {
    data = (can_driver__action__MoveMotor_GetResult_Request *)allocator.zero_allocate(size, sizeof(can_driver__action__MoveMotor_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__action__MoveMotor_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__action__MoveMotor_GetResult_Request__fini(&data[i - 1]);
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
can_driver__action__MoveMotor_GetResult_Request__Sequence__fini(can_driver__action__MoveMotor_GetResult_Request__Sequence * array)
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
      can_driver__action__MoveMotor_GetResult_Request__fini(&array->data[i]);
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

can_driver__action__MoveMotor_GetResult_Request__Sequence *
can_driver__action__MoveMotor_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_GetResult_Request__Sequence * array = (can_driver__action__MoveMotor_GetResult_Request__Sequence *)allocator.allocate(sizeof(can_driver__action__MoveMotor_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__action__MoveMotor_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__action__MoveMotor_GetResult_Request__Sequence__destroy(can_driver__action__MoveMotor_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__action__MoveMotor_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__action__MoveMotor_GetResult_Request__Sequence__are_equal(const can_driver__action__MoveMotor_GetResult_Request__Sequence * lhs, const can_driver__action__MoveMotor_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__action__MoveMotor_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__action__MoveMotor_GetResult_Request__Sequence__copy(
  const can_driver__action__MoveMotor_GetResult_Request__Sequence * input,
  can_driver__action__MoveMotor_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__action__MoveMotor_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__action__MoveMotor_GetResult_Request * data =
      (can_driver__action__MoveMotor_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__action__MoveMotor_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__action__MoveMotor_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__action__MoveMotor_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "can_driver/action/detail/move_motor__functions.h"

bool
can_driver__action__MoveMotor_GetResult_Response__init(can_driver__action__MoveMotor_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!can_driver__action__MoveMotor_Result__init(&msg->result)) {
    can_driver__action__MoveMotor_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
can_driver__action__MoveMotor_GetResult_Response__fini(can_driver__action__MoveMotor_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  can_driver__action__MoveMotor_Result__fini(&msg->result);
}

bool
can_driver__action__MoveMotor_GetResult_Response__are_equal(const can_driver__action__MoveMotor_GetResult_Response * lhs, const can_driver__action__MoveMotor_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!can_driver__action__MoveMotor_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
can_driver__action__MoveMotor_GetResult_Response__copy(
  const can_driver__action__MoveMotor_GetResult_Response * input,
  can_driver__action__MoveMotor_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!can_driver__action__MoveMotor_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

can_driver__action__MoveMotor_GetResult_Response *
can_driver__action__MoveMotor_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_GetResult_Response * msg = (can_driver__action__MoveMotor_GetResult_Response *)allocator.allocate(sizeof(can_driver__action__MoveMotor_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__action__MoveMotor_GetResult_Response));
  bool success = can_driver__action__MoveMotor_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__action__MoveMotor_GetResult_Response__destroy(can_driver__action__MoveMotor_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__action__MoveMotor_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__action__MoveMotor_GetResult_Response__Sequence__init(can_driver__action__MoveMotor_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_GetResult_Response * data = NULL;

  if (size) {
    data = (can_driver__action__MoveMotor_GetResult_Response *)allocator.zero_allocate(size, sizeof(can_driver__action__MoveMotor_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__action__MoveMotor_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__action__MoveMotor_GetResult_Response__fini(&data[i - 1]);
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
can_driver__action__MoveMotor_GetResult_Response__Sequence__fini(can_driver__action__MoveMotor_GetResult_Response__Sequence * array)
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
      can_driver__action__MoveMotor_GetResult_Response__fini(&array->data[i]);
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

can_driver__action__MoveMotor_GetResult_Response__Sequence *
can_driver__action__MoveMotor_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_GetResult_Response__Sequence * array = (can_driver__action__MoveMotor_GetResult_Response__Sequence *)allocator.allocate(sizeof(can_driver__action__MoveMotor_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__action__MoveMotor_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__action__MoveMotor_GetResult_Response__Sequence__destroy(can_driver__action__MoveMotor_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__action__MoveMotor_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__action__MoveMotor_GetResult_Response__Sequence__are_equal(const can_driver__action__MoveMotor_GetResult_Response__Sequence * lhs, const can_driver__action__MoveMotor_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__action__MoveMotor_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__action__MoveMotor_GetResult_Response__Sequence__copy(
  const can_driver__action__MoveMotor_GetResult_Response__Sequence * input,
  can_driver__action__MoveMotor_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__action__MoveMotor_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__action__MoveMotor_GetResult_Response * data =
      (can_driver__action__MoveMotor_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__action__MoveMotor_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__action__MoveMotor_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__action__MoveMotor_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "can_driver/action/detail/move_motor__functions.h"

bool
can_driver__action__MoveMotor_FeedbackMessage__init(can_driver__action__MoveMotor_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    can_driver__action__MoveMotor_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!can_driver__action__MoveMotor_Feedback__init(&msg->feedback)) {
    can_driver__action__MoveMotor_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
can_driver__action__MoveMotor_FeedbackMessage__fini(can_driver__action__MoveMotor_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  can_driver__action__MoveMotor_Feedback__fini(&msg->feedback);
}

bool
can_driver__action__MoveMotor_FeedbackMessage__are_equal(const can_driver__action__MoveMotor_FeedbackMessage * lhs, const can_driver__action__MoveMotor_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!can_driver__action__MoveMotor_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
can_driver__action__MoveMotor_FeedbackMessage__copy(
  const can_driver__action__MoveMotor_FeedbackMessage * input,
  can_driver__action__MoveMotor_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!can_driver__action__MoveMotor_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

can_driver__action__MoveMotor_FeedbackMessage *
can_driver__action__MoveMotor_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_FeedbackMessage * msg = (can_driver__action__MoveMotor_FeedbackMessage *)allocator.allocate(sizeof(can_driver__action__MoveMotor_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_driver__action__MoveMotor_FeedbackMessage));
  bool success = can_driver__action__MoveMotor_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_driver__action__MoveMotor_FeedbackMessage__destroy(can_driver__action__MoveMotor_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_driver__action__MoveMotor_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_driver__action__MoveMotor_FeedbackMessage__Sequence__init(can_driver__action__MoveMotor_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_FeedbackMessage * data = NULL;

  if (size) {
    data = (can_driver__action__MoveMotor_FeedbackMessage *)allocator.zero_allocate(size, sizeof(can_driver__action__MoveMotor_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_driver__action__MoveMotor_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_driver__action__MoveMotor_FeedbackMessage__fini(&data[i - 1]);
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
can_driver__action__MoveMotor_FeedbackMessage__Sequence__fini(can_driver__action__MoveMotor_FeedbackMessage__Sequence * array)
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
      can_driver__action__MoveMotor_FeedbackMessage__fini(&array->data[i]);
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

can_driver__action__MoveMotor_FeedbackMessage__Sequence *
can_driver__action__MoveMotor_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_driver__action__MoveMotor_FeedbackMessage__Sequence * array = (can_driver__action__MoveMotor_FeedbackMessage__Sequence *)allocator.allocate(sizeof(can_driver__action__MoveMotor_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_driver__action__MoveMotor_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_driver__action__MoveMotor_FeedbackMessage__Sequence__destroy(can_driver__action__MoveMotor_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_driver__action__MoveMotor_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_driver__action__MoveMotor_FeedbackMessage__Sequence__are_equal(const can_driver__action__MoveMotor_FeedbackMessage__Sequence * lhs, const can_driver__action__MoveMotor_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_driver__action__MoveMotor_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_driver__action__MoveMotor_FeedbackMessage__Sequence__copy(
  const can_driver__action__MoveMotor_FeedbackMessage__Sequence * input,
  can_driver__action__MoveMotor_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_driver__action__MoveMotor_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    can_driver__action__MoveMotor_FeedbackMessage * data =
      (can_driver__action__MoveMotor_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_driver__action__MoveMotor_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          can_driver__action__MoveMotor_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!can_driver__action__MoveMotor_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
