/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyRootAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> MyRoot_do_root_pargs;
typedef apache::thrift::ThriftPresult<true> MyRoot_do_root_presult;

template <typename Protocol_>
void MyRootAsyncClient::do_rootT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback) {
  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  MyRoot_do_root_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<Protocol_>(prot, rpcOptions, std::move(callback), ctx->ctx, std::move(header), channel_.get(), "do_root", writer, sizer, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE);
  ctx->reqContext.setRequestHeader(nullptr);
}



void MyRootAsyncClient::do_root(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  do_root(rpcOptions, std::move(callback));
}

void MyRootAsyncClient::do_root(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(),
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "MyRoot.do_root");
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  do_rootImpl(rpcOptions, std::move(ctx), apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext)));
}

void MyRootAsyncClient::do_rootImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      do_rootT(&writer, rpcOptions, std::move(ctx), std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      do_rootT(&writer, rpcOptions, std::move(ctx), std::move(callback));
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

void MyRootAsyncClient::sync_do_root() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_do_root(rpcOptions);
}

void MyRootAsyncClient::sync_do_root(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<false> callback(&_returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      protocolId,
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "MyRoot.do_root");
  do_rootImpl(rpcOptions, ctx, apache::thrift::RequestClientCallback::Ptr(&callback));
  callback.waitUntilDone(evb);
  _returnState.resetProtocolId(protocolId);
  _returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  recv_do_root(_returnState);
}

folly::Try<apache::thrift::RpcResponseComplete<void>>
MyRootAsyncClient::sync_complete_do_root(
    apache::thrift::RpcOptions& rpcOptions ) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  const auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* const evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      protocolId,
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "MyRoot.do_root");

  do_rootImpl(rpcOptions, ctx, apache::thrift::RequestClientCallback::Ptr(&callback) );

  callback.waitUntilDone(evb);
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));

  folly::Try<apache::thrift::RpcResponseComplete<void>> tryResponse;
  if (!returnState.buf()) {
    assert(returnState.isException());
  	tryResponse.emplaceException(std::move(returnState.exception()));
  } else {
    tryResponse.emplace();
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
  	  tryResponse->responseContext.headers = returnState.header()->releaseHeaders();
    }
    tryResponse->response = folly::makeTryWith([&] {
      return recv_do_root(returnState);
    });
  }
  return tryResponse;
}


folly::Future<folly::Unit> MyRootAsyncClient::future_do_root() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_do_root(rpcOptions);
}

folly::SemiFuture<folly::Unit> MyRootAsyncClient::semifuture_do_root() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_do_root(rpcOptions);
}

folly::Future<folly::Unit> MyRootAsyncClient::future_do_root(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_do_root, channel_);
  do_root(rpcOptions, std::move(callback));
  return _future;
}

folly::SemiFuture<folly::Unit> MyRootAsyncClient::semifuture_do_root(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_do_root, channel_);
  auto callback = std::move(callbackAndFuture.first);
  do_root(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyRootAsyncClient::header_future_do_root(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_do_root, channel_);
  do_root(rpcOptions, std::move(callback));
  return _future;
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyRootAsyncClient::header_semifuture_do_root(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_do_root, channel_);
  auto callback = std::move(callbackAndFuture.first);
  do_root(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}
void MyRootAsyncClient::do_root(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  do_root(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper MyRootAsyncClient::recv_wrapped_do_root(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyRoot_do_root_presult;
  constexpr auto const fname = "do_root";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
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
    ew.throw_exception();
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
