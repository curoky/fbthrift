/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::a::different::ns::AnEnum> {
  using type = ::a::different::ns::AnEnum;
  static constexpr const std::size_t size = 2;
  static constexpr const std::array<type, size> values = {{
    type::FIELDA,
    type::FIELDB,
  }};
  static constexpr const std::array<folly::StringPiece, size> names = {{
    "FIELDA",
    "FIELDB",
  }};
};

}} // apache::thrift
