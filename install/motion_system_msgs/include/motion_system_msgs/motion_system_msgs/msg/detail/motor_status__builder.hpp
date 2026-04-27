// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motion_system_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_system_msgs/msg/motor_status.hpp"


#ifndef MOTION_SYSTEM_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define MOTION_SYSTEM_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motion_system_msgs/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motion_system_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_torque
{
public:
  explicit Init_MotorStatus_torque(::motion_system_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::motion_system_msgs::msg::MotorStatus torque(::motion_system_msgs::msg::MotorStatus::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motion_system_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_velocity
{
public:
  explicit Init_MotorStatus_velocity(::motion_system_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_torque velocity(::motion_system_msgs::msg::MotorStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MotorStatus_torque(msg_);
  }

private:
  ::motion_system_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_position
{
public:
  explicit Init_MotorStatus_position(::motion_system_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_velocity position(::motion_system_msgs::msg::MotorStatus::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MotorStatus_velocity(msg_);
  }

private:
  ::motion_system_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_errorcode
{
public:
  explicit Init_MotorStatus_errorcode(::motion_system_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_position errorcode(::motion_system_msgs::msg::MotorStatus::_errorcode_type arg)
  {
    msg_.errorcode = std::move(arg);
    return Init_MotorStatus_position(msg_);
  }

private:
  ::motion_system_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_statusword
{
public:
  explicit Init_MotorStatus_statusword(::motion_system_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_errorcode statusword(::motion_system_msgs::msg::MotorStatus::_statusword_type arg)
  {
    msg_.statusword = std::move(arg);
    return Init_MotorStatus_errorcode(msg_);
  }

private:
  ::motion_system_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_controlword
{
public:
  explicit Init_MotorStatus_controlword(::motion_system_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_statusword controlword(::motion_system_msgs::msg::MotorStatus::_controlword_type arg)
  {
    msg_.controlword = std::move(arg);
    return Init_MotorStatus_statusword(msg_);
  }

private:
  ::motion_system_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_controller_index
{
public:
  explicit Init_MotorStatus_controller_index(::motion_system_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_controlword controller_index(::motion_system_msgs::msg::MotorStatus::_controller_index_type arg)
  {
    msg_.controller_index = std::move(arg);
    return Init_MotorStatus_controlword(msg_);
  }

private:
  ::motion_system_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_target_interface_id
{
public:
  explicit Init_MotorStatus_target_interface_id(::motion_system_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_controller_index target_interface_id(::motion_system_msgs::msg::MotorStatus::_target_interface_id_type arg)
  {
    msg_.target_interface_id = std::move(arg);
    return Init_MotorStatus_controller_index(msg_);
  }

private:
  ::motion_system_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_number_of_target_interfaces
{
public:
  Init_MotorStatus_number_of_target_interfaces()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_target_interface_id number_of_target_interfaces(::motion_system_msgs::msg::MotorStatus::_number_of_target_interfaces_type arg)
  {
    msg_.number_of_target_interfaces = std::move(arg);
    return Init_MotorStatus_target_interface_id(msg_);
  }

private:
  ::motion_system_msgs::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motion_system_msgs::msg::MotorStatus>()
{
  return motion_system_msgs::msg::builder::Init_MotorStatus_number_of_target_interfaces();
}

}  // namespace motion_system_msgs

#endif  // MOTION_SYSTEM_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
