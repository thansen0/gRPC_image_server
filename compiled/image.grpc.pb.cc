// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: image.proto

#include "image.pb.h"
#include "image.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* NLImageService_method_names[] = {
  "/NLImageService/RotateImage",
  "/NLImageService/CustomImageEndpoint",
  "/NLImageService/MedianBlurFilter",
};

std::unique_ptr< NLImageService::Stub> NLImageService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< NLImageService::Stub> stub(new NLImageService::Stub(channel));
  return stub;
}

NLImageService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_RotateImage_(NLImageService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CustomImageEndpoint_(NLImageService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_MedianBlurFilter_(NLImageService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status NLImageService::Stub::RotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::NLImage* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RotateImage_, context, request, response);
}

void NLImageService::Stub::experimental_async::RotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest* request, ::NLImage* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RotateImage_, context, request, response, std::move(f));
}

void NLImageService::Stub::experimental_async::RotateImage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLImage* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RotateImage_, context, request, response, std::move(f));
}

void NLImageService::Stub::experimental_async::RotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest* request, ::NLImage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RotateImage_, context, request, response, reactor);
}

void NLImageService::Stub::experimental_async::RotateImage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLImage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RotateImage_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::NLImage>* NLImageService::Stub::AsyncRotateImageRaw(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::NLImage>::Create(channel_.get(), cq, rpcmethod_RotateImage_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::NLImage>* NLImageService::Stub::PrepareAsyncRotateImageRaw(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::NLImage>::Create(channel_.get(), cq, rpcmethod_RotateImage_, context, request, false);
}

::grpc::Status NLImageService::Stub::CustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::NLCustomImageEndpointResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CustomImageEndpoint_, context, request, response);
}

void NLImageService::Stub::experimental_async::CustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CustomImageEndpoint_, context, request, response, std::move(f));
}

void NLImageService::Stub::experimental_async::CustomImageEndpoint(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLCustomImageEndpointResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CustomImageEndpoint_, context, request, response, std::move(f));
}

void NLImageService::Stub::experimental_async::CustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CustomImageEndpoint_, context, request, response, reactor);
}

void NLImageService::Stub::experimental_async::CustomImageEndpoint(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLCustomImageEndpointResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CustomImageEndpoint_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::NLCustomImageEndpointResponse>* NLImageService::Stub::AsyncCustomImageEndpointRaw(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::NLCustomImageEndpointResponse>::Create(channel_.get(), cq, rpcmethod_CustomImageEndpoint_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::NLCustomImageEndpointResponse>* NLImageService::Stub::PrepareAsyncCustomImageEndpointRaw(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::NLCustomImageEndpointResponse>::Create(channel_.get(), cq, rpcmethod_CustomImageEndpoint_, context, request, false);
}

::grpc::Status NLImageService::Stub::MedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::NLImage* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_MedianBlurFilter_, context, request, response);
}

void NLImageService::Stub::experimental_async::MedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_MedianBlurFilter_, context, request, response, std::move(f));
}

void NLImageService::Stub::experimental_async::MedianBlurFilter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLImage* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_MedianBlurFilter_, context, request, response, std::move(f));
}

void NLImageService::Stub::experimental_async::MedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_MedianBlurFilter_, context, request, response, reactor);
}

void NLImageService::Stub::experimental_async::MedianBlurFilter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLImage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_MedianBlurFilter_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::NLImage>* NLImageService::Stub::AsyncMedianBlurFilterRaw(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::NLImage>::Create(channel_.get(), cq, rpcmethod_MedianBlurFilter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::NLImage>* NLImageService::Stub::PrepareAsyncMedianBlurFilterRaw(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::NLImage>::Create(channel_.get(), cq, rpcmethod_MedianBlurFilter_, context, request, false);
}

NLImageService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NLImageService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NLImageService::Service, ::NLImageRotateRequest, ::NLImage>(
          std::mem_fn(&NLImageService::Service::RotateImage), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NLImageService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NLImageService::Service, ::NLCustomImageEndpointRequest, ::NLCustomImageEndpointResponse>(
          std::mem_fn(&NLImageService::Service::CustomImageEndpoint), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NLImageService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NLImageService::Service, ::NLBlurImageEndpointRequest, ::NLImage>(
          std::mem_fn(&NLImageService::Service::MedianBlurFilter), this)));
}

NLImageService::Service::~Service() {
}

::grpc::Status NLImageService::Service::RotateImage(::grpc::ServerContext* context, const ::NLImageRotateRequest* request, ::NLImage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NLImageService::Service::CustomImageEndpoint(::grpc::ServerContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NLImageService::Service::MedianBlurFilter(::grpc::ServerContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


