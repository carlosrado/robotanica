// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interface:msg/Distvel.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__STRUCT_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interface__msg__Distvel __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface__msg__Distvel __declspec(deprecated)
#endif

namespace custom_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Distvel_
{
  using Type = Distvel_<ContainerAllocator>;

  explicit Distvel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distancia = 0ll;
      this->velocidad = 0.0;
    }
  }

  explicit Distvel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distancia = 0ll;
      this->velocidad = 0.0;
    }
  }

  // field types and members
  using _distancia_type =
    int64_t;
  _distancia_type distancia;
  using _velocidad_type =
    double;
  _velocidad_type velocidad;

  // setters for named parameter idiom
  Type & set__distancia(
    const int64_t & _arg)
  {
    this->distancia = _arg;
    return *this;
  }
  Type & set__velocidad(
    const double & _arg)
  {
    this->velocidad = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface::msg::Distvel_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface::msg::Distvel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface::msg::Distvel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface::msg::Distvel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface::msg::Distvel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface::msg::Distvel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface::msg::Distvel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface::msg::Distvel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface::msg::Distvel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface::msg::Distvel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface__msg__Distvel
    std::shared_ptr<custom_interface::msg::Distvel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface__msg__Distvel
    std::shared_ptr<custom_interface::msg::Distvel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distvel_ & other) const
  {
    if (this->distancia != other.distancia) {
      return false;
    }
    if (this->velocidad != other.velocidad) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distvel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distvel_

// alias to use template instance with default allocator
using Distvel =
  custom_interface::msg::Distvel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__STRUCT_HPP_
