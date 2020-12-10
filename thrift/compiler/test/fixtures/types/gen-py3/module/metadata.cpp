/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "src/gen-py3/module/metadata.h"

#include <thrift/lib/py3/metadata.h>

namespace apache {
namespace thrift {
namespace fixtures {
namespace types {
::apache::thrift::metadata::ThriftMetadata module_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftMetadata metadata;
  ::apache::thrift::metadata::ThriftServiceContext serviceContext;
  ::apache::thrift::detail::md::EnumMetadata<has_bitwise_ops>::gen(metadata);
  ::apache::thrift::detail::md::EnumMetadata<is_unscoped>::gen(metadata);
  ::apache::thrift::detail::md::EnumMetadata<MyForwardRefEnum>::gen(metadata);
  ::apache::thrift::detail::md::EnumMetadata<MyEnumA>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<decorated_struct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ContainerStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<CppTypeStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<VirtualStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<MyStructWithForwardRefEnum>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<TrivialNumeric>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<TrivialNestedWithDefault>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ComplexString>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ComplexNestedWithDefault>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<MinPadding>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<MyStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<MyDataItem>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Renaming>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<AnnotatedTypes>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ForwardUsageRoot>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ForwardUsageStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ForwardUsageByRef>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<NoexceptMoveEmpty>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<NoexceptMoveSimpleStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<NoexceptMoveComplexStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<NoExceptMoveUnion>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<AllocatorAware>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<AllocatorAware2>::gen(metadata);
  ::apache::thrift::detail::md::ServiceMetadata<SomeServiceSvIf>::gen(metadata, serviceContext);
  ::thrift::py3::extractMetadataFromServiceContext(metadata, serviceContext);
  return metadata;
}
} // namespace apache
} // namespace thrift
} // namespace fixtures
} // namespace types