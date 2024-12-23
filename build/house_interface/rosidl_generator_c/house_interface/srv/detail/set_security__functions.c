// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from house_interface:srv/SetSecurity.idl
// generated code does not contain a copyright notice
#include "house_interface/srv/detail/set_security__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `security_state`
#include "rosidl_runtime_c/string_functions.h"

bool
house_interface__srv__SetSecurity_Request__init(house_interface__srv__SetSecurity_Request * msg)
{
  if (!msg) {
    return false;
  }
  // security_state
  if (!rosidl_runtime_c__String__init(&msg->security_state)) {
    house_interface__srv__SetSecurity_Request__fini(msg);
    return false;
  }
  return true;
}

void
house_interface__srv__SetSecurity_Request__fini(house_interface__srv__SetSecurity_Request * msg)
{
  if (!msg) {
    return;
  }
  // security_state
  rosidl_runtime_c__String__fini(&msg->security_state);
}

bool
house_interface__srv__SetSecurity_Request__are_equal(const house_interface__srv__SetSecurity_Request * lhs, const house_interface__srv__SetSecurity_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // security_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->security_state), &(rhs->security_state)))
  {
    return false;
  }
  return true;
}

bool
house_interface__srv__SetSecurity_Request__copy(
  const house_interface__srv__SetSecurity_Request * input,
  house_interface__srv__SetSecurity_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // security_state
  if (!rosidl_runtime_c__String__copy(
      &(input->security_state), &(output->security_state)))
  {
    return false;
  }
  return true;
}

