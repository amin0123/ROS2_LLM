// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_messages:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MESSAGES__MSG__DETAIL__AUDIO_INFO__BUILDER_HPP_
#define AUDIO_MESSAGES__MSG__DETAIL__AUDIO_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_messages/msg/detail/audio_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_messages
{

namespace msg
{

namespace builder
{

class Init_AudioInfo_uuid
{
public:
  explicit Init_AudioInfo_uuid(::audio_messages::msg::AudioInfo & msg)
  : msg_(msg)
  {}
  ::audio_messages::msg::AudioInfo uuid(::audio_messages::msg::AudioInfo::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_messages::msg::AudioInfo msg_;
};

class Init_AudioInfo_subtype
{
public:
  explicit Init_AudioInfo_subtype(::audio_messages::msg::AudioInfo & msg)
  : msg_(msg)
  {}
  Init_AudioInfo_uuid subtype(::audio_messages::msg::AudioInfo::_subtype_type arg)
  {
    msg_.subtype = std::move(arg);
    return Init_AudioInfo_uuid(msg_);
  }

private:
  ::audio_messages::msg::AudioInfo msg_;
};

class Init_AudioInfo_sample_rate
{
public:
  explicit Init_AudioInfo_sample_rate(::audio_messages::msg::AudioInfo & msg)
  : msg_(msg)
  {}
  Init_AudioInfo_subtype sample_rate(::audio_messages::msg::AudioInfo::_sample_rate_type arg)
  {
    msg_.sample_rate = std::move(arg);
    return Init_AudioInfo_subtype(msg_);
  }

private:
  ::audio_messages::msg::AudioInfo msg_;
};

class Init_AudioInfo_num_channels
{
public:
  Init_AudioInfo_num_channels()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioInfo_sample_rate num_channels(::audio_messages::msg::AudioInfo::_num_channels_type arg)
  {
    msg_.num_channels = std::move(arg);
    return Init_AudioInfo_sample_rate(msg_);
  }

private:
  ::audio_messages::msg::AudioInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_messages::msg::AudioInfo>()
{
  return audio_messages::msg::builder::Init_AudioInfo_num_channels();
}

}  // namespace audio_messages

#endif  // AUDIO_MESSAGES__MSG__DETAIL__AUDIO_INFO__BUILDER_HPP_
