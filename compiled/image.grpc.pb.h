// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: image.proto
#ifndef GRPC_image_2eproto__INCLUDED
#define GRPC_image_2eproto__INCLUDED

#include "image.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc_impl {
class CompletionQueue;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc_impl

namespace grpc {
namespace experimental {
template <typename RequestT, typename ResponseT>
class MessageAllocator;
}  // namespace experimental
}  // namespace grpc

class NLImageService final {
 public:
  static constexpr char const* service_full_name() {
    return "NLImageService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status RotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::NLImage* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NLImage>> AsyncRotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NLImage>>(AsyncRotateImageRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NLImage>> PrepareAsyncRotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NLImage>>(PrepareAsyncRotateImageRaw(context, request, cq));
    }
    virtual ::grpc::Status CustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::NLCustomImageEndpointResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NLCustomImageEndpointResponse>> AsyncCustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NLCustomImageEndpointResponse>>(AsyncCustomImageEndpointRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NLCustomImageEndpointResponse>> PrepareAsyncCustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NLCustomImageEndpointResponse>>(PrepareAsyncCustomImageEndpointRaw(context, request, cq));
    }
    virtual ::grpc::Status MedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::NLImage* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NLImage>> AsyncMedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NLImage>>(AsyncMedianBlurFilterRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NLImage>> PrepareAsyncMedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NLImage>>(PrepareAsyncMedianBlurFilterRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void RotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest* request, ::NLImage* response, std::function<void(::grpc::Status)>) = 0;
      virtual void RotateImage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLImage* response, std::function<void(::grpc::Status)>) = 0;
      virtual void RotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest* request, ::NLImage* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void RotateImage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLImage* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void CustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CustomImageEndpoint(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLCustomImageEndpointResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void CustomImageEndpoint(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLCustomImageEndpointResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void MedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response, std::function<void(::grpc::Status)>) = 0;
      virtual void MedianBlurFilter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLImage* response, std::function<void(::grpc::Status)>) = 0;
      virtual void MedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void MedianBlurFilter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLImage* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::NLImage>* AsyncRotateImageRaw(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::NLImage>* PrepareAsyncRotateImageRaw(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::NLCustomImageEndpointResponse>* AsyncCustomImageEndpointRaw(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::NLCustomImageEndpointResponse>* PrepareAsyncCustomImageEndpointRaw(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::NLImage>* AsyncMedianBlurFilterRaw(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::NLImage>* PrepareAsyncMedianBlurFilterRaw(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status RotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::NLImage* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NLImage>> AsyncRotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NLImage>>(AsyncRotateImageRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NLImage>> PrepareAsyncRotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NLImage>>(PrepareAsyncRotateImageRaw(context, request, cq));
    }
    ::grpc::Status CustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::NLCustomImageEndpointResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NLCustomImageEndpointResponse>> AsyncCustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NLCustomImageEndpointResponse>>(AsyncCustomImageEndpointRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NLCustomImageEndpointResponse>> PrepareAsyncCustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NLCustomImageEndpointResponse>>(PrepareAsyncCustomImageEndpointRaw(context, request, cq));
    }
    ::grpc::Status MedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::NLImage* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NLImage>> AsyncMedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NLImage>>(AsyncMedianBlurFilterRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NLImage>> PrepareAsyncMedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NLImage>>(PrepareAsyncMedianBlurFilterRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void RotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest* request, ::NLImage* response, std::function<void(::grpc::Status)>) override;
      void RotateImage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLImage* response, std::function<void(::grpc::Status)>) override;
      void RotateImage(::grpc::ClientContext* context, const ::NLImageRotateRequest* request, ::NLImage* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void RotateImage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLImage* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void CustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response, std::function<void(::grpc::Status)>) override;
      void CustomImageEndpoint(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLCustomImageEndpointResponse* response, std::function<void(::grpc::Status)>) override;
      void CustomImageEndpoint(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void CustomImageEndpoint(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLCustomImageEndpointResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void MedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response, std::function<void(::grpc::Status)>) override;
      void MedianBlurFilter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLImage* response, std::function<void(::grpc::Status)>) override;
      void MedianBlurFilter(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void MedianBlurFilter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NLImage* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::NLImage>* AsyncRotateImageRaw(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::NLImage>* PrepareAsyncRotateImageRaw(::grpc::ClientContext* context, const ::NLImageRotateRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::NLCustomImageEndpointResponse>* AsyncCustomImageEndpointRaw(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::NLCustomImageEndpointResponse>* PrepareAsyncCustomImageEndpointRaw(::grpc::ClientContext* context, const ::NLCustomImageEndpointRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::NLImage>* AsyncMedianBlurFilterRaw(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::NLImage>* PrepareAsyncMedianBlurFilterRaw(::grpc::ClientContext* context, const ::NLBlurImageEndpointRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_RotateImage_;
    const ::grpc::internal::RpcMethod rpcmethod_CustomImageEndpoint_;
    const ::grpc::internal::RpcMethod rpcmethod_MedianBlurFilter_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status RotateImage(::grpc::ServerContext* context, const ::NLImageRotateRequest* request, ::NLImage* response);
    virtual ::grpc::Status CustomImageEndpoint(::grpc::ServerContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response);
    virtual ::grpc::Status MedianBlurFilter(::grpc::ServerContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_RotateImage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_RotateImage() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_RotateImage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RotateImage(::grpc::ServerContext* context, const ::NLImageRotateRequest* request, ::NLImage* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRotateImage(::grpc::ServerContext* context, ::NLImageRotateRequest* request, ::grpc::ServerAsyncResponseWriter< ::NLImage>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CustomImageEndpoint : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CustomImageEndpoint() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_CustomImageEndpoint() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CustomImageEndpoint(::grpc::ServerContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCustomImageEndpoint(::grpc::ServerContext* context, ::NLCustomImageEndpointRequest* request, ::grpc::ServerAsyncResponseWriter< ::NLCustomImageEndpointResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_MedianBlurFilter : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_MedianBlurFilter() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_MedianBlurFilter() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MedianBlurFilter(::grpc::ServerContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestMedianBlurFilter(::grpc::ServerContext* context, ::NLBlurImageEndpointRequest* request, ::grpc::ServerAsyncResponseWriter< ::NLImage>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_RotateImage<WithAsyncMethod_CustomImageEndpoint<WithAsyncMethod_MedianBlurFilter<Service > > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_RotateImage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_RotateImage() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::NLImageRotateRequest, ::NLImage>(
          [this](::grpc::ServerContext* context,
                 const ::NLImageRotateRequest* request,
                 ::NLImage* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->RotateImage(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_RotateImage(
        ::grpc::experimental::MessageAllocator< ::NLImageRotateRequest, ::NLImage>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::NLImageRotateRequest, ::NLImage>*>(
          ::grpc::Service::experimental().GetHandler(0))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_RotateImage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RotateImage(::grpc::ServerContext* context, const ::NLImageRotateRequest* request, ::NLImage* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void RotateImage(::grpc::ServerContext* context, const ::NLImageRotateRequest* request, ::NLImage* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_CustomImageEndpoint : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_CustomImageEndpoint() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::NLCustomImageEndpointRequest, ::NLCustomImageEndpointResponse>(
          [this](::grpc::ServerContext* context,
                 const ::NLCustomImageEndpointRequest* request,
                 ::NLCustomImageEndpointResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->CustomImageEndpoint(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_CustomImageEndpoint(
        ::grpc::experimental::MessageAllocator< ::NLCustomImageEndpointRequest, ::NLCustomImageEndpointResponse>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::NLCustomImageEndpointRequest, ::NLCustomImageEndpointResponse>*>(
          ::grpc::Service::experimental().GetHandler(1))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_CustomImageEndpoint() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CustomImageEndpoint(::grpc::ServerContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void CustomImageEndpoint(::grpc::ServerContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_MedianBlurFilter : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_MedianBlurFilter() {
      ::grpc::Service::experimental().MarkMethodCallback(2,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::NLBlurImageEndpointRequest, ::NLImage>(
          [this](::grpc::ServerContext* context,
                 const ::NLBlurImageEndpointRequest* request,
                 ::NLImage* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->MedianBlurFilter(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_MedianBlurFilter(
        ::grpc::experimental::MessageAllocator< ::NLBlurImageEndpointRequest, ::NLImage>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::NLBlurImageEndpointRequest, ::NLImage>*>(
          ::grpc::Service::experimental().GetHandler(2))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_MedianBlurFilter() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MedianBlurFilter(::grpc::ServerContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void MedianBlurFilter(::grpc::ServerContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_RotateImage<ExperimentalWithCallbackMethod_CustomImageEndpoint<ExperimentalWithCallbackMethod_MedianBlurFilter<Service > > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_RotateImage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_RotateImage() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_RotateImage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RotateImage(::grpc::ServerContext* context, const ::NLImageRotateRequest* request, ::NLImage* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CustomImageEndpoint : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CustomImageEndpoint() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_CustomImageEndpoint() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CustomImageEndpoint(::grpc::ServerContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_MedianBlurFilter : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_MedianBlurFilter() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_MedianBlurFilter() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MedianBlurFilter(::grpc::ServerContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_RotateImage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_RotateImage() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_RotateImage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RotateImage(::grpc::ServerContext* context, const ::NLImageRotateRequest* request, ::NLImage* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRotateImage(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_CustomImageEndpoint : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_CustomImageEndpoint() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_CustomImageEndpoint() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CustomImageEndpoint(::grpc::ServerContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCustomImageEndpoint(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_MedianBlurFilter : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_MedianBlurFilter() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_MedianBlurFilter() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MedianBlurFilter(::grpc::ServerContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestMedianBlurFilter(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_RotateImage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_RotateImage() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->RotateImage(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_RotateImage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RotateImage(::grpc::ServerContext* context, const ::NLImageRotateRequest* request, ::NLImage* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void RotateImage(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_CustomImageEndpoint : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_CustomImageEndpoint() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->CustomImageEndpoint(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_CustomImageEndpoint() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CustomImageEndpoint(::grpc::ServerContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void CustomImageEndpoint(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_MedianBlurFilter : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_MedianBlurFilter() {
      ::grpc::Service::experimental().MarkMethodRawCallback(2,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->MedianBlurFilter(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_MedianBlurFilter() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MedianBlurFilter(::grpc::ServerContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void MedianBlurFilter(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_RotateImage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_RotateImage() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::NLImageRotateRequest, ::NLImage>(std::bind(&WithStreamedUnaryMethod_RotateImage<BaseClass>::StreamedRotateImage, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_RotateImage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status RotateImage(::grpc::ServerContext* context, const ::NLImageRotateRequest* request, ::NLImage* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedRotateImage(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::NLImageRotateRequest,::NLImage>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CustomImageEndpoint : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CustomImageEndpoint() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::NLCustomImageEndpointRequest, ::NLCustomImageEndpointResponse>(std::bind(&WithStreamedUnaryMethod_CustomImageEndpoint<BaseClass>::StreamedCustomImageEndpoint, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CustomImageEndpoint() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CustomImageEndpoint(::grpc::ServerContext* context, const ::NLCustomImageEndpointRequest* request, ::NLCustomImageEndpointResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCustomImageEndpoint(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::NLCustomImageEndpointRequest,::NLCustomImageEndpointResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_MedianBlurFilter : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_MedianBlurFilter() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::NLBlurImageEndpointRequest, ::NLImage>(std::bind(&WithStreamedUnaryMethod_MedianBlurFilter<BaseClass>::StreamedMedianBlurFilter, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_MedianBlurFilter() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status MedianBlurFilter(::grpc::ServerContext* context, const ::NLBlurImageEndpointRequest* request, ::NLImage* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedMedianBlurFilter(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::NLBlurImageEndpointRequest,::NLImage>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_RotateImage<WithStreamedUnaryMethod_CustomImageEndpoint<WithStreamedUnaryMethod_MedianBlurFilter<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_RotateImage<WithStreamedUnaryMethod_CustomImageEndpoint<WithStreamedUnaryMethod_MedianBlurFilter<Service > > > StreamedService;
};


#endif  // GRPC_image_2eproto__INCLUDED
