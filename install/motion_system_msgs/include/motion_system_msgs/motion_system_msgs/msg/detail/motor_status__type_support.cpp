// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from motion_system_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "motion_system_msgs/msg/detail/motor_status__functions.h"
#include "motion_system_msgs/msg/detail/motor_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace motion_system_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) motion_system_msgs::msg::MotorStatus(_init);
}

void MotorStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<motion_system_msgs::msg::MotorStatus *>(message_memory);
  typed_message->~MotorStatus();
}

size_t size_function__MotorStatus__number_of_target_interfaces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorStatus__number_of_target_interfaces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorStatus__number_of_target_interfaces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorStatus__number_of_target_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__MotorStatus__number_of_target_interfaces(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__MotorStatus__number_of_target_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__MotorStatus__number_of_target_interfaces(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__MotorStatus__number_of_target_interfaces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotorStatus__target_interface_id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std_msgs::msg::Int8MultiArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorStatus__target_interface_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std_msgs::msg::Int8MultiArray> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorStatus__target_interface_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std_msgs::msg::Int8MultiArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorStatus__target_interface_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std_msgs::msg::Int8MultiArray *>(
    get_const_function__MotorStatus__target_interface_id(untyped_member, index));
  auto & value = *reinterpret_cast<std_msgs::msg::Int8MultiArray *>(untyped_value);
  value = item;
}

void assign_function__MotorStatus__target_interface_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std_msgs::msg::Int8MultiArray *>(
    get_function__MotorStatus__target_interface_id(untyped_member, index));
  const auto & value = *reinterpret_cast<const std_msgs::msg::Int8MultiArray *>(untyped_value);
  item = value;
}