house_interface__srv__SetSecurity_Request *
house_interface__srv__SetSecurity_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__srv__SetSecurity_Request * msg = (house_interface__srv__SetSecurity_Request *)allocator.allocate(sizeof(house_interface__srv__SetSecurity_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(house_interface__srv__SetSecurity_Request));
  bool success = house_interface__srv__SetSecurity_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
house_interface__srv__SetSecurity_Request__destroy(house_interface__srv__SetSecurity_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    house_interface__srv__SetSecurity_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
house_interface__srv__SetSecurity_Request__Sequence__init(house_interface__srv__SetSecurity_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__srv__SetSecurity_Request * data = NULL;

  if (size) {
    data = (house_interface__srv__SetSecurity_Request *)allocator.zero_allocate(size, sizeof(house_interface__srv__SetSecurity_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = house_interface__srv__SetSecurity_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        house_interface__srv__SetSecurity_Request__fini(&data[i - 1]);
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
house_interface__srv__SetSecurity_Request__Sequence__fini(house_interface__srv__SetSecurity_Request__Sequence * array)
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
      house_interface__srv__SetSecurity_Request__fini(&array->data[i]);
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

house_interface__srv__SetSecurity_Request__Sequence *
house_interface__srv__SetSecurity_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__srv__SetSecurity_Request__Sequence * array = (house_interface__srv__SetSecurity_Request__Sequence *)allocator.allocate(sizeof(house_interface__srv__SetSecurity_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = house_interface__srv__SetSecurity_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
house_interface__srv__SetSecurity_Request__Sequence__destroy(house_interface__srv__SetSecurity_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    house_interface__srv__SetSecurity_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
house_interface__srv__SetSecurity_Request__Sequence__are_equal(const house_interface__srv__SetSecurity_Request__Sequence * lhs, const house_interface__srv__SetSecurity_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!house_interface__srv__SetSecurity_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
house_interface__srv__SetSecurity_Request__Sequence__copy(
  const house_interface__srv__SetSecurity_Request__Sequence * input,
  house_interface__srv__SetSecurity_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(house_interface__srv__SetSecurity_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    house_interface__srv__SetSecurity_Request * data =
      (house_interface__srv__SetSecurity_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!house_interface__srv__SetSecurity_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          house_interface__srv__SetSecurity_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!house_interface__srv__SetSecurity_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
house_interface__srv__SetSecurity_Response__init(house_interface__srv__SetSecurity_Response * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    house_interface__srv__SetSecurity_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
house_interface__srv__SetSecurity_Response__fini(house_interface__srv__SetSecurity_Response * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // success
}

bool
house_interface__srv__SetSecurity_Response__are_equal(const house_interface__srv__SetSecurity_Response * lhs, const house_interface__srv__SetSecurity_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
house_interface__srv__SetSecurity_Response__copy(
  const house_interface__srv__SetSecurity_Response * input,
  house_interface__srv__SetSecurity_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

house_interface__srv__SetSecurity_Response *
house_interface__srv__SetSecurity_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__srv__SetSecurity_Response * msg = (house_interface__srv__SetSecurity_Response *)allocator.allocate(sizeof(house_interface__srv__SetSecurity_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(house_interface__srv__SetSecurity_Response));
  bool success = house_interface__srv__SetSecurity_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
house_interface__srv__SetSecurity_Response__destroy(house_interface__srv__SetSecurity_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    house_interface__srv__SetSecurity_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
house_interface__srv__SetSecurity_Response__Sequence__init(house_interface__srv__SetSecurity_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__srv__SetSecurity_Response * data = NULL;

  if (size) {
    data = (house_interface__srv__SetSecurity_Response *)allocator.zero_allocate(size, sizeof(house_interface__srv__SetSecurity_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = house_interface__srv__SetSecurity_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        house_interface__srv__SetSecurity_Response__fini(&data[i - 1]);
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
house_interface__srv__SetSecurity_Response__Sequence__fini(house_interface__srv__SetSecurity_Response__Sequence * array)
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
      house_interface__srv__SetSecurity_Response__fini(&array->data[i]);
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

house_interface__srv__SetSecurity_Response__Sequence *
house_interface__srv__SetSecurity_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__srv__SetSecurity_Response__Sequence * array = (house_interface__srv__SetSecurity_Response__Sequence *)allocator.allocate(sizeof(house_interface__srv__SetSecurity_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = house_interface__srv__SetSecurity_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
house_interface__srv__SetSecurity_Response__Sequence__destroy(house_interface__srv__SetSecurity_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    house_interface__srv__SetSecurity_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
house_interface__srv__SetSecurity_Response__Sequence__are_equal(const house_interface__srv__SetSecurity_Response__Sequence * lhs, const house_interface__srv__SetSecurity_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!house_interface__srv__SetSecurity_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
house_interface__srv__SetSecurity_Response__Sequence__copy(
  const house_interface__srv__SetSecurity_Response__Sequence * input,
  house_interface__srv__SetSecurity_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(house_interface__srv__SetSecurity_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    house_interface__srv__SetSecurity_Response * data =
      (house_interface__srv__SetSecurity_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!house_interface__srv__SetSecurity_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          house_interface__srv__SetSecurity_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!house_interface__srv__SetSecurity_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "house_interface/srv/detail/set_security__functions.h"

bool
house_interface__srv__SetSecurity_Event__init(house_interface__srv__SetSecurity_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    house_interface__srv__SetSecurity_Event__fini(msg);
    return false;
  }
  // request
  if (!house_interface__srv__SetSecurity_Request__Sequence__init(&msg->request, 0)) {
    house_interface__srv__SetSecurity_Event__fini(msg);
    return false;
  }
  // response
  if (!house_interface__srv__SetSecurity_Response__Sequence__init(&msg->response, 0)) {
    house_interface__srv__SetSecurity_Event__fini(msg);
    return false;
  }
  return true;
}

void
house_interface__srv__SetSecurity_Event__fini(house_interface__srv__SetSecurity_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  house_interface__srv__SetSecurity_Request__Sequence__fini(&msg->request);
  // response
  house_interface__srv__SetSecurity_Response__Sequence__fini(&msg->response);
}

bool
house_interface__srv__SetSecurity_Event__are_equal(const house_interface__srv__SetSecurity_Event * lhs, const house_interface__srv__SetSecurity_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!house_interface__srv__SetSecurity_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!house_interface__srv__SetSecurity_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
house_interface__srv__SetSecurity_Event__copy(
  const house_interface__srv__SetSecurity_Event * input,
  house_interface__srv__SetSecurity_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!house_interface__srv__SetSecurity_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!house_interface__srv__SetSecurity_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

house_interface__srv__SetSecurity_Event *
house_interface__srv__SetSecurity_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__srv__SetSecurity_Event * msg = (house_interface__srv__SetSecurity_Event *)allocator.allocate(sizeof(house_interface__srv__SetSecurity_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(house_interface__srv__SetSecurity_Event));
  bool success = house_interface__srv__SetSecurity_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
house_interface__srv__SetSecurity_Event__destroy(house_interface__srv__SetSecurity_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    house_interface__srv__SetSecurity_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
house_interface__srv__SetSecurity_Event__Sequence__init(house_interface__srv__SetSecurity_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__srv__SetSecurity_Event * data = NULL;

  if (size) {
    data = (house_interface__srv__SetSecurity_Event *)allocator.zero_allocate(size, sizeof(house_interface__srv__SetSecurity_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = house_interface__srv__SetSecurity_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        house_interface__srv__SetSecurity_Event__fini(&data[i - 1]);
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
house_interface__srv__SetSecurity_Event__Sequence__fini(house_interface__srv__SetSecurity_Event__Sequence * array)
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
      house_interface__srv__SetSecurity_Event__fini(&array->data[i]);
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

house_interface__srv__SetSecurity_Event__Sequence *
house_interface__srv__SetSecurity_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__srv__SetSecurity_Event__Sequence * array = (house_interface__srv__SetSecurity_Event__Sequence *)allocator.allocate(sizeof(house_interface__srv__SetSecurity_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = house_interface__srv__SetSecurity_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
house_interface__srv__SetSecurity_Event__Sequence__destroy(house_interface__srv__SetSecurity_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    house_interface__srv__SetSecurity_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
house_interface__srv__SetSecurity_Event__Sequence__are_equal(const house_interface__srv__SetSecurity_Event__Sequence * lhs, const house_interface__srv__SetSecurity_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!house_interface__srv__SetSecurity_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
house_interface__srv__SetSecurity_Event__Sequence__copy(
  const house_interface__srv__SetSecurity_Event__Sequence * input,
  house_interface__srv__SetSecurity_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(house_interface__srv__SetSecurity_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    house_interface__srv__SetSecurity_Event * data =
      (house_interface__srv__SetSecurity_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!house_interface__srv__SetSecurity_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          house_interface__srv__SetSecurity_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!house_interface__srv__SetSecurity_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
