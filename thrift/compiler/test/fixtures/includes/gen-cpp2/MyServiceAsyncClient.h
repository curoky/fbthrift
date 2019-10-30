/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/service_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyServiceAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyService";
  }

  virtual void query(std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual void query(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
 private:
  void queryImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
 public:
  virtual void sync_query(const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual void sync_query(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual folly::Future<folly::Unit> future_query(const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual folly::SemiFuture<folly::Unit> semifuture_query(const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual folly::Future<folly::Unit> future_query(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual folly::SemiFuture<folly::Unit> semifuture_query(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_query(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_query(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  FOLLY_NODISCARD [[deprecated("To be replaced by new API soon")]] virtual folly::Try<apache::thrift::RpcResponseComplete<void>> sync_complete_query(
      apache::thrift::RpcOptions& rpcOptions,  const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_query(const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i) {
    co_await semifuture_query(s, i);
  }
#endif // FOLLY_HAS_COROUTINES
  virtual void query(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  static folly::exception_wrapper recv_wrapped_query(::apache::thrift::ClientReceiveState& state);
  static void recv_query(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_query(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_query(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void queryT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
 public:
  virtual void has_arg_docs(std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual void has_arg_docs(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
 private:
  void has_arg_docsImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
 public:
  virtual void sync_has_arg_docs(const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual void sync_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual folly::Future<folly::Unit> future_has_arg_docs(const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual folly::SemiFuture<folly::Unit> semifuture_has_arg_docs(const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual folly::Future<folly::Unit> future_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual folly::SemiFuture<folly::Unit> semifuture_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  FOLLY_NODISCARD [[deprecated("To be replaced by new API soon")]] virtual folly::Try<apache::thrift::RpcResponseComplete<void>> sync_complete_has_arg_docs(
      apache::thrift::RpcOptions& rpcOptions,  const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_has_arg_docs(const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i) {
    co_await semifuture_has_arg_docs(s, i);
  }
#endif // FOLLY_HAS_COROUTINES
  virtual void has_arg_docs(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
  static folly::exception_wrapper recv_wrapped_has_arg_docs(::apache::thrift::ClientReceiveState& state);
  static void recv_has_arg_docs(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_has_arg_docs(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_has_arg_docs(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void has_arg_docsT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i);
 public:
};

} // cpp2
