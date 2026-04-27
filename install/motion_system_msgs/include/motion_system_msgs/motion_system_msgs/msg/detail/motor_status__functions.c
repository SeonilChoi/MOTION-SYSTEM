// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motion_system_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice
#include "motion_system_msgs/msg/detail/motor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `number_of_target_interfaces`
// Member `controller_index`
// Member `controlword`
// Member `statusword`
// Member `errorcode`
// Member `position`
// Member `velocity`
// Member `torque`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `target_interface_id`
#include "std_msgs/msg/detail/int8_multi_array__functions.h"

bool
motion_system_msgs__msg__MotorStatus__init(motion_system_msgs__msg__MotorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // number_of_target_interfaces
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->number_of_target_interfaces, 0)) {
    motion_system_msgs__msg__MotorStatus__fini(msg);
    return false;
  }
  // target_interface_id
  if (!std_msgs__msg__Int8MultiArray__Sequence__init(&msg->target_interface_id, 0)) {
    motion_system_msgs__msg__MotorStatus__fini(msg);
    return false;
  }
  // controller_index
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->controller_index, 0)) {
    motion_system_msgs__msg__MotorStatus__fini(msg);
    return false;
  }
  // controlword
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->controlword, 0)) {
    motion_system_msgs__msg__MotorStatus__fini(msg);
    return false;
  }
  // statusword
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->statusword, 0)) {
    motion_system_msgs__msg__MotorStatus__fini(msg);
    return false;
  }
  // errorcode
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->errorcode, 0)) {
    motion_system_msgs__msg__MotorStatus__fini(msg);
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    motion_system_msgs__msg__MotorStatus__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity, 0)) {
    motion_system_msgs__msg__MotorStatus__fini(msg);
    return false;
  }
  // torque
  if (!rosidl_runtime_c__double__Sequence__init(&msg->torque, 0)) {
    motion_system_msgs__msg__MotorStatus__fini(msg);
    return false;
  }
  return true;
}

void
motion_system_msgs__msg__MotorStatus__fini(motion_system_msgs__msg__MotorStatus * msg)
{
  if (!msg) {
    return;
  }
  // number_of_target_interfaces
  rosidl_runtime_c__uint8__Sequence__fini(&msg->number_of_target_interfaces);
  // target_interface_id
  std_msgs__msg__Int8MultiArray__Sequence__fini(&msg->target_interface_id);
  // controller_index
  rosidl_runtime_c__uint8__Sequence__fini(&msg->controller_index);
  // controlword
  rosidl_runtime_c__uint16__Sequence__fini(&msg->controlword);
  // statusword
  rosidl_runtime_c__uint16__Sequence__fini(&msg->statusword);
  // errorcode
  rosidl_runtime_c__uint16__Sequence__fini(&msg->errorcode);
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
  // velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity);
  // torque
  rosidl_runtime_c__double__Sequence__fini(&msg->torque);
}

bool
motion_system_msgs__msg__MotorStatus__are_equal(const motion_system_msgs__msg__MotorStatus * lhs, const motion_system_msgs__msg__MotorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // number_of_target_interfaces
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->number_of_target_interfaces), &(rhs->number_of_target_interfaces)))
  {
    return false;
  }
  // target_interface_id
  if (!std_msgs__msg__Int8MultiArray__Sequence__are_equal(
      &(lhs->target_interface_id), &(rhs->target_interface_id)))
  {
    return false;
  }
  // controller_index
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->controller_index), &(rhs->controller_index)))
  {
    return false;
  }
  // controlword
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->controlword), &(rhs->controlword)))
  {
    return false;
  }
  // statusword
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->statusword), &(rhs->statusword)))
  {
    return false;
  }
  // errorcode
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->errorcode), &(rhs->errorcode)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // torque
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->torque), &(rhs->torque)))
  {
    return false;
  }
  return true;
}

bool
motion_system_msgs__msg__MotorStatus__copy(
  const motion_system_msgs__msg__MotorStatus * input,
  motion_system_msgs__msg__MotorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // number_of_target_interfaces
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->number_of_target_interfaces), &(output->number_of_target_interfaces)))
  {
    return false;
  }
  // target_interface_id
  if (!std_msgs__msg__Int8MultiArray__Sequence__copy(
      &(input->target_interface_id), &(output->target_interface_id)))
  {
    return false;
  }
  // controller_index
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->controller_index), &(output->controller_index)))
  {
    return false;
  }
  // controlword
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->controlword), &(output->controlword)))
  {
    return false;
  }
  // statusword
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->statusword), &(output->statusword)))
  {
    return false;
  }
  // errorcode
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->errorcode), &(output->errorcode)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // torque
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->torque), &(output->torque)))
  {
    return false;
  }
  return true;
}

motion_system_msgs__msg__MotorStatus *
motion_system_msgs__msg__MotorStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motion_system_msgs__msg__MotorStatus * msg = (motion_system_msgs__msg__MotorStatus *)allocator.allocate(sizeof(motion_system_msgs__msg__MotorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motion_system_msgs__msg__MotorStatus));
  bool success = motion_system_msgs__msg__MotorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motion_system_msgs__msg__MotorStatus__destroy(motion_system_msgs__msg__MotorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motion_system_msgs__msg__MotorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motion_system_msgs__msg__MotorStatus__Sequence__init(motion_system_msgs__msg__MotorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motion_system_msgs__msg__MotorStatus * data = NULL;

  if (size) {
    data = (motion_system_msgs__msg__MotorStatus *)allocator.zero_allocate(size, sizeof(motion_system_msgs__msg__MotorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motion_system_msgs__msg__MotorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motion_system_msgs__msg__MotorStatus__fini(&data[i - 1]);
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
motion_system_msgs__msg__MotorStatus__Sequence__fini(motion_system_msgs__msg__MotorStatus__Sequence * array)
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
      motion_system_msgs__msg__MotorStatus__fini(&array->data[i]);
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

motion_system_msgs__msg__MotorStatus__Sequence *
motion_system_msgs__msg__MotorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motion_system_msgs__msg__MotorStatus__Sequence * array = (motion_system_msgs__msg__MotorStatus__Sequence *)allocator.allocate(sizeof(motion_system_msgs__msg__MotorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motion_system_msgs__msg__MotorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motion_system_msgs__msg__MotorStatus__Sequence__destroy(motion_system_msgs__msg__MotorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motion_system_msgs__msg__MotorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motion_system_msgs__msg__MotorStatus__Sequence__are_equal(const motion_system_msgs__msg__MotorStatus__Sequence * lhs, const motion_system_msgs__msg__MotorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motion_system_msgs__msg__MotorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motion_system_msgs__msg__MotorStatus__Sequence__copy(
  const motion_system_msgs__msg__MotorStatus__Sequence * input,
  motion_system_msgs__msg__MotorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motion_system_msgs__msg__MotorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motion_system_msgs__msg__MotorStatus * data =
      (motion_system_msgs__msg__MotorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motion_system_msgs__msg__MotorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motion_system_msgs__msg__MotorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motion_system_msgs__msg__MotorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
