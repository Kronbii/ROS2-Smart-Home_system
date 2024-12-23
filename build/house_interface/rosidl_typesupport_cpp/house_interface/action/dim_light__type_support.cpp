// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from house_interface:action/DimLight.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "house_interface/action/detail/dim_light__functions.h"
#include "house_interface/action/detail/dim_light__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DimLight_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_Goal_type_support_ids_t;

static const _DimLight_Goal_type_support_ids_t _DimLight_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, action, DimLight_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, action, DimLight_Goal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__action__DimLight_Goal__get_type_hash,
  &house_interface__action__DimLight_Goal__get_type_description,
  &house_interface__action__DimLight_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::action::DimLight_Goal>()
{
  return &::house_interface::action::rosidl_typesupport_cpp::DimLight_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight_Goal)() {
  return get_message_type_support_handle<house_interface::action::DimLight_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DimLight_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_Result_type_support_ids_t;

static const _DimLight_Result_type_support_ids_t _DimLight_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, action, DimLight_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, action, DimLight_Result)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__action__DimLight_Result__get_type_hash,
  &house_interface__action__DimLight_Result__get_type_description,
  &house_interface__action__DimLight_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::action::DimLight_Result>()
{
  return &::house_interface::action::rosidl_typesupport_cpp::DimLight_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight_Result)() {
  return get_message_type_support_handle<house_interface::action::DimLight_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DimLight_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_Feedback_type_support_ids_t;

static const _DimLight_Feedback_type_support_ids_t _DimLight_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, action, DimLight_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, action, DimLight_Feedback)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__action__DimLight_Feedback__get_type_hash,
  &house_interface__action__DimLight_Feedback__get_type_description,
  &house_interface__action__DimLight_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::action::DimLight_Feedback>()
{
  return &::house_interface::action::rosidl_typesupport_cpp::DimLight_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight_Feedback)() {
  return get_message_type_support_handle<house_interface::action::DimLight_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DimLight_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_SendGoal_Request_type_support_ids_t;

static const _DimLight_SendGoal_Request_type_support_ids_t _DimLight_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, action, DimLight_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, action, DimLight_SendGoal_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__action__DimLight_SendGoal_Request__get_type_hash,
  &house_interface__action__DimLight_SendGoal_Request__get_type_description,
  &house_interface__action__DimLight_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::action::DimLight_SendGoal_Request>()
{
  return &::house_interface::action::rosidl_typesupport_cpp::DimLight_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight_SendGoal_Request)() {
  return get_message_type_support_handle<house_interface::action::DimLight_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DimLight_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_SendGoal_Response_type_support_ids_t;

static const _DimLight_SendGoal_Response_type_support_ids_t _DimLight_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, action, DimLight_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, action, DimLight_SendGoal_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__action__DimLight_SendGoal_Response__get_type_hash,
  &house_interface__action__DimLight_SendGoal_Response__get_type_description,
  &house_interface__action__DimLight_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::action::DimLight_SendGoal_Response>()
{
  return &::house_interface::action::rosidl_typesupport_cpp::DimLight_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight_SendGoal_Response)() {
  return get_message_type_support_handle<house_interface::action::DimLight_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DimLight_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_SendGoal_Event_type_support_ids_t;

static const _DimLight_SendGoal_Event_type_support_ids_t _DimLight_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, action, DimLight_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, action, DimLight_SendGoal_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__action__DimLight_SendGoal_Event__get_type_hash,
  &house_interface__action__DimLight_SendGoal_Event__get_type_description,
  &house_interface__action__DimLight_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::action::DimLight_SendGoal_Event>()
{
  return &::house_interface::action::rosidl_typesupport_cpp::DimLight_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight_SendGoal_Event)() {
  return get_message_type_support_handle<house_interface::action::DimLight_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DimLight_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_SendGoal_type_support_ids_t;

static const _DimLight_SendGoal_type_support_ids_t _DimLight_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, action, DimLight_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, action, DimLight_SendGoal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<house_interface::action::DimLight_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<house_interface::action::DimLight_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<house_interface::action::DimLight_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<house_interface::action::DimLight_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<house_interface::action::DimLight_SendGoal>,
  &house_interface__action__DimLight_SendGoal__get_type_hash,
  &house_interface__action__DimLight_SendGoal__get_type_description,
  &house_interface__action__DimLight_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<house_interface::action::DimLight_SendGoal>()
{
  return &::house_interface::action::rosidl_typesupport_cpp::DimLight_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<house_interface::action::DimLight_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DimLight_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_GetResult_Request_type_support_ids_t;

static const _DimLight_GetResult_Request_type_support_ids_t _DimLight_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, action, DimLight_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, action, DimLight_GetResult_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__action__DimLight_GetResult_Request__get_type_hash,
  &house_interface__action__DimLight_GetResult_Request__get_type_description,
  &house_interface__action__DimLight_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::action::DimLight_GetResult_Request>()
{
  return &::house_interface::action::rosidl_typesupport_cpp::DimLight_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight_GetResult_Request)() {
  return get_message_type_support_handle<house_interface::action::DimLight_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DimLight_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_GetResult_Response_type_support_ids_t;

static const _DimLight_GetResult_Response_type_support_ids_t _DimLight_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, action, DimLight_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, action, DimLight_GetResult_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__action__DimLight_GetResult_Response__get_type_hash,
  &house_interface__action__DimLight_GetResult_Response__get_type_description,
  &house_interface__action__DimLight_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::action::DimLight_GetResult_Response>()
{
  return &::house_interface::action::rosidl_typesupport_cpp::DimLight_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight_GetResult_Response)() {
  return get_message_type_support_handle<house_interface::action::DimLight_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DimLight_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_GetResult_Event_type_support_ids_t;

static const _DimLight_GetResult_Event_type_support_ids_t _DimLight_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, action, DimLight_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, action, DimLight_GetResult_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__action__DimLight_GetResult_Event__get_type_hash,
  &house_interface__action__DimLight_GetResult_Event__get_type_description,
  &house_interface__action__DimLight_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::action::DimLight_GetResult_Event>()
{
  return &::house_interface::action::rosidl_typesupport_cpp::DimLight_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight_GetResult_Event)() {
  return get_message_type_support_handle<house_interface::action::DimLight_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DimLight_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_GetResult_type_support_ids_t;

static const _DimLight_GetResult_type_support_ids_t _DimLight_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, action, DimLight_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, action, DimLight_GetResult)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<house_interface::action::DimLight_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<house_interface::action::DimLight_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<house_interface::action::DimLight_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<house_interface::action::DimLight_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<house_interface::action::DimLight_GetResult>,
  &house_interface__action__DimLight_GetResult__get_type_hash,
  &house_interface__action__DimLight_GetResult__get_type_description,
  &house_interface__action__DimLight_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<house_interface::action::DimLight_GetResult>()
{
  return &::house_interface::action::rosidl_typesupport_cpp::DimLight_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<house_interface::action::DimLight_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "house_interface/action/detail/dim_light__functions.h"
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DimLight_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DimLight_FeedbackMessage_type_support_ids_t;

static const _DimLight_FeedbackMessage_type_support_ids_t _DimLight_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, action, DimLight_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, action, DimLight_FeedbackMessage)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DimLight_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__action__DimLight_FeedbackMessage__get_type_hash,
  &house_interface__action__DimLight_FeedbackMessage__get_type_description,
  &house_interface__action__DimLight_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::action::DimLight_FeedbackMessage>()
{
  return &::house_interface::action::rosidl_typesupport_cpp::DimLight_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight_FeedbackMessage)() {
  return get_message_type_support_handle<house_interface::action::DimLight_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace house_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t DimLight_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &house_interface__action__DimLight__get_type_hash,
  &house_interface__action__DimLight__get_type_description,
  &house_interface__action__DimLight__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<house_interface::action::DimLight>()
{
  using ::house_interface::action::rosidl_typesupport_cpp::DimLight_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  DimLight_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::house_interface::action::DimLight::Impl::SendGoalService>();
  DimLight_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::house_interface::action::DimLight::Impl::GetResultService>();
  DimLight_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::house_interface::action::DimLight::Impl::CancelGoalService>();
  DimLight_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::house_interface::action::DimLight::Impl::FeedbackMessage>();
  DimLight_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::house_interface::action::DimLight::Impl::GoalStatusMessage>();
  return &DimLight_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, action, DimLight)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<house_interface::action::DimLight>();
}

#ifdef __cplusplus
}
#endif