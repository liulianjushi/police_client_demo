// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CrowdCountAPI.proto

#include "CrowdCountAPI.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_common_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_common_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_BoundingBox;
}  // namespace protobuf_common_2eproto
namespace crowdcount {
class crowdCountRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<crowdCountRequest>
      _instance;
} _crowdCountRequest_default_instance_;
class crowdCountResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<crowdCountResponse>
      _instance;
} _crowdCountResponse_default_instance_;
}  // namespace crowdcount
namespace protobuf_CrowdCountAPI_2eproto {
static void InitDefaultscrowdCountRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::crowdcount::_crowdCountRequest_default_instance_;
    new (ptr) ::crowdcount::crowdCountRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::crowdcount::crowdCountRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_crowdCountRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultscrowdCountRequest}, {
      &protobuf_common_2eproto::scc_info_BoundingBox.base,}};

static void InitDefaultscrowdCountResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::crowdcount::_crowdCountResponse_default_instance_;
    new (ptr) ::crowdcount::crowdCountResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::crowdcount::crowdCountResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_crowdCountResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultscrowdCountResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_crowdCountRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_crowdCountResponse.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::crowdcount::crowdCountRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::crowdcount::crowdCountRequest, rawdata_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::crowdcount::crowdCountRequest, rect_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::crowdcount::crowdCountRequest, width_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::crowdcount::crowdCountRequest, hight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::crowdcount::crowdCountRequest, channel_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::crowdcount::crowdCountResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::crowdcount::crowdCountResponse, rectnum_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::crowdcount::crowdCountRequest)},
  { 10, -1, sizeof(::crowdcount::crowdCountResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::crowdcount::_crowdCountRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::crowdcount::_crowdCountResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "CrowdCountAPI.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\023CrowdCountAPI.proto\022\ncrowdcount\032\014commo"
      "n.proto\"v\n\021crowdCountRequest\022\017\n\007rawData\030"
      "\001 \001(\014\022!\n\004Rect\030\002 \001(\0132\023.common.BoundingBox"
      "\022\r\n\005Width\030\003 \001(\005\022\r\n\005Hight\030\004 \001(\005\022\017\n\007Channe"
      "l\030\005 \001(\005\"%\n\022crowdCountResponse\022\017\n\007rectNum"
      "\030\001 \001(\0052^\n\rCrowdCountAPI\022M\n\ncrowdCount\022\035."
      "crowdcount.crowdCountRequest\032\036.crowdcoun"
      "t.crowdCountResponse\"\000b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 310);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CrowdCountAPI.proto", &protobuf_RegisterTypes);
  ::protobuf_common_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_CrowdCountAPI_2eproto
namespace crowdcount {

// ===================================================================

void crowdCountRequest::InitAsDefaultInstance() {
  ::crowdcount::_crowdCountRequest_default_instance_._instance.get_mutable()->rect_ = const_cast< ::common::BoundingBox*>(
      ::common::BoundingBox::internal_default_instance());
}
void crowdCountRequest::clear_rect() {
  if (GetArenaNoVirtual() == NULL && rect_ != NULL) {
    delete rect_;
  }
  rect_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int crowdCountRequest::kRawDataFieldNumber;
const int crowdCountRequest::kRectFieldNumber;
const int crowdCountRequest::kWidthFieldNumber;
const int crowdCountRequest::kHightFieldNumber;
const int crowdCountRequest::kChannelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

crowdCountRequest::crowdCountRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_CrowdCountAPI_2eproto::scc_info_crowdCountRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:crowdcount.crowdCountRequest)
}
crowdCountRequest::crowdCountRequest(const crowdCountRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  rawdata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.rawdata().size() > 0) {
    rawdata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.rawdata_);
  }
  if (from.has_rect()) {
    rect_ = new ::common::BoundingBox(*from.rect_);
  } else {
    rect_ = NULL;
  }
  ::memcpy(&width_, &from.width_,
    static_cast<size_t>(reinterpret_cast<char*>(&channel_) -
    reinterpret_cast<char*>(&width_)) + sizeof(channel_));
  // @@protoc_insertion_point(copy_constructor:crowdcount.crowdCountRequest)
}

void crowdCountRequest::SharedCtor() {
  rawdata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&rect_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&channel_) -
      reinterpret_cast<char*>(&rect_)) + sizeof(channel_));
}

crowdCountRequest::~crowdCountRequest() {
  // @@protoc_insertion_point(destructor:crowdcount.crowdCountRequest)
  SharedDtor();
}

void crowdCountRequest::SharedDtor() {
  rawdata_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete rect_;
}

void crowdCountRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* crowdCountRequest::descriptor() {
  ::protobuf_CrowdCountAPI_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_CrowdCountAPI_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const crowdCountRequest& crowdCountRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_CrowdCountAPI_2eproto::scc_info_crowdCountRequest.base);
  return *internal_default_instance();
}


void crowdCountRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:crowdcount.crowdCountRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  rawdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && rect_ != NULL) {
    delete rect_;
  }
  rect_ = NULL;
  ::memset(&width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&channel_) -
      reinterpret_cast<char*>(&width_)) + sizeof(channel_));
  _internal_metadata_.Clear();
}

bool crowdCountRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:crowdcount.crowdCountRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes rawData = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_rawdata()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .common.BoundingBox Rect = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_rect()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 Width = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &width_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 Hight = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hight_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 Channel = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &channel_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:crowdcount.crowdCountRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:crowdcount.crowdCountRequest)
  return false;
#undef DO_
}

void crowdCountRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:crowdcount.crowdCountRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes rawData = 1;
  if (this->rawdata().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->rawdata(), output);
  }

  // .common.BoundingBox Rect = 2;
  if (this->has_rect()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_rect(), output);
  }

  // int32 Width = 3;
  if (this->width() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->width(), output);
  }

  // int32 Hight = 4;
  if (this->hight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->hight(), output);
  }

  // int32 Channel = 5;
  if (this->channel() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->channel(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:crowdcount.crowdCountRequest)
}

::google::protobuf::uint8* crowdCountRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:crowdcount.crowdCountRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes rawData = 1;
  if (this->rawdata().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->rawdata(), target);
  }

  // .common.BoundingBox Rect = 2;
  if (this->has_rect()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_rect(), deterministic, target);
  }

  // int32 Width = 3;
  if (this->width() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->width(), target);
  }

  // int32 Hight = 4;
  if (this->hight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->hight(), target);
  }

  // int32 Channel = 5;
  if (this->channel() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->channel(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:crowdcount.crowdCountRequest)
  return target;
}

size_t crowdCountRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:crowdcount.crowdCountRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes rawData = 1;
  if (this->rawdata().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->rawdata());
  }

  // .common.BoundingBox Rect = 2;
  if (this->has_rect()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *rect_);
  }

  // int32 Width = 3;
  if (this->width() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->width());
  }

  // int32 Hight = 4;
  if (this->hight() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->hight());
  }

  // int32 Channel = 5;
  if (this->channel() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->channel());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void crowdCountRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:crowdcount.crowdCountRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const crowdCountRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const crowdCountRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:crowdcount.crowdCountRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:crowdcount.crowdCountRequest)
    MergeFrom(*source);
  }
}

void crowdCountRequest::MergeFrom(const crowdCountRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:crowdcount.crowdCountRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.rawdata().size() > 0) {

    rawdata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.rawdata_);
  }
  if (from.has_rect()) {
    mutable_rect()->::common::BoundingBox::MergeFrom(from.rect());
  }
  if (from.width() != 0) {
    set_width(from.width());
  }
  if (from.hight() != 0) {
    set_hight(from.hight());
  }
  if (from.channel() != 0) {
    set_channel(from.channel());
  }
}

void crowdCountRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:crowdcount.crowdCountRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void crowdCountRequest::CopyFrom(const crowdCountRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:crowdcount.crowdCountRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool crowdCountRequest::IsInitialized() const {
  return true;
}

void crowdCountRequest::Swap(crowdCountRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void crowdCountRequest::InternalSwap(crowdCountRequest* other) {
  using std::swap;
  rawdata_.Swap(&other->rawdata_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(rect_, other->rect_);
  swap(width_, other->width_);
  swap(hight_, other->hight_);
  swap(channel_, other->channel_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata crowdCountRequest::GetMetadata() const {
  protobuf_CrowdCountAPI_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_CrowdCountAPI_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void crowdCountResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int crowdCountResponse::kRectNumFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

crowdCountResponse::crowdCountResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_CrowdCountAPI_2eproto::scc_info_crowdCountResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:crowdcount.crowdCountResponse)
}
crowdCountResponse::crowdCountResponse(const crowdCountResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  rectnum_ = from.rectnum_;
  // @@protoc_insertion_point(copy_constructor:crowdcount.crowdCountResponse)
}

void crowdCountResponse::SharedCtor() {
  rectnum_ = 0;
}

crowdCountResponse::~crowdCountResponse() {
  // @@protoc_insertion_point(destructor:crowdcount.crowdCountResponse)
  SharedDtor();
}

void crowdCountResponse::SharedDtor() {
}

void crowdCountResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* crowdCountResponse::descriptor() {
  ::protobuf_CrowdCountAPI_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_CrowdCountAPI_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const crowdCountResponse& crowdCountResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_CrowdCountAPI_2eproto::scc_info_crowdCountResponse.base);
  return *internal_default_instance();
}


void crowdCountResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:crowdcount.crowdCountResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  rectnum_ = 0;
  _internal_metadata_.Clear();
}

bool crowdCountResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:crowdcount.crowdCountResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 rectNum = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rectnum_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:crowdcount.crowdCountResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:crowdcount.crowdCountResponse)
  return false;
#undef DO_
}

void crowdCountResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:crowdcount.crowdCountResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 rectNum = 1;
  if (this->rectnum() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->rectnum(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:crowdcount.crowdCountResponse)
}

::google::protobuf::uint8* crowdCountResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:crowdcount.crowdCountResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 rectNum = 1;
  if (this->rectnum() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->rectnum(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:crowdcount.crowdCountResponse)
  return target;
}

size_t crowdCountResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:crowdcount.crowdCountResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 rectNum = 1;
  if (this->rectnum() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->rectnum());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void crowdCountResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:crowdcount.crowdCountResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const crowdCountResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const crowdCountResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:crowdcount.crowdCountResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:crowdcount.crowdCountResponse)
    MergeFrom(*source);
  }
}

void crowdCountResponse::MergeFrom(const crowdCountResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:crowdcount.crowdCountResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.rectnum() != 0) {
    set_rectnum(from.rectnum());
  }
}

void crowdCountResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:crowdcount.crowdCountResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void crowdCountResponse::CopyFrom(const crowdCountResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:crowdcount.crowdCountResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool crowdCountResponse::IsInitialized() const {
  return true;
}

void crowdCountResponse::Swap(crowdCountResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void crowdCountResponse::InternalSwap(crowdCountResponse* other) {
  using std::swap;
  swap(rectnum_, other->rectnum_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata crowdCountResponse::GetMetadata() const {
  protobuf_CrowdCountAPI_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_CrowdCountAPI_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace crowdcount
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::crowdcount::crowdCountRequest* Arena::CreateMaybeMessage< ::crowdcount::crowdCountRequest >(Arena* arena) {
  return Arena::CreateInternal< ::crowdcount::crowdCountRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::crowdcount::crowdCountResponse* Arena::CreateMaybeMessage< ::crowdcount::crowdCountResponse >(Arena* arena) {
  return Arena::CreateInternal< ::crowdcount::crowdCountResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)