// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PersonFaceEmoDetectAPI.proto

#ifndef PROTOBUF_INCLUDED_PersonFaceEmoDetectAPI_2eproto
#define PROTOBUF_INCLUDED_PersonFaceEmoDetectAPI_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_PersonFaceEmoDetectAPI_2eproto 

namespace protobuf_PersonFaceEmoDetectAPI_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_PersonFaceEmoDetectAPI_2eproto
namespace personfaceemodetect {
class personFaceEmoDetectRequest;
class personFaceEmoDetectRequestDefaultTypeInternal;
extern personFaceEmoDetectRequestDefaultTypeInternal _personFaceEmoDetectRequest_default_instance_;
class personFaceEmoDetectResponse;
class personFaceEmoDetectResponseDefaultTypeInternal;
extern personFaceEmoDetectResponseDefaultTypeInternal _personFaceEmoDetectResponse_default_instance_;
}  // namespace personfaceemodetect
namespace google {
namespace protobuf {
template<> ::personfaceemodetect::personFaceEmoDetectRequest* Arena::CreateMaybeMessage<::personfaceemodetect::personFaceEmoDetectRequest>(Arena*);
template<> ::personfaceemodetect::personFaceEmoDetectResponse* Arena::CreateMaybeMessage<::personfaceemodetect::personFaceEmoDetectResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace personfaceemodetect {

// ===================================================================

class personFaceEmoDetectRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:personfaceemodetect.personFaceEmoDetectRequest) */ {
 public:
  personFaceEmoDetectRequest();
  virtual ~personFaceEmoDetectRequest();

  personFaceEmoDetectRequest(const personFaceEmoDetectRequest& from);

