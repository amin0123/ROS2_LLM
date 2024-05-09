// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audio_messages:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MESSAGES__MSG__DETAIL__AUDIO_INFO__STRUCT_HPP_
#define AUDIO_MESSAGES__MSG__DETAIL__AUDIO_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__audio_messages__msg__AudioInfo __attribute__((deprecated))
#else
# define DEPRECATED__audio_messages__msg__AudioInfo __declspec(deprecated)
#endif

namespace audio_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioInfo_
{
  using Type = AudioInfo_<ContainerAllocator>;

  explicit AudioInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_channels = 0l;
      this->sample_rate = 0l;
      this->subtype = "";
      this->uuid = "";
    }
  }

  explicit AudioInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : subtype(_alloc),
    uuid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_channels = 0l;
      this->sample_rate = 0l;
      this->subtype = "";
      this->uuid = "";
    }
  }

  // field types and members
  using _num_channels_type =
    int32_t;
  _num_channels_type num_channels;
  using _sample_rate_type =
    int32_t;
  _sample_rate_type sample_rate;
  using _subtype_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _subtype_type subtype;
  using _uuid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uuid_type uuid;

  // setters for named parameter idiom
  Type & set__num_channels(
    const int32_t & _arg)
  {
    this->num_channels = _arg;
    return *this;
  }
  Type & set__sample_rate(
    const int32_t & _arg)
  {
    this->sample_rate = _arg;
    return *this;
  }
  Type & set__subtype(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->subtype = _arg;
    return *this;
  }
  Type & set__uuid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uuid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_messages::msg::AudioInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_messages::msg::AudioInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_messages::msg::AudioInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_messages::msg::AudioInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_messages::msg::AudioInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_messages::msg::AudioInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_messages::msg::AudioInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_messages::msg::AudioInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_messages::msg::AudioInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_messages::msg::AudioInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_messages__msg__AudioInfo
    std::shared_ptr<audio_messages::msg::AudioInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_messages__msg__AudioInfo
    std::shared_ptr<audio_messages::msg::AudioInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioInfo_ & other) const
  {
    if (this->num_channels != other.num_channels) {
      return false;
    }
    if (this->sample_rate != other.sample_rate) {
      return false;
    }
    if (this->subtype != other.subtype) {
      return false;
    }
    if (this->uuid != other.uuid) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioInfo_

// alias to use template instance with default allocator
using AudioInfo =
  audio_messages::msg::AudioInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace audio_messages

#endif  // AUDIO_MESSAGES__MSG__DETAIL__AUDIO_INFO__STRUCT_HPP_