void resize_function__MotorStatus__target_interface_id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std_msgs::msg::Int8MultiArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotorStatus__controller_index(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorStatus__controller_index(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorStatus__controller_index(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorStatus__controller_index(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__MotorStatus__controller_index(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__MotorStatus__controller_index(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__MotorStatus__controller_index(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__MotorStatus__controller_index(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotorStatus__controlword(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorStatus__controlword(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorStatus__controlword(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorStatus__controlword(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__MotorStatus__controlword(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__MotorStatus__controlword(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__MotorStatus__controlword(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__MotorStatus__controlword(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotorStatus__statusword(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorStatus__statusword(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorStatus__statusword(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorStatus__statusword(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__MotorStatus__statusword(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__MotorStatus__statusword(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__MotorStatus__statusword(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__MotorStatus__statusword(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotorStatus__errorcode(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorStatus__errorcode(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorStatus__errorcode(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorStatus__errorcode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__MotorStatus__errorcode(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__MotorStatus__errorcode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__MotorStatus__errorcode(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__MotorStatus__errorcode(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotorStatus__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorStatus__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorStatus__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorStatus__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotorStatus__position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotorStatus__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotorStatus__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MotorStatus__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotorStatus__velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorStatus__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorStatus__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorStatus__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotorStatus__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotorStatus__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotorStatus__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MotorStatus__velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotorStatus__torque(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorStatus__torque(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorStatus__torque(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorStatus__torque(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotorStatus__torque(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotorStatus__torque(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotorStatus__torque(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MotorStatus__torque(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorStatus_message_member_array[9] = {
  {
    "number_of_target_interfaces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_system_msgs::msg::MotorStatus, number_of_target_interfaces),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorStatus__number_of_target_interfaces,  // size() function pointer
    get_const_function__MotorStatus__number_of_target_interfaces,  // get_const(index) function pointer
    get_function__MotorStatus__number_of_target_interfaces,  // get(index) function pointer
    fetch_function__MotorStatus__number_of_target_interfaces,  // fetch(index, &value) function pointer
    assign_function__MotorStatus__number_of_target_interfaces,  // assign(index, value) function pointer
    resize_function__MotorStatus__number_of_target_interfaces  // resize(index) function pointer
  },
  {
    "target_interface_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Int8MultiArray>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_system_msgs::msg::MotorStatus, target_interface_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorStatus__target_interface_id,  // size() function pointer
    get_const_function__MotorStatus__target_interface_id,  // get_const(index) function pointer
    get_function__MotorStatus__target_interface_id,  // get(index) function pointer
    fetch_function__MotorStatus__target_interface_id,  // fetch(index, &value) function pointer
    assign_function__MotorStatus__target_interface_id,  // assign(index, value) function pointer
    resize_function__MotorStatus__target_interface_id  // resize(index) function pointer
  },
  {
    "controller_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_system_msgs::msg::MotorStatus, controller_index),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorStatus__controller_index,  // size() function pointer
    get_const_function__MotorStatus__controller_index,  // get_const(index) function pointer
    get_function__MotorStatus__controller_index,  // get(index) function pointer
    fetch_function__MotorStatus__controller_index,  // fetch(index, &value) function pointer
    assign_function__MotorStatus__controller_index,  // assign(index, value) function pointer
    resize_function__MotorStatus__controller_index  // resize(index) function pointer
  },
  {
    "controlword",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_system_msgs::msg::MotorStatus, controlword),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorStatus__controlword,  // size() function pointer
    get_const_function__MotorStatus__controlword,  // get_const(index) function pointer
    get_function__MotorStatus__controlword,  // get(index) function pointer
    fetch_function__MotorStatus__controlword,  // fetch(index, &value) function pointer
    assign_function__MotorStatus__controlword,  // assign(index, value) function pointer
    resize_function__MotorStatus__controlword  // resize(index) function pointer
  },
  {
    "statusword",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_system_msgs::msg::MotorStatus, statusword),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorStatus__statusword,  // size() function pointer
    get_const_function__MotorStatus__statusword,  // get_const(index) function pointer
    get_function__MotorStatus__statusword,  // get(index) function pointer
    fetch_function__MotorStatus__statusword,  // fetch(index, &value) function pointer
    assign_function__MotorStatus__statusword,  // assign(index, value) function pointer
    resize_function__MotorStatus__statusword  // resize(index) function pointer
  },
  {
    "errorcode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_system_msgs::msg::MotorStatus, errorcode),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorStatus__errorcode,  // size() function pointer
    get_const_function__MotorStatus__errorcode,  // get_const(index) function pointer
    get_function__MotorStatus__errorcode,  // get(index) function pointer
    fetch_function__MotorStatus__errorcode,  // fetch(index, &value) function pointer
    assign_function__MotorStatus__errorcode,  // assign(index, value) function pointer
    resize_function__MotorStatus__errorcode  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_system_msgs::msg::MotorStatus, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorStatus__position,  // size() function pointer
    get_const_function__MotorStatus__position,  // get_const(index) function pointer
    get_function__MotorStatus__position,  // get(index) function pointer
    fetch_function__MotorStatus__position,  // fetch(index, &value) function pointer
    assign_function__MotorStatus__position,  // assign(index, value) function pointer
    resize_function__MotorStatus__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_system_msgs::msg::MotorStatus, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorStatus__velocity,  // size() function pointer
    get_const_function__MotorStatus__velocity,  // get_const(index) function pointer
    get_function__MotorStatus__velocity,  // get(index) function pointer
    fetch_function__MotorStatus__velocity,  // fetch(index, &value) function pointer
    assign_function__MotorStatus__velocity,  // assign(index, value) function pointer
    resize_function__MotorStatus__velocity  // resize(index) function pointer
  },
  {
    "torque",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_system_msgs::msg::MotorStatus, torque),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorStatus__torque,  // size() function pointer
    get_const_function__MotorStatus__torque,  // get_const(index) function pointer
    get_function__MotorStatus__torque,  // get(index) function pointer
    fetch_function__MotorStatus__torque,  // fetch(index, &value) function pointer
    assign_function__MotorStatus__torque,  // assign(index, value) function pointer
    resize_function__MotorStatus__torque  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorStatus_message_members = {
  "motion_system_msgs::msg",  // message namespace
  "MotorStatus",  // message name
  9,  // number of fields
  sizeof(motion_system_msgs::msg::MotorStatus),
  false,  // has_any_key_member_
  MotorStatus_message_member_array,  // message members
  MotorStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorStatus_message_members,
  get_message_typesupport_handle_function,
  &motion_system_msgs__msg__MotorStatus__get_type_hash,
  &motion_system_msgs__msg__MotorStatus__get_type_description,
  &motion_system_msgs__msg__MotorStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace motion_system_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motion_system_msgs::msg::MotorStatus>()
{
  return &::motion_system_msgs::msg::rosidl_typesupport_introspection_cpp::MotorStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motion_system_msgs, msg, MotorStatus)() {
  return &::motion_system_msgs::msg::rosidl_typesupport_introspection_cpp::MotorStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