  inline personFaceEmoDetectRequest& operator=(const personFaceEmoDetectRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  personFaceEmoDetectRequest(personFaceEmoDetectRequest&& from) noexcept
    : personFaceEmoDetectRequest() {
    *this = ::std::move(from);
  }

  inline personFaceEmoDetectRequest& operator=(personFaceEmoDetectRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const personFaceEmoDetectRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const personFaceEmoDetectRequest* internal_default_instance() {
    return reinterpret_cast<const personFaceEmoDetectRequest*>(
               &_personFaceEmoDetectRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(personFaceEmoDetectRequest* other);
  friend void swap(personFaceEmoDetectRequest& a, personFaceEmoDetectRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline personFaceEmoDetectRequest* New() const final {
    return CreateMaybeMessage<personFaceEmoDetectRequest>(NULL);
  }

  personFaceEmoDetectRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<personFaceEmoDetectRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const personFaceEmoDetectRequest& from);
  void MergeFrom(const personFaceEmoDetectRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(personFaceEmoDetectRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes rawData = 1;
  void clear_rawdata();
  static const int kRawDataFieldNumber = 1;
  const ::std::string& rawdata() const;
  void set_rawdata(const ::std::string& value);
  #if LANG_CXX11
  void set_rawdata(::std::string&& value);
  #endif
  void set_rawdata(const char* value);
  void set_rawdata(const void* value, size_t size);
  ::std::string* mutable_rawdata();
  ::std::string* release_rawdata();
  void set_allocated_rawdata(::std::string* rawdata);

  // string savePath = 2;
  void clear_savepath();
  static const int kSavePathFieldNumber = 2;
  const ::std::string& savepath() const;
  void set_savepath(const ::std::string& value);
  #if LANG_CXX11
  void set_savepath(::std::string&& value);
  #endif
  void set_savepath(const char* value);
  void set_savepath(const char* value, size_t size);
  ::std::string* mutable_savepath();
  ::std::string* release_savepath();
  void set_allocated_savepath(::std::string* savepath);

  // int32 Width = 3;
  void clear_width();
  static const int kWidthFieldNumber = 3;
  ::google::protobuf::int32 width() const;
  void set_width(::google::protobuf::int32 value);

  // int32 Hight = 4;
  void clear_hight();
  static const int kHightFieldNumber = 4;
  ::google::protobuf::int32 hight() const;
  void set_hight(::google::protobuf::int32 value);

  // int32 Channel = 5;
  void clear_channel();
  static const int kChannelFieldNumber = 5;
  ::google::protobuf::int32 channel() const;
  void set_channel(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:personfaceemodetect.personFaceEmoDetectRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr rawdata_;
  ::google::protobuf::internal::ArenaStringPtr savepath_;
  ::google::protobuf::int32 width_;
  ::google::protobuf::int32 hight_;
  ::google::protobuf::int32 channel_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_PersonFaceEmoDetectAPI_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class personFaceEmoDetectResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:personfaceemodetect.personFaceEmoDetectResponse) */ {
 public:
  personFaceEmoDetectResponse();
  virtual ~personFaceEmoDetectResponse();

  personFaceEmoDetectResponse(const personFaceEmoDetectResponse& from);

  inline personFaceEmoDetectResponse& operator=(const personFaceEmoDetectResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  personFaceEmoDetectResponse(personFaceEmoDetectResponse&& from) noexcept
    : personFaceEmoDetectResponse() {
    *this = ::std::move(from);
  }

  inline personFaceEmoDetectResponse& operator=(personFaceEmoDetectResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const personFaceEmoDetectResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const personFaceEmoDetectResponse* internal_default_instance() {
    return reinterpret_cast<const personFaceEmoDetectResponse*>(
               &_personFaceEmoDetectResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(personFaceEmoDetectResponse* other);
  friend void swap(personFaceEmoDetectResponse& a, personFaceEmoDetectResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline personFaceEmoDetectResponse* New() const final {
    return CreateMaybeMessage<personFaceEmoDetectResponse>(NULL);
  }

  personFaceEmoDetectResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<personFaceEmoDetectResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const personFaceEmoDetectResponse& from);
  void MergeFrom(const personFaceEmoDetectResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(personFaceEmoDetectResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 currentFrameSum = 1;
  void clear_currentframesum();
  static const int kCurrentFrameSumFieldNumber = 1;
  ::google::protobuf::int32 currentframesum() const;
  void set_currentframesum(::google::protobuf::int32 value);

  // int32 totalPersonSum = 2;
  void clear_totalpersonsum();
  static const int kTotalPersonSumFieldNumber = 2;
  ::google::protobuf::int32 totalpersonsum() const;
  void set_totalpersonsum(::google::protobuf::int32 value);

  // int32 abnormalNum = 3;
  void clear_abnormalnum();
  static const int kAbnormalNumFieldNumber = 3;
  ::google::protobuf::int32 abnormalnum() const;
  void set_abnormalnum(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:personfaceemodetect.personFaceEmoDetectResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 currentframesum_;
  ::google::protobuf::int32 totalpersonsum_;
  ::google::protobuf::int32 abnormalnum_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_PersonFaceEmoDetectAPI_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// personFaceEmoDetectRequest

// bytes rawData = 1;
inline void personFaceEmoDetectRequest::clear_rawdata() {
  rawdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& personFaceEmoDetectRequest::rawdata() const {
  // @@protoc_insertion_point(field_get:personfaceemodetect.personFaceEmoDetectRequest.rawData)
  return rawdata_.GetNoArena();
}
inline void personFaceEmoDetectRequest::set_rawdata(const ::std::string& value) {
  
  rawdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:personfaceemodetect.personFaceEmoDetectRequest.rawData)
}
#if LANG_CXX11
inline void personFaceEmoDetectRequest::set_rawdata(::std::string&& value) {
  
  rawdata_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:personfaceemodetect.personFaceEmoDetectRequest.rawData)
}
#endif
inline void personFaceEmoDetectRequest::set_rawdata(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  rawdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:personfaceemodetect.personFaceEmoDetectRequest.rawData)
}
inline void personFaceEmoDetectRequest::set_rawdata(const void* value, size_t size) {
  
  rawdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:personfaceemodetect.personFaceEmoDetectRequest.rawData)
}
inline ::std::string* personFaceEmoDetectRequest::mutable_rawdata() {
  
  // @@protoc_insertion_point(field_mutable:personfaceemodetect.personFaceEmoDetectRequest.rawData)
  return rawdata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* personFaceEmoDetectRequest::release_rawdata() {
  // @@protoc_insertion_point(field_release:personfaceemodetect.personFaceEmoDetectRequest.rawData)
  
  return rawdata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void personFaceEmoDetectRequest::set_allocated_rawdata(::std::string* rawdata) {
  if (rawdata != NULL) {
    
  } else {
    
  }
  rawdata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), rawdata);
  // @@protoc_insertion_point(field_set_allocated:personfaceemodetect.personFaceEmoDetectRequest.rawData)
}

// string savePath = 2;
inline void personFaceEmoDetectRequest::clear_savepath() {
  savepath_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& personFaceEmoDetectRequest::savepath() const {
  // @@protoc_insertion_point(field_get:personfaceemodetect.personFaceEmoDetectRequest.savePath)
  return savepath_.GetNoArena();
}
inline void personFaceEmoDetectRequest::set_savepath(const ::std::string& value) {
  
  savepath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:personfaceemodetect.personFaceEmoDetectRequest.savePath)
}
#if LANG_CXX11
inline void personFaceEmoDetectRequest::set_savepath(::std::string&& value) {
  
  savepath_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:personfaceemodetect.personFaceEmoDetectRequest.savePath)
}
#endif
inline void personFaceEmoDetectRequest::set_savepath(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  savepath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:personfaceemodetect.personFaceEmoDetectRequest.savePath)
}
inline void personFaceEmoDetectRequest::set_savepath(const char* value, size_t size) {
  
  savepath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:personfaceemodetect.personFaceEmoDetectRequest.savePath)
}
inline ::std::string* personFaceEmoDetectRequest::mutable_savepath() {
  
  // @@protoc_insertion_point(field_mutable:personfaceemodetect.personFaceEmoDetectRequest.savePath)
  return savepath_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* personFaceEmoDetectRequest::release_savepath() {
  // @@protoc_insertion_point(field_release:personfaceemodetect.personFaceEmoDetectRequest.savePath)
  
  return savepath_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void personFaceEmoDetectRequest::set_allocated_savepath(::std::string* savepath) {
  if (savepath != NULL) {
    
  } else {
    
  }
  savepath_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), savepath);
  // @@protoc_insertion_point(field_set_allocated:personfaceemodetect.personFaceEmoDetectRequest.savePath)
}

// int32 Width = 3;
inline void personFaceEmoDetectRequest::clear_width() {
  width_ = 0;
}
inline ::google::protobuf::int32 personFaceEmoDetectRequest::width() const {
  // @@protoc_insertion_point(field_get:personfaceemodetect.personFaceEmoDetectRequest.Width)
  return width_;
}
inline void personFaceEmoDetectRequest::set_width(::google::protobuf::int32 value) {
  
  width_ = value;
  // @@protoc_insertion_point(field_set:personfaceemodetect.personFaceEmoDetectRequest.Width)
}

// int32 Hight = 4;
inline void personFaceEmoDetectRequest::clear_hight() {
  hight_ = 0;
}
inline ::google::protobuf::int32 personFaceEmoDetectRequest::hight() const {
  // @@protoc_insertion_point(field_get:personfaceemodetect.personFaceEmoDetectRequest.Hight)
  return hight_;
}
inline void personFaceEmoDetectRequest::set_hight(::google::protobuf::int32 value) {
  
  hight_ = value;
  // @@protoc_insertion_point(field_set:personfaceemodetect.personFaceEmoDetectRequest.Hight)
}

// int32 Channel = 5;
inline void personFaceEmoDetectRequest::clear_channel() {
  channel_ = 0;
}
inline ::google::protobuf::int32 personFaceEmoDetectRequest::channel() const {
  // @@protoc_insertion_point(field_get:personfaceemodetect.personFaceEmoDetectRequest.Channel)
  return channel_;
}
inline void personFaceEmoDetectRequest::set_channel(::google::protobuf::int32 value) {
  
  channel_ = value;
  // @@protoc_insertion_point(field_set:personfaceemodetect.personFaceEmoDetectRequest.Channel)
}

// -------------------------------------------------------------------

// personFaceEmoDetectResponse

// int32 currentFrameSum = 1;
inline void personFaceEmoDetectResponse::clear_currentframesum() {
  currentframesum_ = 0;
}
inline ::google::protobuf::int32 personFaceEmoDetectResponse::currentframesum() const {
  // @@protoc_insertion_point(field_get:personfaceemodetect.personFaceEmoDetectResponse.currentFrameSum)
  return currentframesum_;
}
inline void personFaceEmoDetectResponse::set_currentframesum(::google::protobuf::int32 value) {
  
  currentframesum_ = value;
  // @@protoc_insertion_point(field_set:personfaceemodetect.personFaceEmoDetectResponse.currentFrameSum)
}

// int32 totalPersonSum = 2;
inline void personFaceEmoDetectResponse::clear_totalpersonsum() {
  totalpersonsum_ = 0;
}
inline ::google::protobuf::int32 personFaceEmoDetectResponse::totalpersonsum() const {
  // @@protoc_insertion_point(field_get:personfaceemodetect.personFaceEmoDetectResponse.totalPersonSum)
  return totalpersonsum_;
}
inline void personFaceEmoDetectResponse::set_totalpersonsum(::google::protobuf::int32 value) {
  
  totalpersonsum_ = value;
  // @@protoc_insertion_point(field_set:personfaceemodetect.personFaceEmoDetectResponse.totalPersonSum)
}

// int32 abnormalNum = 3;
inline void personFaceEmoDetectResponse::clear_abnormalnum() {
  abnormalnum_ = 0;
}
inline ::google::protobuf::int32 personFaceEmoDetectResponse::abnormalnum() const {
  // @@protoc_insertion_point(field_get:personfaceemodetect.personFaceEmoDetectResponse.abnormalNum)
  return abnormalnum_;
}
inline void personFaceEmoDetectResponse::set_abnormalnum(::google::protobuf::int32 value) {
  
  abnormalnum_ = value;
  // @@protoc_insertion_point(field_set:personfaceemodetect.personFaceEmoDetectResponse.abnormalNum)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace personfaceemodetect

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_PersonFaceEmoDetectAPI_2eproto
