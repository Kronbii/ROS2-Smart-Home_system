// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from house_interface:action/DimLight.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "house_interface/action/detail/dim_light__struct.h"
#include "house_interface/action/detail/dim_light__type_support.h"
#include "house_interface/action/detail/dim_light__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DimLight_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_Goal_type_support_ids_t;

static const _DimLight_Goal_type_support_ids_t _DimLight_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DimLight_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DimLight_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DimLight_Goal_type_support_symbol_names_t _DimLight_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, action, DimLight_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, action, DimLight_Goal)),
  }
};

typedef struct _DimLight_Goal_type_support_data_t
{
  void * data[2];
} _DimLight_Goal_type_support_data_t;

static _DimLight_Goal_type_support_data_t _DimLight_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DimLight_Goal_message_typesupport_map = {
  2,
  "house_interface",
  &_DimLight_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DimLight_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DimLight_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DimLight_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__action__DimLight_Goal__get_type_hash,
  &house_interface__action__DimLight_Goal__get_type_description,
  &house_interface__action__DimLight_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, action, DimLight_Goal)() {
  return &::house_interface::action::rosidl_typesupport_c::DimLight_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__type_support.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DimLight_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_Result_type_support_ids_t;

static const _DimLight_Result_type_support_ids_t _DimLight_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DimLight_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DimLight_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DimLight_Result_type_support_symbol_names_t _DimLight_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, action, DimLight_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, action, DimLight_Result)),
  }
};

typedef struct _DimLight_Result_type_support_data_t
{
  void * data[2];
} _DimLight_Result_type_support_data_t;

static _DimLight_Result_type_support_data_t _DimLight_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DimLight_Result_message_typesupport_map = {
  2,
  "house_interface",
  &_DimLight_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DimLight_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DimLight_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DimLight_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__action__DimLight_Result__get_type_hash,
  &house_interface__action__DimLight_Result__get_type_description,
  &house_interface__action__DimLight_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, action, DimLight_Result)() {
  return &::house_interface::action::rosidl_typesupport_c::DimLight_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__type_support.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DimLight_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_Feedback_type_support_ids_t;

static const _DimLight_Feedback_type_support_ids_t _DimLight_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DimLight_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DimLight_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DimLight_Feedback_type_support_symbol_names_t _DimLight_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, action, DimLight_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, action, DimLight_Feedback)),
  }
};

typedef struct _DimLight_Feedback_type_support_data_t
{
  void * data[2];
} _DimLight_Feedback_type_support_data_t;

static _DimLight_Feedback_type_support_data_t _DimLight_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DimLight_Feedback_message_typesupport_map = {
  2,
  "house_interface",
  &_DimLight_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DimLight_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DimLight_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DimLight_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__action__DimLight_Feedback__get_type_hash,
  &house_interface__action__DimLight_Feedback__get_type_description,
  &house_interface__action__DimLight_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, action, DimLight_Feedback)() {
  return &::house_interface::action::rosidl_typesupport_c::DimLight_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__type_support.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DimLight_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_SendGoal_Request_type_support_ids_t;

static const _DimLight_SendGoal_Request_type_support_ids_t _DimLight_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DimLight_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DimLight_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DimLight_SendGoal_Request_type_support_symbol_names_t _DimLight_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, action, DimLight_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, action, DimLight_SendGoal_Request)),
  }
};

typedef struct _DimLight_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DimLight_SendGoal_Request_type_support_data_t;

static _DimLight_SendGoal_Request_type_support_data_t _DimLight_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DimLight_SendGoal_Request_message_typesupport_map = {
  2,
  "house_interface",
  &_DimLight_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DimLight_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DimLight_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DimLight_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__action__DimLight_SendGoal_Request__get_type_hash,
  &house_interface__action__DimLight_SendGoal_Request__get_type_description,
  &house_interface__action__DimLight_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, action, DimLight_SendGoal_Request)() {
  return &::house_interface::action::rosidl_typesupport_c::DimLight_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__type_support.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DimLight_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_SendGoal_Response_type_support_ids_t;

static const _DimLight_SendGoal_Response_type_support_ids_t _DimLight_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DimLight_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DimLight_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DimLight_SendGoal_Response_type_support_symbol_names_t _DimLight_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, action, DimLight_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, action, DimLight_SendGoal_Response)),
  }
};

typedef struct _DimLight_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DimLight_SendGoal_Response_type_support_data_t;

