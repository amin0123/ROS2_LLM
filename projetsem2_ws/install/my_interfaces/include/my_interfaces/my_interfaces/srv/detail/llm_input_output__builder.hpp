// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/LlmInputOutput.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__LLM_INPUT_OUTPUT__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__LLM_INPUT_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/llm_input_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_LlmInputOutput_Request_input
{
public:
  Init_LlmInputOutput_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::LlmInputOutput_Request input(::my_interfaces::srv::LlmInputOutput_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::LlmInputOutput_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::LlmInputOutput_Request>()
{
  return my_interfaces::srv::builder::Init_LlmInputOutput_Request_input();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_LlmInputOutput_Response_output
{
public:
  Init_LlmInputOutput_Response_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::LlmInputOutput_Response output(::my_interfaces::srv::LlmInputOutput_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::LlmInputOutput_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::LlmInputOutput_Response>()
{
  return my_interfaces::srv::builder::Init_LlmInputOutput_Response_output();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__LLM_INPUT_OUTPUT__BUILDER_HPP_
