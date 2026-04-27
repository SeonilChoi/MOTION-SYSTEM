// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motion_system_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_system_msgs/msg/motor_status.hpp"


#ifndef MOTION_SYSTEM_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
#define MOTION_SYSTEM_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_interface_id'
#include "std_msgs/msg/detail/int8_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motion_system_msgs__msg__MotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__motion_system_msgs__msg__MotorStatus __declspec(deprecated)
#endif

namespace motion_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatus_
{
  using Type = MotorStatus_<ContainerAllocator>;

  explicit MotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _number_of_target_interfaces_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _number_of_target_interfaces_type number_of_target_interfaces;
  using _target_interface_id_type =
    std::vector<std_msgs::msg::Int8MultiArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::Int8MultiArray_<ContainerAllocator>>>;
  _target_interface_id_type target_interface_id;
  using _controller_index_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _controller_index_type controller_index;
  using _controlword_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _controlword_type controlword;
  using _statusword_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _statusword_type statusword;
  using _errorcode_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _errorcode_type errorcode;
  using _position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _position_type position;
  using _velocity_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _velocity_type velocity;
  using _torque_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _torque_type torque;

  // setters for named parameter idiom
  Type & set__number_of_target_interfaces(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->number_of_target_interfaces = _arg;
    return *this;
  }
  Type & set__target_interface_id(
    const std::vector<std_msgs::msg::Int8MultiArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::Int8MultiArray_<ContainerAllocator>>> & _arg)
  {
    this->target_interface_id = _arg;
    return *this;
  }
  Type & set__controller_index(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->controller_index = _arg;
    return *this;
  }
  Type & set__controlword(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->controlword = _arg;
    return *this;
  }
  Type & set__statusword(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->statusword = _arg;
    return *this;
  }
  Type & set__errorcode(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->errorcode = _arg;
    return *this;
  }
  Type & set__position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__torque(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motion_system_msgs::msg::MotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const motion_system_msgs::msg::MotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motion_system_msgs::msg::MotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motion_system_msgs::msg::MotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motion_system_msgs::msg::MotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motion_system_msgs::msg::MotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motion_system_msgs::msg::MotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motion_system_msgs::msg::MotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motion_system_msgs::msg::MotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motion_system_msgs::msg::MotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motion_system_msgs__msg__MotorStatus
    std::shared_ptr<motion_system_msgs::msg::MotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motion_system_msgs__msg__MotorStatus
    std::shared_ptr<motion_system_msgs::msg::MotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatus_ & other) const
  {
    if (this->number_of_target_interfaces != other.number_of_target_interfaces) {
      return false;
    }
    if (this->target_interface_id != other.target_interface_id) {
      return false;
    }
    if (this->controller_index != other.controller_index) {
      return false;
    }
    if (this->controlword != other.controlword) {
      return false;
    }
    if (this->statusword != other.statusword) {
      return false;
    }
    if (this->errorcode != other.errorcode) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatus_

// alias to use template instance with default allocator
using MotorStatus =
  motion_system_msgs::msg::MotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motion_system_msgs

#endif  // MOTION_SYSTEM_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
