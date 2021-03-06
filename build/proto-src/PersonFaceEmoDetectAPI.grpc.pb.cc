// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: PersonFaceEmoDetectAPI.proto

#include "PersonFaceEmoDetectAPI.pb.h"
#include "PersonFaceEmoDetectAPI.grpc.pb.h"

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
namespace personfaceemodetect {

static const char* PersonFaceEmoDetectAPI_method_names[] = {
  "/personfaceemodetect.PersonFaceEmoDetectAPI/personFaceEmoDetect",
};

std::unique_ptr< PersonFaceEmoDetectAPI::Stub> PersonFaceEmoDetectAPI::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< PersonFaceEmoDetectAPI::Stub> stub(new PersonFaceEmoDetectAPI::Stub(channel));
  return stub;
}

PersonFaceEmoDetectAPI::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_personFaceEmoDetect_(PersonFaceEmoDetectAPI_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status PersonFaceEmoDetectAPI::Stub::personFaceEmoDetect(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::personfaceemodetect::personFaceEmoDetectResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_personFaceEmoDetect_, context, request, response);
}

void PersonFaceEmoDetectAPI::Stub::experimental_async::personFaceEmoDetect(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest* request, ::personfaceemodetect::personFaceEmoDetectResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_personFaceEmoDetect_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::personfaceemodetect::personFaceEmoDetectResponse>* PersonFaceEmoDetectAPI::Stub::AsyncpersonFaceEmoDetectRaw(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::personfaceemodetect::personFaceEmoDetectResponse>::Create(channel_.get(), cq, rpcmethod_personFaceEmoDetect_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::personfaceemodetect::personFaceEmoDetectResponse>* PersonFaceEmoDetectAPI::Stub::PrepareAsyncpersonFaceEmoDetectRaw(::grpc::ClientContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::personfaceemodetect::personFaceEmoDetectResponse>::Create(channel_.get(), cq, rpcmethod_personFaceEmoDetect_, context, request, false);
}

PersonFaceEmoDetectAPI::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PersonFaceEmoDetectAPI_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PersonFaceEmoDetectAPI::Service, ::personfaceemodetect::personFaceEmoDetectRequest, ::personfaceemodetect::personFaceEmoDetectResponse>(
          std::mem_fn(&PersonFaceEmoDetectAPI::Service::personFaceEmoDetect), this)));
}

PersonFaceEmoDetectAPI::Service::~Service() {
}

::grpc::Status PersonFaceEmoDetectAPI::Service::personFaceEmoDetect(::grpc::ServerContext* context, const ::personfaceemodetect::personFaceEmoDetectRequest* request, ::personfaceemodetect::personFaceEmoDetectResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace personfaceemodetect

