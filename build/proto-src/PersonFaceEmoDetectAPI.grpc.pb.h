// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: PersonFaceEmoDetectAPI.proto
#ifndef GRPC_PersonFaceEmoDetectAPI_2eproto__INCLUDED
#define GRPC_PersonFaceEmoDetectAPI_2eproto__INCLUDED

#include "PersonFaceEmoDetectAPI.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace personfaceemodetect {

class PersonFaceEmoDetectAPI final {
 public:
  static constexpr char const* service_full_name() {
    return "personfaceemodetect.PersonFaceEmoDetectAPI";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status personFaceEmoDetect(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::personfaceemodetect::personFaceEmoDetectResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::personfaceemodetect::personFaceEmoDetectResponse>> AsyncpersonFaceEmoDetect(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::personfaceemodetect::personFaceEmoDetectResponse>>(AsyncpersonFaceEmoDetectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::personfaceemodetect::personFaceEmoDetectResponse>> PrepareAsyncpersonFaceEmoDetect(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::personfaceemodetect::personFaceEmoDetectResponse>>(PrepareAsyncpersonFaceEmoDetectRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void personFaceEmoDetect(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest* request, ::personfaceemodetect::personFaceEmoDetectResponse* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::personfaceemodetect::personFaceEmoDetectResponse>* AsyncpersonFaceEmoDetectRaw(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::personfaceemodetect::personFaceEmoDetectResponse>* PrepareAsyncpersonFaceEmoDetectRaw(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status personFaceEmoDetect(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::personfaceemodetect::personFaceEmoDetectResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::personfaceemodetect::personFaceEmoDetectResponse>> AsyncpersonFaceEmoDetect(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::personfaceemodetect::personFaceEmoDetectResponse>>(AsyncpersonFaceEmoDetectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::personfaceemodetect::personFaceEmoDetectResponse>> PrepareAsyncpersonFaceEmoDetect(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::personfaceemodetect::personFaceEmoDetectResponse>>(PrepareAsyncpersonFaceEmoDetectRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void personFaceEmoDetect(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest* request, ::personfaceemodetect::personFaceEmoDetectResponse* response, std::function<void(::grpc::Status)>) override;
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
    ::grpc::ClientAsyncResponseReader< ::personfaceemodetect::personFaceEmoDetectResponse>* AsyncpersonFaceEmoDetectRaw(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::personfaceemodetect::personFaceEmoDetectResponse>* PrepareAsyncpersonFaceEmoDetectRaw(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_personFaceEmoDetect_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status personFaceEmoDetect(::grpc::ServerContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest* request, ::personfaceemodetect::personFaceEmoDetectResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_personFaceEmoDetect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_personFaceEmoDetect() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_personFaceEmoDetect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status personFaceEmoDetect(::grpc::ServerContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest* request, ::personfaceemodetect::personFaceEmoDetectResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestpersonFaceEmoDetect(::grpc::ServerContext* context, ::personfaceemodetect::personFaceEmoDetectRequest* request, ::grpc::ServerAsyncResponseWriter< ::personfaceemodetect::personFaceEmoDetectResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_personFaceEmoDetect<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_personFaceEmoDetect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_personFaceEmoDetect() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithCallbackMethod_personFaceEmoDetect<BaseClass>, ::personfaceemodetect::personFaceEmoDetectRequest, ::personfaceemodetect::personFaceEmoDetectResponse>(
          [this](::grpc::ServerContext* context,
                 const ::personfaceemodetect::personFaceEmoDetectRequest* request,
                 ::personfaceemodetect::personFaceEmoDetectResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->personFaceEmoDetect(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithCallbackMethod_personFaceEmoDetect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status personFaceEmoDetect(::grpc::ServerContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest* request, ::personfaceemodetect::personFaceEmoDetectResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void personFaceEmoDetect(::grpc::ServerContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest* request, ::personfaceemodetect::personFaceEmoDetectResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_personFaceEmoDetect<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_personFaceEmoDetect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_personFaceEmoDetect() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_personFaceEmoDetect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status personFaceEmoDetect(::grpc::ServerContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest* request, ::personfaceemodetect::personFaceEmoDetectResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_personFaceEmoDetect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_personFaceEmoDetect() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_personFaceEmoDetect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status personFaceEmoDetect(::grpc::ServerContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest* request, ::personfaceemodetect::personFaceEmoDetectResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestpersonFaceEmoDetect(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_personFaceEmoDetect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_personFaceEmoDetect() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithRawCallbackMethod_personFaceEmoDetect<BaseClass>, ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->personFaceEmoDetect(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithRawCallbackMethod_personFaceEmoDetect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status personFaceEmoDetect(::grpc::ServerContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest* request, ::personfaceemodetect::personFaceEmoDetectResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void personFaceEmoDetect(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_personFaceEmoDetect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_personFaceEmoDetect() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::personfaceemodetect::personFaceEmoDetectRequest, ::personfaceemodetect::personFaceEmoDetectResponse>(std::bind(&WithStreamedUnaryMethod_personFaceEmoDetect<BaseClass>::StreamedpersonFaceEmoDetect, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_personFaceEmoDetect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status personFaceEmoDetect(::grpc::ServerContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest* request, ::personfaceemodetect::personFaceEmoDetectResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedpersonFaceEmoDetect(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::personfaceemodetect::personFaceEmoDetectRequest,::personfaceemodetect::personFaceEmoDetectResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_personFaceEmoDetect<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_personFaceEmoDetect<Service > StreamedService;
};

}  // namespace personfaceemodetect


#endif  // GRPC_PersonFaceEmoDetectAPI_2eproto__INCLUDED
