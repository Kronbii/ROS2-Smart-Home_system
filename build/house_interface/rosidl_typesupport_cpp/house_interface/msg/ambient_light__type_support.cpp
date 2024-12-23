// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from house_interface:msg/AmbientLight.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "house_interface/msg/detail/ambient_light__functions.h"
#include "house_interface/msg/detail/ambient_light__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace house_interface
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _AmbientLight_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AmbientLight_type_support_ids_t;

static const _AmbientLight_type_support_ids_t _AmbientLight_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AmbientLight_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AmbientLight_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AmbientLight_type_support_symbol_names_t _AmbientLight_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, house_interface, msg, AmbientLight)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, msg, AmbientLight)),
  }
};

typedef struct _AmbientLight_type_support_data_t
{
  void * data[2];
} _AmbientLight_type_support_data_t;

static _AmbientLight_type_support_data_t _AmbientLight_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AmbientLight_message_typesupport_map = {
  2,
  "house_interface",
  &_AmbientLight_message_typesupport_ids.typesupport_identifier[0],
  &_AmbientLight_message_typesupport_symbol_names.symbol_name[0],
  &_AmbientLight_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AmbientLight_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AmbientLight_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &house_interface__msg__AmbientLight__get_type_hash,
  &house_interface__msg__AmbientLight__get_type_description,
  &house_interface__msg__AmbientLight__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace house_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::msg::AmbientLight>()
{
  return &::house_interface::msg::rosidl_typesupport_cpp::AmbientLight_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, house_interface, msg, AmbientLight)() {
  return get_message_type_support_handle<house_interface::msg::AmbientLight>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
