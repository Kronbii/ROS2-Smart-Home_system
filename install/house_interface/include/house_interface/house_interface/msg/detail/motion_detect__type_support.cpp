// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from house_interface:msg/MotionDetect.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "house_interface/msg/detail/motion_detect__functions.h"
#include "house_interface/msg/detail/motion_detect__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace house_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotionDetect_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) house_interface::msg::MotionDetect(_init);
}

void MotionDetect_fini_function(void * message_memory)
{
  auto typed_message = static_cast<house_interface::msg::MotionDetect *>(message_memory);
  typed_message->~MotionDetect();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionDetect_message_member_array[1] = {
  {
    "motion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(house_interface::msg::MotionDetect, motion),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionDetect_message_members = {
  "house_interface::msg",  // message namespace
  "MotionDetect",  // message name
  1,  // number of fields
  sizeof(house_interface::msg::MotionDetect),
  false,  // has_any_key_member_
  MotionDetect_message_member_array,  // message members
  MotionDetect_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionDetect_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionDetect_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionDetect_message_members,
  get_message_typesupport_handle_function,
  &house_interface__msg__MotionDetect__get_type_hash,
  &house_interface__msg__MotionDetect__get_type_description,
  &house_interface__msg__MotionDetect__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace house_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::msg::MotionDetect>()
{
  return &::house_interface::msg::rosidl_typesupport_introspection_cpp::MotionDetect_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, msg, MotionDetect)() {
  return &::house_interface::msg::rosidl_typesupport_introspection_cpp::MotionDetect_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif