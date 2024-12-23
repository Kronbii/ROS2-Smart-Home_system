// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from house_interface:srv/SetSecurity.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "house_interface/srv/detail/set_security__struct.h"
#include "house_interface/srv/detail/set_security__type_support.h"
#include "house_interface/srv/detail/set_security__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetSecurity_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetSecurity_Request_type_support_ids_t;

static const _SetSecurity_Request_type_support_ids_t _SetSecurity_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetSecurity_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetSecurity_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetSecurity_Request_type_support_symbol_names_t _SetSecurity_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, srv, SetSecurity_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, SetSecurity_Request)),
  }
};

typedef struct _SetSecurity_Request_type_support_data_t
{
  void * data[2];
} _SetSecurity_Request_type_support_data_t;

static _SetSecurity_Request_type_support_data_t _SetSecurity_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetSecurity_Request_message_typesupport_map = {
  2,
  "house_interface",
  &_SetSecurity_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetSecurity_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetSecurity_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetSecurity_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetSecurity_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__srv__SetSecurity_Request__get_type_hash,
  &house_interface__srv__SetSecurity_Request__get_type_description,
  &house_interface__srv__SetSecurity_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, srv, SetSecurity_Request)() {
  return &::house_interface::srv::rosidl_typesupport_c::SetSecurity_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/srv/detail/set_security__struct.h"
// already included above
// #include "house_interface/srv/detail/set_security__type_support.h"
// already included above
// #include "house_interface/srv/detail/set_security__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetSecurity_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetSecurity_Response_type_support_ids_t;

static const _SetSecurity_Response_type_support_ids_t _SetSecurity_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetSecurity_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetSecurity_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetSecurity_Response_type_support_symbol_names_t _SetSecurity_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, srv, SetSecurity_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, SetSecurity_Response)),
  }
};

typedef struct _SetSecurity_Response_type_support_data_t
{
  void * data[2];
} _SetSecurity_Response_type_support_data_t;

static _SetSecurity_Response_type_support_data_t _SetSecurity_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetSecurity_Response_message_typesupport_map = {
  2,
  "house_interface",
  &_SetSecurity_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetSecurity_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetSecurity_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetSecurity_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetSecurity_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__srv__SetSecurity_Response__get_type_hash,
  &house_interface__srv__SetSecurity_Response__get_type_description,
  &house_interface__srv__SetSecurity_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, srv, SetSecurity_Response)() {
  return &::house_interface::srv::rosidl_typesupport_c::SetSecurity_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/srv/detail/set_security__struct.h"
// already included above
// #include "house_interface/srv/detail/set_security__type_support.h"
// already included above
// #include "house_interface/srv/detail/set_security__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetSecurity_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetSecurity_Event_type_support_ids_t;

static const _SetSecurity_Event_type_support_ids_t _SetSecurity_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetSecurity_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetSecurity_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetSecurity_Event_type_support_symbol_names_t _SetSecurity_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, srv, SetSecurity_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, SetSecurity_Event)),
  }
};

typedef struct _SetSecurity_Event_type_support_data_t
{
  void * data[2];
} _SetSecurity_Event_type_support_data_t;

static _SetSecurity_Event_type_support_data_t _SetSecurity_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetSecurity_Event_message_typesupport_map = {
  2,
  "house_interface",
  &_SetSecurity_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetSecurity_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetSecurity_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetSecurity_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetSecurity_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__srv__SetSecurity_Event__get_type_hash,
  &house_interface__srv__SetSecurity_Event__get_type_description,
  &house_interface__srv__SetSecurity_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, srv, SetSecurity_Event)() {
  return &::house_interface::srv::rosidl_typesupport_c::SetSecurity_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "house_interface/srv/detail/set_security__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace house_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetSecurity_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetSecurity_type_support_ids_t;

static const _SetSecurity_type_support_ids_t _SetSecurity_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetSecurity_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetSecurity_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetSecurity_type_support_symbol_names_t _SetSecurity_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, srv, SetSecurity)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, srv, SetSecurity)),
  }
};

typedef struct _SetSecurity_type_support_data_t
{
  void * data[2];
} _SetSecurity_type_support_data_t;

static _SetSecurity_type_support_data_t _SetSecurity_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetSecurity_service_typesupport_map = {
  2,
  "house_interface",
  &_SetSecurity_service_typesupport_ids.typesupport_identifier[0],
  &_SetSecurity_service_typesupport_symbol_names.symbol_name[0],
  &_SetSecurity_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetSecurity_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetSecurity_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetSecurity_Request_message_type_support_handle,
  &SetSecurity_Response_message_type_support_handle,
  &SetSecurity_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    house_interface,
    srv,
    SetSecurity
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    house_interface,
    srv,
    SetSecurity
  ),
  &house_interface__srv__SetSecurity__get_type_hash,
  &house_interface__srv__SetSecurity__get_type_description,
  &house_interface__srv__SetSecurity__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, srv, SetSecurity)() {
  return &::house_interface::srv::rosidl_typesupport_c::SetSecurity_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif