// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motion_system_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motion_system_msgs/msg/motor_status.hpp"


#ifndef MOTION_SYSTEM_MSGS__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
#define MOTION_SYSTEM_MSGS__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motion_system_msgs/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_interface_id'
#include "std_msgs/msg/detail/int8_multi_array__traits.hpp"

namespace motion_system_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: number_of_target_interfaces
  {
    if (msg.number_of_target_interfaces.size() == 0) {
      out << "number_of_target_interfaces: []";
    } else {
      out << "number_of_target_interfaces: [";
      size_t pending_items = msg.number_of_target_interfaces.size();
      for (auto item : msg.number_of_target_interfaces) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_interface_id
  {
    if (msg.target_interface_id.size() == 0) {
      out << "target_interface_id: []";
    } else {
      out << "target_interface_id: [";
      size_t pending_items = msg.target_interface_id.size();
      for (auto item : msg.target_interface_id) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: controller_index
  {
    if (msg.controller_index.size() == 0) {
      out << "controller_index: []";
    } else {
      out << "controller_index: [";
      size_t pending_items = msg.controller_index.size();
      for (auto item : msg.controller_index) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: controlword
  {
    if (msg.controlword.size() == 0) {
      out << "controlword: []";
    } else {
      out << "controlword: [";
      size_t pending_items = msg.controlword.size();
      for (auto item : msg.controlword) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: statusword
  {
    if (msg.statusword.size() == 0) {
      out << "statusword: []";
    } else {
      out << "statusword: [";
      size_t pending_items = msg.statusword.size();
      for (auto item : msg.statusword) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: errorcode
  {
    if (msg.errorcode.size() == 0) {
      out << "errorcode: []";
    } else {
      out << "errorcode: [";
      size_t pending_items = msg.errorcode.size();
      for (auto item : msg.errorcode) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: torque
  {
    if (msg.torque.size() == 0) {
      out << "torque: []";
    } else {
      out << "torque: [";
      size_t pending_items = msg.torque.size();
      for (auto item : msg.torque) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number_of_target_interfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.number_of_target_interfaces.size() == 0) {
      out << "number_of_target_interfaces: []\n";
    } else {
      out << "number_of_target_interfaces:\n";
      for (auto item : msg.number_of_target_interfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_interface_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_interface_id.size() == 0) {
      out << "target_interface_id: []\n";
    } else {
      out << "target_interface_id:\n";
      for (auto item : msg.target_interface_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: controller_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.controller_index.size() == 0) {
      out << "controller_index: []\n";
    } else {
      out << "controller_index:\n";
      for (auto item : msg.controller_index) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: controlword
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.controlword.size() == 0) {
      out << "controlword: []\n";
    } else {
      out << "controlword:\n";
      for (auto item : msg.controlword) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: statusword
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.statusword.size() == 0) {
      out << "statusword: []\n";
    } else {
      out << "statusword:\n";
      for (auto item : msg.statusword) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: errorcode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.errorcode.size() == 0) {
      out << "errorcode: []\n";
    } else {
      out << "errorcode:\n";
      for (auto item : msg.errorcode) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.torque.size() == 0) {
      out << "torque: []\n";
    } else {
      out << "torque:\n";
      for (auto item : msg.torque) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace motion_system_msgs

namespace rosidl_generator_traits
{

[[deprecated("use motion_system_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motion_system_msgs::msg::MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  motion_system_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motion_system_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const motion_system_msgs::msg::MotorStatus & msg)
{
  return motion_system_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<motion_system_msgs::msg::MotorStatus>()
{
  return "motion_system_msgs::msg::MotorStatus";
}

template<>
inline const char * name<motion_system_msgs::msg::MotorStatus>()
{
  return "motion_system_msgs/msg/MotorStatus";
}

template<>
struct has_fixed_size<motion_system_msgs::msg::MotorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motion_system_msgs::msg::MotorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motion_system_msgs::msg::MotorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTION_SYSTEM_MSGS__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
