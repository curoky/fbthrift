/**
 * Autogenerated by Thrift for src/enums.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>

namespace facebook { namespace ns { namespace qwerty {

}}} // facebook::ns::qwerty
namespace std {

} // std

namespace facebook { namespace ns { namespace qwerty {

}}} // facebook::ns::qwerty
namespace std {

} // std

namespace facebook { namespace ns { namespace qwerty {

}}} // facebook::ns::qwerty
namespace std {

} // std

namespace facebook { namespace ns { namespace qwerty {

}}} // facebook::ns::qwerty
namespace std {

} // std

namespace facebook { namespace ns { namespace qwerty {

}}} // facebook::ns::qwerty
namespace std {

} // std


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::facebook::ns::qwerty::SomeStruct> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace facebook { namespace ns { namespace qwerty {

template <class Protocol_>
void SomeStruct::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_fieldA:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->fieldA, _readState);
    
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.fieldA = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<SomeStruct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_fieldA;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t SomeStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SomeStruct");
  {
    xfer += prot_->serializedFieldSize("fieldA", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->fieldA);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SomeStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SomeStruct");
  {
    xfer += prot_->serializedFieldSize("fieldA", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->fieldA);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SomeStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("SomeStruct");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "fieldA", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->fieldA);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void SomeStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t SomeStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t SomeStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void SomeStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t SomeStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t SomeStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
extern template void SomeStruct::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
extern template uint32_t SomeStruct::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
extern template uint32_t SomeStruct::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
extern template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

}}} // facebook::ns::qwerty