static _DimLight_SendGoal_Response_type_support_data_t _DimLight_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DimLight_SendGoal_Response_message_typesupport_map = {
  2,
  "house_interface",
  &_DimLight_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DimLight_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DimLight_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DimLight_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__action__DimLight_SendGoal_Response__get_type_hash,
  &house_interface__action__DimLight_SendGoal_Response__get_type_description,
  &house_interface__action__DimLight_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, action, DimLight_SendGoal_Response)() {
  return &::house_interface::action::rosidl_typesupport_c::DimLight_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__type_support.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DimLight_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_SendGoal_Event_type_support_ids_t;

static const _DimLight_SendGoal_Event_type_support_ids_t _DimLight_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DimLight_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DimLight_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DimLight_SendGoal_Event_type_support_symbol_names_t _DimLight_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, action, DimLight_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, action, DimLight_SendGoal_Event)),
  }
};

typedef struct _DimLight_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _DimLight_SendGoal_Event_type_support_data_t;

static _DimLight_SendGoal_Event_type_support_data_t _DimLight_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DimLight_SendGoal_Event_message_typesupport_map = {
  2,
  "house_interface",
  &_DimLight_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DimLight_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DimLight_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DimLight_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__action__DimLight_SendGoal_Event__get_type_hash,
  &house_interface__action__DimLight_SendGoal_Event__get_type_description,
  &house_interface__action__DimLight_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, action, DimLight_SendGoal_Event)() {
  return &::house_interface::action::rosidl_typesupport_c::DimLight_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _DimLight_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_SendGoal_type_support_ids_t;

static const _DimLight_SendGoal_type_support_ids_t _DimLight_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DimLight_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DimLight_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DimLight_SendGoal_type_support_symbol_names_t _DimLight_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, action, DimLight_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, action, DimLight_SendGoal)),
  }
};

typedef struct _DimLight_SendGoal_type_support_data_t
{
  void * data[2];
} _DimLight_SendGoal_type_support_data_t;

static _DimLight_SendGoal_type_support_data_t _DimLight_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DimLight_SendGoal_service_typesupport_map = {
  2,
  "house_interface",
  &_DimLight_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DimLight_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DimLight_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DimLight_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &DimLight_SendGoal_Request_message_type_support_handle,
  &DimLight_SendGoal_Response_message_type_support_handle,
  &DimLight_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    house_interface,
    action,
    DimLight_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    house_interface,
    action,
    DimLight_SendGoal
  ),
  &house_interface__action__DimLight_SendGoal__get_type_hash,
  &house_interface__action__DimLight_SendGoal__get_type_description,
  &house_interface__action__DimLight_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, action, DimLight_SendGoal)() {
  return &::house_interface::action::rosidl_typesupport_c::DimLight_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__type_support.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DimLight_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_GetResult_Request_type_support_ids_t;

static const _DimLight_GetResult_Request_type_support_ids_t _DimLight_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DimLight_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DimLight_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DimLight_GetResult_Request_type_support_symbol_names_t _DimLight_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, action, DimLight_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, action, DimLight_GetResult_Request)),
  }
};

typedef struct _DimLight_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DimLight_GetResult_Request_type_support_data_t;

static _DimLight_GetResult_Request_type_support_data_t _DimLight_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DimLight_GetResult_Request_message_typesupport_map = {
  2,
  "house_interface",
  &_DimLight_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DimLight_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DimLight_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DimLight_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__action__DimLight_GetResult_Request__get_type_hash,
  &house_interface__action__DimLight_GetResult_Request__get_type_description,
  &house_interface__action__DimLight_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, action, DimLight_GetResult_Request)() {
  return &::house_interface::action::rosidl_typesupport_c::DimLight_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__type_support.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DimLight_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_GetResult_Response_type_support_ids_t;

static const _DimLight_GetResult_Response_type_support_ids_t _DimLight_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DimLight_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DimLight_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DimLight_GetResult_Response_type_support_symbol_names_t _DimLight_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, action, DimLight_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, action, DimLight_GetResult_Response)),
  }
};

typedef struct _DimLight_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DimLight_GetResult_Response_type_support_data_t;

