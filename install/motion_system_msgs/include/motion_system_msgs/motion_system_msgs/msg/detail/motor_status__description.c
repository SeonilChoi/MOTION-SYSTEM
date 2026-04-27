// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motion_system_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#include "motion_system_msgs/msg/detail/motor_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motion_system_msgs
const rosidl_type_hash_t *
motion_system_msgs__msg__MotorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc0, 0xc7, 0xf4, 0x8f, 0x0c, 0x86, 0x08, 0xbc,
      0xf5, 0xfa, 0xce, 0xe6, 0x9d, 0x77, 0x2f, 0xbc,
      0xaf, 0x10, 0x75, 0xc1, 0xa5, 0x72, 0xe2, 0x57,
      0xe0, 0x3f, 0x1b, 0x65, 0x58, 0xc2, 0xa6, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/multi_array_layout__functions.h"
#include "std_msgs/msg/detail/int8_multi_array__functions.h"
#include "std_msgs/msg/detail/multi_array_dimension__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t std_msgs__msg__Int8MultiArray__EXPECTED_HASH = {1, {
    0xf2, 0x19, 0x98, 0xd4, 0xb4, 0x92, 0xab, 0xd6,
    0x33, 0x30, 0x76, 0x5d, 0x75, 0xd5, 0x83, 0x12,
    0x38, 0xd4, 0x00, 0x74, 0x03, 0x86, 0xf6, 0x51,
    0xf1, 0x3a, 0x87, 0x2a, 0x4d, 0x21, 0x88, 0xdb,
  }};
static const rosidl_type_hash_t std_msgs__msg__MultiArrayDimension__EXPECTED_HASH = {1, {
    0x5e, 0x77, 0x3a, 0x60, 0xa4, 0xc7, 0xfc, 0x8a,
    0x54, 0x98, 0x5f, 0x30, 0x7c, 0x78, 0x37, 0xaa,
    0x29, 0x94, 0x25, 0x2a, 0x12, 0x6c, 0x30, 0x19,
    0x57, 0xa2, 0x4e, 0x31, 0x28, 0x2c, 0x9c, 0xbe,
  }};
static const rosidl_type_hash_t std_msgs__msg__MultiArrayLayout__EXPECTED_HASH = {1, {
    0x4c, 0x66, 0xe6, 0xf7, 0x8e, 0x74, 0x0a, 0xc1,
    0x03, 0xa9, 0x4c, 0xf6, 0x32, 0x59, 0xf9, 0x68,
    0xe4, 0x8c, 0x61, 0x7e, 0x76, 0x99, 0xe8, 0x29,
    0xb6, 0x3c, 0x21, 0xa5, 0xcb, 0x50, 0xda, 0xc6,
  }};
#endif

static char motion_system_msgs__msg__MotorStatus__TYPE_NAME[] = "motion_system_msgs/msg/MotorStatus";
static char std_msgs__msg__Int8MultiArray__TYPE_NAME[] = "std_msgs/msg/Int8MultiArray";
static char std_msgs__msg__MultiArrayDimension__TYPE_NAME[] = "std_msgs/msg/MultiArrayDimension";
static char std_msgs__msg__MultiArrayLayout__TYPE_NAME[] = "std_msgs/msg/MultiArrayLayout";

// Define type names, field names, and default values
static char motion_system_msgs__msg__MotorStatus__FIELD_NAME__number_of_target_interfaces[] = "number_of_target_interfaces";
static char motion_system_msgs__msg__MotorStatus__FIELD_NAME__target_interface_id[] = "target_interface_id";
static char motion_system_msgs__msg__MotorStatus__FIELD_NAME__controller_index[] = "controller_index";
static char motion_system_msgs__msg__MotorStatus__FIELD_NAME__controlword[] = "controlword";
static char motion_system_msgs__msg__MotorStatus__FIELD_NAME__statusword[] = "statusword";
static char motion_system_msgs__msg__MotorStatus__FIELD_NAME__errorcode[] = "errorcode";
static char motion_system_msgs__msg__MotorStatus__FIELD_NAME__position[] = "position";
static char motion_system_msgs__msg__MotorStatus__FIELD_NAME__velocity[] = "velocity";
static char motion_system_msgs__msg__MotorStatus__FIELD_NAME__torque[] = "torque";

static rosidl_runtime_c__type_description__Field motion_system_msgs__msg__MotorStatus__FIELDS[] = {
  {
    {motion_system_msgs__msg__MotorStatus__FIELD_NAME__number_of_target_interfaces, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motion_system_msgs__msg__MotorStatus__FIELD_NAME__target_interface_id, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {std_msgs__msg__Int8MultiArray__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {motion_system_msgs__msg__MotorStatus__FIELD_NAME__controller_index, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motion_system_msgs__msg__MotorStatus__FIELD_NAME__controlword, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motion_system_msgs__msg__MotorStatus__FIELD_NAME__statusword, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motion_system_msgs__msg__MotorStatus__FIELD_NAME__errorcode, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motion_system_msgs__msg__MotorStatus__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motion_system_msgs__msg__MotorStatus__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motion_system_msgs__msg__MotorStatus__FIELD_NAME__torque, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motion_system_msgs__msg__MotorStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {std_msgs__msg__Int8MultiArray__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__MultiArrayDimension__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__MultiArrayLayout__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motion_system_msgs__msg__MotorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motion_system_msgs__msg__MotorStatus__TYPE_NAME, 34, 34},
      {motion_system_msgs__msg__MotorStatus__FIELDS, 9, 9},
    },
    {motion_system_msgs__msg__MotorStatus__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&std_msgs__msg__Int8MultiArray__EXPECTED_HASH, std_msgs__msg__Int8MultiArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = std_msgs__msg__Int8MultiArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__MultiArrayDimension__EXPECTED_HASH, std_msgs__msg__MultiArrayDimension__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__MultiArrayDimension__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__MultiArrayLayout__EXPECTED_HASH, std_msgs__msg__MultiArrayLayout__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__MultiArrayLayout__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8[] number_of_target_interfaces\n"
  "std_msgs/Int8MultiArray[] target_interface_id\n"
  "uint8[] controller_index\n"
  "uint16[] controlword\n"
  "uint16[] statusword\n"
  "uint16[] errorcode\n"
  "float64[] position\n"
  "float64[] velocity\n"
  "float64[] torque";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motion_system_msgs__msg__MotorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motion_system_msgs__msg__MotorStatus__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 221, 221},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motion_system_msgs__msg__MotorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motion_system_msgs__msg__MotorStatus__get_individual_type_description_source(NULL),
    sources[1] = *std_msgs__msg__Int8MultiArray__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__MultiArrayDimension__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__MultiArrayLayout__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
