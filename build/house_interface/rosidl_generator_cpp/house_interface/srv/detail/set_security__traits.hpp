// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from house_interface:srv/SetSecurity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/srv/set_security.hpp"


#ifndef HOUSE_INTERFACE__SRV__DETAIL__SET_SECURITY__TRAITS_HPP_
#define HOUSE_INTERFACE__SRV__DETAIL__SET_SECURITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "house_interface/srv/detail/set_security__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace house_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSecurity_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: security_state
  {
    out << "security_state: ";
    rosidl_generator_traits::value_to_yaml(msg.security_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSecurity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: security_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "security_state: ";
    rosidl_generator_traits::value_to_yaml(msg.security_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSecurity_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace house_interface

namespace rosidl_generator_traits
{

[[deprecated("use house_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const house_interface::srv::SetSecurity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  house_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use house_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const house_interface::srv::SetSecurity_Request & msg)
{
  return house_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<house_interface::srv::SetSecurity_Request>()
{
  return "house_interface::srv::SetSecurity_Request";
}

template<>
inline const char * name<house_interface::srv::SetSecurity_Request>()
{
  return "house_interface/srv/SetSecurity_Request";
}

template<>
struct has_fixed_size<house_interface::srv::SetSecurity_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<house_interface::srv::SetSecurity_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<house_interface::srv::SetSecurity_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace house_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSecurity_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSecurity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSecurity_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace house_interface

namespace rosidl_generator_traits
{

[[deprecated("use house_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const house_interface::srv::SetSecurity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  house_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use house_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const house_interface::srv::SetSecurity_Response & msg)
{
  return house_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<house_interface::srv::SetSecurity_Response>()
{
  return "house_interface::srv::SetSecurity_Response";
}

template<>
inline const char * name<house_interface::srv::SetSecurity_Response>()
{
  return "house_interface/srv/SetSecurity_Response";
}

template<>
struct has_fixed_size<house_interface::srv::SetSecurity_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<house_interface::srv::SetSecurity_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<house_interface::srv::SetSecurity_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace house_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSecurity_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSecurity_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSecurity_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace house_interface

namespace rosidl_generator_traits
{

[[deprecated("use house_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const house_interface::srv::SetSecurity_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  house_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use house_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const house_interface::srv::SetSecurity_Event & msg)
{
  return house_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<house_interface::srv::SetSecurity_Event>()
{
  return "house_interface::srv::SetSecurity_Event";
}

template<>
inline const char * name<house_interface::srv::SetSecurity_Event>()
{
  return "house_interface/srv/SetSecurity_Event";
}

template<>
struct has_fixed_size<house_interface::srv::SetSecurity_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<house_interface::srv::SetSecurity_Event>
  : std::integral_constant<bool, has_bounded_size<house_interface::srv::SetSecurity_Request>::value && has_bounded_size<house_interface::srv::SetSecurity_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<house_interface::srv::SetSecurity_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<house_interface::srv::SetSecurity>()
{
  return "house_interface::srv::SetSecurity";
}

template<>
inline const char * name<house_interface::srv::SetSecurity>()
{
  return "house_interface/srv/SetSecurity";
}

template<>
struct has_fixed_size<house_interface::srv::SetSecurity>
  : std::integral_constant<
    bool,
    has_fixed_size<house_interface::srv::SetSecurity_Request>::value &&
    has_fixed_size<house_interface::srv::SetSecurity_Response>::value
  >
{
};

template<>
struct has_bounded_size<house_interface::srv::SetSecurity>
  : std::integral_constant<
    bool,
    has_bounded_size<house_interface::srv::SetSecurity_Request>::value &&
    has_bounded_size<house_interface::srv::SetSecurity_Response>::value
  >
{
};

template<>
struct is_service<house_interface::srv::SetSecurity>
  : std::true_type
{
};

template<>
struct is_service_request<house_interface::srv::SetSecurity_Request>
  : std::true_type
{
};

template<>
struct is_service_response<house_interface::srv::SetSecurity_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HOUSE_INTERFACE__SRV__DETAIL__SET_SECURITY__TRAITS_HPP_