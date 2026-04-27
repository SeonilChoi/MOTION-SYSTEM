// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motion_system_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_system_msgs/msg/motor_status.h"


#ifndef MOTION_SYSTEM_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define MOTION_SYSTEM_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'number_of_target_interfaces'
// Member 'controller_index'
// Member 'controlword'
// Member 'statusword'
// Member 'errorcode'
// Member 'position'
// Member 'velocity'
// Member 'torque'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'target_interface_id'
#include "std_msgs/msg/detail/int8_multi_array__struct.h"

/// Struct defined in msg/MotorStatus in the package motion_system_msgs.
typedef struct motion_system_msgs__msg__MotorStatus
{
  rosidl_runtime_c__uint8__Sequence number_of_target_interfaces;
  std_msgs__msg__Int8MultiArray__Sequence target_interface_id;
  rosidl_runtime_c__uint8__Sequence controller_index;
  rosidl_runtime_c__uint16__Sequence controlword;
  rosidl_runtime_c__uint16__Sequence statusword;
  rosidl_runtime_c__uint16__Sequence errorcode;
  rosidl_runtime_c__double__Sequence position;
  rosidl_runtime_c__double__Sequence velocity;
  rosidl_runtime_c__double__Sequence torque;
} motion_system_msgs__msg__MotorStatus;

// Struct for a sequence of motion_system_msgs__msg__MotorStatus.
typedef struct motion_system_msgs__msg__MotorStatus__Sequence
{
  motion_system_msgs__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motion_system_msgs__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTION_SYSTEM_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