static _DimLight_GetResult_Response_type_support_data_t _DimLight_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DimLight_GetResult_Response_message_typesupport_map = {
  2,
  "house_interface",
  &_DimLight_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DimLight_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DimLight_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DimLight_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__action__DimLight_GetResult_Response__get_type_hash,
  &house_interface__action__DimLight_GetResult_Response__get_type_description,
  &house_interface__action__DimLight_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, action, DimLight_GetResult_Response)() {
  return &::house_interface::action::rosidl_typesupport_c::DimLight_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__type_support.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DimLight_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_GetResult_Event_type_support_ids_t;

static const _DimLight_GetResult_Event_type_support_ids_t _DimLight_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DimLight_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DimLight_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DimLight_GetResult_Event_type_support_symbol_names_t _DimLight_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, action, DimLight_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, action, DimLight_GetResult_Event)),
  }
};

typedef struct _DimLight_GetResult_Event_type_support_data_t
{
  void * data[2];
} _DimLight_GetResult_Event_type_support_data_t;

static _DimLight_GetResult_Event_type_support_data_t _DimLight_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DimLight_GetResult_Event_message_typesupport_map = {
  2,
  "house_interface",
  &_DimLight_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DimLight_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DimLight_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DimLight_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__action__DimLight_GetResult_Event__get_type_hash,
  &house_interface__action__DimLight_GetResult_Event__get_type_description,
  &house_interface__action__DimLight_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, action, DimLight_GetResult_Event)() {
  return &::house_interface::action::rosidl_typesupport_c::DimLight_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _DimLight_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_GetResult_type_support_ids_t;

static const _DimLight_GetResult_type_support_ids_t _DimLight_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DimLight_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DimLight_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DimLight_GetResult_type_support_symbol_names_t _DimLight_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, action, DimLight_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, action, DimLight_GetResult)),
  }
};

typedef struct _DimLight_GetResult_type_support_data_t
{
  void * data[2];
} _DimLight_GetResult_type_support_data_t;

static _DimLight_GetResult_type_support_data_t _DimLight_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DimLight_GetResult_service_typesupport_map = {
  2,
  "house_interface",
  &_DimLight_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DimLight_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DimLight_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DimLight_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &DimLight_GetResult_Request_message_type_support_handle,
  &DimLight_GetResult_Response_message_type_support_handle,
  &DimLight_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    house_interface,
    action,
    DimLight_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    house_interface,
    action,
    DimLight_GetResult
  ),
  &house_interface__action__DimLight_GetResult__get_type_hash,
  &house_interface__action__DimLight_GetResult__get_type_description,
  &house_interface__action__DimLight_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, action, DimLight_GetResult)() {
  return &::house_interface::action::rosidl_typesupport_c::DimLight_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__type_support.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DimLight_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_FeedbackMessage_type_support_ids_t;

static const _DimLight_FeedbackMessage_type_support_ids_t _DimLight_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DimLight_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DimLight_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DimLight_FeedbackMessage_type_support_symbol_names_t _DimLight_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, house_interface, action, DimLight_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, house_interface, action, DimLight_FeedbackMessage)),
  }
};

typedef struct _DimLight_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DimLight_FeedbackMessage_type_support_data_t;

static _DimLight_FeedbackMessage_type_support_data_t _DimLight_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DimLight_FeedbackMessage_message_typesupport_map = {
  2,
  "house_interface",
  &_DimLight_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DimLight_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DimLight_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DimLight_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &house_interface__action__DimLight_FeedbackMessage__get_type_hash,
  &house_interface__action__DimLight_FeedbackMessage__get_type_description,
  &house_interface__action__DimLight_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace house_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, house_interface, action, DimLight_FeedbackMessage)() {
  return &::house_interface::action::rosidl_typesupport_c::DimLight_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "house_interface/action/dim_light.h"
// already included above
// #include "house_interface/action/detail/dim_light__type_support.h"

static rosidl_action_type_support_t _house_interface__action__DimLight__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &house_interface__action__DimLight__get_type_hash,
  &house_interface__action__DimLight__get_type_description,
  &house_interface__action__DimLight__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, house_interface, action, DimLight)()
{
  // Thread-safe by always writing the same values to the static struct
  _house_interface__action__DimLight__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, house_interface, action, DimLight_SendGoal)();
  _house_interface__action__DimLight__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, house_interface, action, DimLight_GetResult)();
  _house_interface__action__DimLight__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _house_interface__action__DimLight__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, house_interface, action, DimLight_FeedbackMessage)();
  _house_interface__action__DimLight__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_house_interface__action__DimLight__typesupport_c;
}

#ifdef __cplusplus
}
#endif
