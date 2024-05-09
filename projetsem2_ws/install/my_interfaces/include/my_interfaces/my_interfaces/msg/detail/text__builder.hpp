// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/Text.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__TEXT__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__TEXT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/text__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_Text_txt
{
public:
  Init_Text_txt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::msg::Text txt(::my_interfaces::msg::Text::_txt_type arg)
  {
    msg_.txt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::Text msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::Text>()
{
  return my_interfaces::msg::builder::Init_Text_txt();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__TEXT__BUILDER_HPP_
