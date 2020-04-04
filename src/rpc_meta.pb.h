// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc_meta.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_rpc_5fmeta_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_rpc_5fmeta_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_rpc_5fmeta_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_rpc_5fmeta_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_rpc_5fmeta_2eproto;
namespace srpc {
class RpcMeta;
class RpcMetaDefaultTypeInternal;
extern RpcMetaDefaultTypeInternal _RpcMeta_default_instance_;
}  // namespace srpc
PROTOBUF_NAMESPACE_OPEN
template<> ::srpc::RpcMeta* Arena::CreateMaybeMessage<::srpc::RpcMeta>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace srpc {

// ===================================================================

class RpcMeta PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:srpc.RpcMeta) */ {
 public:
  inline RpcMeta() : RpcMeta(nullptr) {};
  virtual ~RpcMeta();

  RpcMeta(const RpcMeta& from);
  RpcMeta(RpcMeta&& from) noexcept
    : RpcMeta() {
    *this = ::std::move(from);
  }

  inline RpcMeta& operator=(const RpcMeta& from) {
    CopyFrom(from);
    return *this;
  }
  inline RpcMeta& operator=(RpcMeta&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RpcMeta& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RpcMeta* internal_default_instance() {
    return reinterpret_cast<const RpcMeta*>(
               &_RpcMeta_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RpcMeta& a, RpcMeta& b) {
    a.Swap(&b);
  }
  inline void Swap(RpcMeta* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RpcMeta* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RpcMeta* New() const final {
    return CreateMaybeMessage<RpcMeta>(nullptr);
  }

  RpcMeta* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RpcMeta>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RpcMeta& from);
  void MergeFrom(const RpcMeta& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RpcMeta* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "srpc.RpcMeta";
  }
  protected:
  explicit RpcMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_rpc_5fmeta_2eproto);
    return ::descriptor_table_rpc_5fmeta_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kServiceIdFieldNumber = 1,
    kMethodIdFieldNumber = 2,
    kDataSizeFieldNumber = 3,
  };
  // string service_id = 1;
  void clear_service_id();
  const std::string& service_id() const;
  void set_service_id(const std::string& value);
  void set_service_id(std::string&& value);
  void set_service_id(const char* value);
  void set_service_id(const char* value, size_t size);
  std::string* mutable_service_id();
  std::string* release_service_id();
  void set_allocated_service_id(std::string* service_id);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_service_id();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_service_id(
      std::string* service_id);
  private:
  const std::string& _internal_service_id() const;
  void _internal_set_service_id(const std::string& value);
  std::string* _internal_mutable_service_id();
  public:

  // string method_id = 2;
  void clear_method_id();
  const std::string& method_id() const;
  void set_method_id(const std::string& value);
  void set_method_id(std::string&& value);
  void set_method_id(const char* value);
  void set_method_id(const char* value, size_t size);
  std::string* mutable_method_id();
  std::string* release_method_id();
  void set_allocated_method_id(std::string* method_id);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_method_id();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_method_id(
      std::string* method_id);
  private:
  const std::string& _internal_method_id() const;
  void _internal_set_method_id(const std::string& value);
  std::string* _internal_mutable_method_id();
  public:

  // int32 data_size = 3;
  void clear_data_size();
  ::PROTOBUF_NAMESPACE_ID::int32 data_size() const;
  void set_data_size(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_data_size() const;
  void _internal_set_data_size(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:srpc.RpcMeta)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr service_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr method_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 data_size_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_rpc_5fmeta_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RpcMeta

// string service_id = 1;
inline void RpcMeta::clear_service_id() {
  service_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& RpcMeta::service_id() const {
  // @@protoc_insertion_point(field_get:srpc.RpcMeta.service_id)
  return _internal_service_id();
}
inline void RpcMeta::set_service_id(const std::string& value) {
  _internal_set_service_id(value);
  // @@protoc_insertion_point(field_set:srpc.RpcMeta.service_id)
}
inline std::string* RpcMeta::mutable_service_id() {
  // @@protoc_insertion_point(field_mutable:srpc.RpcMeta.service_id)
  return _internal_mutable_service_id();
}
inline const std::string& RpcMeta::_internal_service_id() const {
  return service_id_.Get();
}
inline void RpcMeta::_internal_set_service_id(const std::string& value) {
  
  service_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void RpcMeta::set_service_id(std::string&& value) {
  
  service_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:srpc.RpcMeta.service_id)
}
inline void RpcMeta::set_service_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  service_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:srpc.RpcMeta.service_id)
}
inline void RpcMeta::set_service_id(const char* value,
    size_t size) {
  
  service_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:srpc.RpcMeta.service_id)
}
inline std::string* RpcMeta::_internal_mutable_service_id() {
  
  return service_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* RpcMeta::release_service_id() {
  // @@protoc_insertion_point(field_release:srpc.RpcMeta.service_id)
  
  return service_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void RpcMeta::set_allocated_service_id(std::string* service_id) {
  if (service_id != nullptr) {
    
  } else {
    
  }
  service_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), service_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:srpc.RpcMeta.service_id)
}
inline std::string* RpcMeta::unsafe_arena_release_service_id() {
  // @@protoc_insertion_point(field_unsafe_arena_release:srpc.RpcMeta.service_id)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return service_id_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void RpcMeta::unsafe_arena_set_allocated_service_id(
    std::string* service_id) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (service_id != nullptr) {
    
  } else {
    
  }
  service_id_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      service_id, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:srpc.RpcMeta.service_id)
}

// string method_id = 2;
inline void RpcMeta::clear_method_id() {
  method_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& RpcMeta::method_id() const {
  // @@protoc_insertion_point(field_get:srpc.RpcMeta.method_id)
  return _internal_method_id();
}
inline void RpcMeta::set_method_id(const std::string& value) {
  _internal_set_method_id(value);
  // @@protoc_insertion_point(field_set:srpc.RpcMeta.method_id)
}
inline std::string* RpcMeta::mutable_method_id() {
  // @@protoc_insertion_point(field_mutable:srpc.RpcMeta.method_id)
  return _internal_mutable_method_id();
}
inline const std::string& RpcMeta::_internal_method_id() const {
  return method_id_.Get();
}
inline void RpcMeta::_internal_set_method_id(const std::string& value) {
  
  method_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void RpcMeta::set_method_id(std::string&& value) {
  
  method_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:srpc.RpcMeta.method_id)
}
inline void RpcMeta::set_method_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  method_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:srpc.RpcMeta.method_id)
}
inline void RpcMeta::set_method_id(const char* value,
    size_t size) {
  
  method_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:srpc.RpcMeta.method_id)
}
inline std::string* RpcMeta::_internal_mutable_method_id() {
  
  return method_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* RpcMeta::release_method_id() {
  // @@protoc_insertion_point(field_release:srpc.RpcMeta.method_id)
  
  return method_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void RpcMeta::set_allocated_method_id(std::string* method_id) {
  if (method_id != nullptr) {
    
  } else {
    
  }
  method_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), method_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:srpc.RpcMeta.method_id)
}
inline std::string* RpcMeta::unsafe_arena_release_method_id() {
  // @@protoc_insertion_point(field_unsafe_arena_release:srpc.RpcMeta.method_id)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return method_id_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void RpcMeta::unsafe_arena_set_allocated_method_id(
    std::string* method_id) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (method_id != nullptr) {
    
  } else {
    
  }
  method_id_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      method_id, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:srpc.RpcMeta.method_id)
}

// int32 data_size = 3;
inline void RpcMeta::clear_data_size() {
  data_size_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RpcMeta::_internal_data_size() const {
  return data_size_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RpcMeta::data_size() const {
  // @@protoc_insertion_point(field_get:srpc.RpcMeta.data_size)
  return _internal_data_size();
}
inline void RpcMeta::_internal_set_data_size(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  data_size_ = value;
}
inline void RpcMeta::set_data_size(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_data_size(value);
  // @@protoc_insertion_point(field_set:srpc.RpcMeta.data_size)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace srpc

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_rpc_5fmeta_2eproto