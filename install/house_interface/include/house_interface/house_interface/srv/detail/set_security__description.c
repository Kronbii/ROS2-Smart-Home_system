// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from house_interface:srv/SetSecurity.idl
// generated code does not contain a copyright notice

#include "house_interface/srv/detail/set_security__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_house_interface
const rosidl_type_hash_t *
house_interface__srv__SetSecurity__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0xe5, 0x4d, 0xfb, 0x0b, 0xaf, 0x7a, 0x65,
      0x2f, 0xe9, 0x4f, 0x65, 0x7f, 0x38, 0x01, 0x27,
      0x5f, 0xd2, 0x89, 0x2f, 0xfe, 0xf3, 0x47, 0xe7,
      0xda, 0x45, 0xfe, 0x82, 0x15, 0x5c, 0x8c, 0x7d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_house_interface
const rosidl_type_hash_t *
house_interface__srv__SetSecurity_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6c, 0xfa, 0xea, 0x03, 0x6c, 0x34, 0x55, 0xe8,
      0xbc, 0x04, 0x7d, 0x55, 0x4e, 0x4f, 0x68, 0xfa,
      0xce, 0x20, 0x8c, 0xcd, 0x84, 0x5f, 0x6e, 0xd7,
      0x26, 0xa6, 0xb0, 0xdb, 0x84, 0xa1, 0x3e, 0xa6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_house_interface
const rosidl_type_hash_t *
house_interface__srv__SetSecurity_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0e, 0xf8, 0x53, 0x9a, 0x64, 0xe8, 0xcf, 0x51,
      0xd2, 0x89, 0x3f, 0xd0, 0x44, 0x1f, 0x5b, 0x5d,
      0xa9, 0xf6, 0x01, 0x17, 0x8a, 0xda, 0x2c, 0x47,
      0xf9, 0xa2, 0xdd, 0x35, 0x3d, 0x60, 0xfe, 0xd2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_house_interface
const rosidl_type_hash_t *
house_interface__srv__SetSecurity_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0x23, 0x71, 0x93, 0xe6, 0xaf, 0xbf, 0xa2,
      0x7e, 0xd6, 0xe4, 0x04, 0x90, 0xcf, 0xbf, 0xc4,
      0x9c, 0x5e, 0xe8, 0xa1, 0x5d, 0x12, 0x1d, 0x92,
      0x75, 0x79, 0xc8, 0xcf, 0x93, 0x3a, 0x3a, 0x3f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char house_interface__srv__SetSecurity__TYPE_NAME[] = "house_interface/srv/SetSecurity";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char house_interface__srv__SetSecurity_Event__TYPE_NAME[] = "house_interface/srv/SetSecurity_Event";
static char house_interface__srv__SetSecurity_Request__TYPE_NAME[] = "house_interface/srv/SetSecurity_Request";
static char house_interface__srv__SetSecurity_Response__TYPE_NAME[] = "house_interface/srv/SetSecurity_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char house_interface__srv__SetSecurity__FIELD_NAME__request_message[] = "request_message";
static char house_interface__srv__SetSecurity__FIELD_NAME__response_message[] = "response_message";
static char house_interface__srv__SetSecurity__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field house_interface__srv__SetSecurity__FIELDS[] = {
  {
    {house_interface__srv__SetSecurity__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {house_interface__srv__SetSecurity_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {house_interface__srv__SetSecurity__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {house_interface__srv__SetSecurity_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {house_interface__srv__SetSecurity__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {house_interface__srv__SetSecurity_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription house_interface__srv__SetSecurity__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {house_interface__srv__SetSecurity_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {house_interface__srv__SetSecurity_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {house_interface__srv__SetSecurity_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
house_interface__srv__SetSecurity__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {house_interface__srv__SetSecurity__TYPE_NAME, 31, 31},
      {house_interface__srv__SetSecurity__FIELDS, 3, 3},
    },
    {house_interface__srv__SetSecurity__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = house_interface__srv__SetSecurity_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = house_interface__srv__SetSecurity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = house_interface__srv__SetSecurity_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char house_interface__srv__SetSecurity_Request__FIELD_NAME__security_state[] = "security_state";

static rosidl_runtime_c__type_description__Field house_interface__srv__SetSecurity_Request__FIELDS[] = {
  {
    {house_interface__srv__SetSecurity_Request__FIELD_NAME__security_state, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
house_interface__srv__SetSecurity_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {house_interface__srv__SetSecurity_Request__TYPE_NAME, 39, 39},
      {house_interface__srv__SetSecurity_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char house_interface__srv__SetSecurity_Response__FIELD_NAME__message[] = "message";
static char house_interface__srv__SetSecurity_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field house_interface__srv__SetSecurity_Response__FIELDS[] = {
  {
    {house_interface__srv__SetSecurity_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {house_interface__srv__SetSecurity_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
house_interface__srv__SetSecurity_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {house_interface__srv__SetSecurity_Response__TYPE_NAME, 40, 40},
      {house_interface__srv__SetSecurity_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char house_interface__srv__SetSecurity_Event__FIELD_NAME__info[] = "info";
static char house_interface__srv__SetSecurity_Event__FIELD_NAME__request[] = "request";
static char house_interface__srv__SetSecurity_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field house_interface__srv__SetSecurity_Event__FIELDS[] = {
  {
    {house_interface__srv__SetSecurity_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {house_interface__srv__SetSecurity_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {house_interface__srv__SetSecurity_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {house_interface__srv__SetSecurity_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {house_interface__srv__SetSecurity_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription house_interface__srv__SetSecurity_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {house_interface__srv__SetSecurity_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {house_interface__srv__SetSecurity_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
house_interface__srv__SetSecurity_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {house_interface__srv__SetSecurity_Event__TYPE_NAME, 37, 37},
      {house_interface__srv__SetSecurity_Event__FIELDS, 3, 3},
    },
    {house_interface__srv__SetSecurity_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = house_interface__srv__SetSecurity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = house_interface__srv__SetSecurity_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string security_state\n"
  "---\n"
  "string message\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
house_interface__srv__SetSecurity__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {house_interface__srv__SetSecurity__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
house_interface__srv__SetSecurity_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {house_interface__srv__SetSecurity_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
house_interface__srv__SetSecurity_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {house_interface__srv__SetSecurity_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
house_interface__srv__SetSecurity_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {house_interface__srv__SetSecurity_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
house_interface__srv__SetSecurity__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *house_interface__srv__SetSecurity__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *house_interface__srv__SetSecurity_Event__get_individual_type_description_source(NULL);
    sources[3] = *house_interface__srv__SetSecurity_Request__get_individual_type_description_source(NULL);
    sources[4] = *house_interface__srv__SetSecurity_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
house_interface__srv__SetSecurity_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *house_interface__srv__SetSecurity_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
house_interface__srv__SetSecurity_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *house_interface__srv__SetSecurity_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
house_interface__srv__SetSecurity_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *house_interface__srv__SetSecurity_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *house_interface__srv__SetSecurity_Request__get_individual_type_description_source(NULL);
    sources[3] = *house_interface__srv__SetSecurity_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
