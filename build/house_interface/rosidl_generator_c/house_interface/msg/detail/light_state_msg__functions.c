// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from house_interface:msg/LightStateMsg.idl
// generated code does not contain a copyright notice
#include "house_interface/msg/detail/light_state_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `light_state_msg`
#include "rosidl_runtime_c/string_functions.h"

bool
house_interface__msg__LightStateMsg__init(house_interface__msg__LightStateMsg * msg)
{
  if (!msg) {
    return false;
  }
  // light_state_msg
  if (!rosidl_runtime_c__String__init(&msg->light_state_msg)) {
    house_interface__msg__LightStateMsg__fini(msg);
    return false;
  }
  return true;
}

void
house_interface__msg__LightStateMsg__fini(house_interface__msg__LightStateMsg * msg)
{
  if (!msg) {
    return;
  }
  // light_state_msg
  rosidl_runtime_c__String__fini(&msg->light_state_msg);
}

bool
house_interface__msg__LightStateMsg__are_equal(const house_interface__msg__LightStateMsg * lhs, const house_interface__msg__LightStateMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // light_state_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->light_state_msg), &(rhs->light_state_msg)))
  {
    return false;
  }
  return true;
}

bool
house_interface__msg__LightStateMsg__copy(
  const house_interface__msg__LightStateMsg * input,
  house_interface__msg__LightStateMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // light_state_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->light_state_msg), &(output->light_state_msg)))
  {
    return false;
  }
  return true;
}

house_interface__msg__LightStateMsg *
house_interface__msg__LightStateMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__msg__LightStateMsg * msg = (house_interface__msg__LightStateMsg *)allocator.allocate(sizeof(house_interface__msg__LightStateMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(house_interface__msg__LightStateMsg));
  bool success = house_interface__msg__LightStateMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
house_interface__msg__LightStateMsg__destroy(house_interface__msg__LightStateMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    house_interface__msg__LightStateMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
house_interface__msg__LightStateMsg__Sequence__init(house_interface__msg__LightStateMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__msg__LightStateMsg * data = NULL;

  if (size) {
    data = (house_interface__msg__LightStateMsg *)allocator.zero_allocate(size, sizeof(house_interface__msg__LightStateMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = house_interface__msg__LightStateMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        house_interface__msg__LightStateMsg__fini(&data[i - 1]);
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
house_interface__msg__LightStateMsg__Sequence__fini(house_interface__msg__LightStateMsg__Sequence * array)
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
      house_interface__msg__LightStateMsg__fini(&array->data[i]);
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

house_interface__msg__LightStateMsg__Sequence *
house_interface__msg__LightStateMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__msg__LightStateMsg__Sequence * array = (house_interface__msg__LightStateMsg__Sequence *)allocator.allocate(sizeof(house_interface__msg__LightStateMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = house_interface__msg__LightStateMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
house_interface__msg__LightStateMsg__Sequence__destroy(house_interface__msg__LightStateMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    house_interface__msg__LightStateMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
house_interface__msg__LightStateMsg__Sequence__are_equal(const house_interface__msg__LightStateMsg__Sequence * lhs, const house_interface__msg__LightStateMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!house_interface__msg__LightStateMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
house_interface__msg__LightStateMsg__Sequence__copy(
  const house_interface__msg__LightStateMsg__Sequence * input,
  house_interface__msg__LightStateMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(house_interface__msg__LightStateMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    house_interface__msg__LightStateMsg * data =
      (house_interface__msg__LightStateMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!house_interface__msg__LightStateMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          house_interface__msg__LightStateMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!house_interface__msg__LightStateMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
