// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_messages:msg/AudioData.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MESSAGES__MSG__DETAIL__AUDIO_DATA__BUILDER_HPP_
#define AUDIO_MESSAGES__MSG__DETAIL__AUDIO_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_messages/msg/detail/audio_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_messages
{

namespace msg
{

namespace builder
{

class Init_AudioData_data
{
public:
  Init_AudioData_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::audio_messages::msg::AudioData data(::audio_messages::msg::AudioData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_messages::msg::AudioData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_messages::msg::AudioData>()
{
  return audio_messages::msg::builder::Init_AudioData_data();
}

}  // namespace audio_messages

#endif  // AUDIO_MESSAGES__MSG__DETAIL__AUDIO_DATA__BUILDER_HPP_
