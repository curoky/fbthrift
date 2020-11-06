/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/conformance/cpp2/ThriftTypeInfo.h>

#include <folly/portability/GTest.h>
#include <thrift/conformance/cpp2/Protocol.h>
#include <thrift/conformance/cpp2/Testing.h>

namespace apache::thrift::conformance {
namespace {

TEST(ThriftTypeInfoTest, ValidateThriftTypeInfo) {
  const auto bad = "foo.com:42/my/typeInfo";
  const auto good1 = "foo.com/my/typeInfo";
  const auto good2 = "foo.com/my/other-typeInfo";
  ThriftTypeInfo typeInfo;
  EXPECT_THROW(validateThriftTypeInfo(typeInfo), std::invalid_argument);
  typeInfo.name_ref() = good1;
  validateThriftTypeInfo(typeInfo);
  typeInfo.aliases_ref()->emplace(good2);
  validateThriftTypeInfo(typeInfo);
  typeInfo.set_typeIdBytes(kMinTypeIdBytes);
  validateThriftTypeInfo(typeInfo);
  typeInfo.set_typeIdBytes(32);
  validateThriftTypeInfo(typeInfo);

  {
    ThriftTypeInfo badType(typeInfo);
    badType.set_name(bad);
    EXPECT_THROW(validateThriftTypeInfo(badType), std::invalid_argument);
  }

  {
    ThriftTypeInfo badType(typeInfo);
    badType.aliases_ref()->emplace(good1); // Duplicate name.
    EXPECT_THROW(validateThriftTypeInfo(badType), std::invalid_argument);
  }
  {
    ThriftTypeInfo badType(typeInfo);
    badType.aliases_ref()->emplace(bad);
    EXPECT_THROW(validateThriftTypeInfo(badType), std::invalid_argument);
  }

  {
    ThriftTypeInfo badType(typeInfo);
    badType.set_typeIdBytes(1);
    EXPECT_THROW(validateThriftTypeInfo(badType), std::invalid_argument);
  }

  {
    ThriftTypeInfo badType(typeInfo);
    badType.set_typeIdBytes(64);
    EXPECT_THROW(validateThriftTypeInfo(badType), std::invalid_argument);
  }
}

} // namespace
} // namespace apache::thrift::conformance