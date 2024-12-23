// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from house_interface:srv/LightState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/srv/light_state.h"


#ifndef HOUSE_INTERFACE__SRV__DETAIL__LIGHT_STATE__STRUCT_H_
#define HOUSE_INTERFACE__SRV__DETAIL__LIGHT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'light_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LightState in the package house_interface.
typedef struct house_interface__srv__LightState_Request
{
  rosidl_runtime_c__String light_state;
} house_interface__srv__LightState_Request;

// Struct for a sequence of house_interface__srv__LightState_Request.
typedef struct house_interface__srv__LightState_Request__Sequence
{
  house_interface__srv__LightState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__srv__LightState_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LightState in the package house_interface.
typedef struct house_interface__srv__LightState_Response
{
  bool success;
  rosidl_runtime_c__String message;
} house_interface__srv__LightState_Response;

// Struct for a sequence of house_interface__srv__LightState_Response.
typedef struct house_interface__srv__LightState_Response__Sequence
{
  house_interface__srv__LightState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__srv__LightState_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  house_interface__srv__LightState_Event__request__MAX_SIZE = 1
};
// response
enum
{
  house_interface__srv__LightState_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LightState in the package house_interface.
typedef struct house_interface__srv__LightState_Event
{
  service_msgs__msg__ServiceEventInfo info;
  house_interface__srv__LightState_Request__Sequence request;
  house_interface__srv__LightState_Response__Sequence response;
} house_interface__srv__LightState_Event;

// Struct for a sequence of house_interface__srv__LightState_Event.
typedef struct house_interface__srv__LightState_Event__Sequence
{
  house_interface__srv__LightState_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} house_interface__srv__LightState_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOUSE_INTERFACE__SRV__DETAIL__LIGHT_STATE__STRUCT_H_
