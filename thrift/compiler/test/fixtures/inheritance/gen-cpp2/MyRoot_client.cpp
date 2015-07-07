/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "MyRoot.h"

#include "MyRoot.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

const char* MyRootAsyncClient::getServiceName() {
  return "MyRoot";
}

void MyRootAsyncClient::do_root(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  do_root(rpcOptions, std::move(callback));
}

void MyRootAsyncClient::do_root(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      do_rootT(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      do_rootT(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void MyRootAsyncClient::sync_do_root() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_do_root(rpcOptions);
}

void MyRootAsyncClient::sync_do_root(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  std::unique_ptr<apache::thrift::RequestCallback> callback0(new apache::thrift::ClientSyncCallback(&_returnState, getChannel()->getEventBase(), false));
  do_root(rpcOptions, std::move(callback0));
  getChannel()->getEventBase()->loopForever();
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_do_root(_returnState);
}

folly::Future<folly::Unit> MyRootAsyncClient::future_do_root() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_do_root(rpcOptions);
}

folly::Future<folly::Unit> MyRootAsyncClient::future_do_root(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> promise1;
  auto future2 = promise1.getFuture();
  std::unique_ptr<apache::thrift::RequestCallback> callback3(new apache::thrift::FutureCallback<folly::Unit>(std::move(promise1), recv_wrapped_do_root));
  do_root(rpcOptions, std::move(callback3));
  return std::move(future2);
}

void MyRootAsyncClient::do_root(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  do_root(std::unique_ptr<apache::thrift::RequestCallback>(new apache::thrift::FunctionReplyCallback(std::move(callback))));
}

folly::exception_wrapper MyRootAsyncClient::recv_wrapped_do_root(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_do_rootT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_do_rootT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyRootAsyncClient::recv_do_root(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_do_root(state);
  if (ew) {
    ew.throwException();
  }
}

void MyRootAsyncClient::recv_instance_do_root(::apache::thrift::ClientReceiveState& state) {
  recv_do_root(state);
}

folly::exception_wrapper MyRootAsyncClient::recv_instance_wrapped_do_root(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_do_root(state);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift