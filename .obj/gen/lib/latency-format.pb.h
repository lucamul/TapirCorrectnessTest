// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lib/latency-format.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_lib_2flatency_2dformat_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_lib_2flatency_2dformat_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_lib_2flatency_2dformat_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_lib_2flatency_2dformat_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_lib_2flatency_2dformat_2eproto;
namespace transport {
namespace latency {
namespace format {
class Latency;
class LatencyDefaultTypeInternal;
extern LatencyDefaultTypeInternal _Latency_default_instance_;
class LatencyDist;
class LatencyDistDefaultTypeInternal;
extern LatencyDistDefaultTypeInternal _LatencyDist_default_instance_;
class LatencyFile;
class LatencyFileDefaultTypeInternal;
extern LatencyFileDefaultTypeInternal _LatencyFile_default_instance_;
}  // namespace format
}  // namespace latency
}  // namespace transport
PROTOBUF_NAMESPACE_OPEN
template<> ::transport::latency::format::Latency* Arena::CreateMaybeMessage<::transport::latency::format::Latency>(Arena*);
template<> ::transport::latency::format::LatencyDist* Arena::CreateMaybeMessage<::transport::latency::format::LatencyDist>(Arena*);
template<> ::transport::latency::format::LatencyFile* Arena::CreateMaybeMessage<::transport::latency::format::LatencyFile>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace transport {
namespace latency {
namespace format {

// ===================================================================

class LatencyDist PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:transport.latency.format.LatencyDist) */ {
 public:
  inline LatencyDist() : LatencyDist(nullptr) {};
  virtual ~LatencyDist();

  LatencyDist(const LatencyDist& from);
  LatencyDist(LatencyDist&& from) noexcept
    : LatencyDist() {
    *this = ::std::move(from);
  }

  inline LatencyDist& operator=(const LatencyDist& from) {
    CopyFrom(from);
    return *this;
  }
  inline LatencyDist& operator=(LatencyDist&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const LatencyDist& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LatencyDist* internal_default_instance() {
    return reinterpret_cast<const LatencyDist*>(
               &_LatencyDist_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LatencyDist& a, LatencyDist& b) {
    a.Swap(&b);
  }
  inline void Swap(LatencyDist* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LatencyDist* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LatencyDist* New() const final {
    return CreateMaybeMessage<LatencyDist>(nullptr);
  }

  LatencyDist* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LatencyDist>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LatencyDist& from);
  void MergeFrom(const LatencyDist& from);
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
  void InternalSwap(LatencyDist* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "transport.latency.format.LatencyDist";
  }
  protected:
  explicit LatencyDist(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_lib_2flatency_2dformat_2eproto);
    return ::descriptor_table_lib_2flatency_2dformat_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBucketsFieldNumber = 6,
    kMinFieldNumber = 2,
    kMaxFieldNumber = 3,
    kTotalFieldNumber = 4,
    kCountFieldNumber = 5,
    kTypeFieldNumber = 1,
  };
  // repeated uint32 buckets = 6;
  int buckets_size() const;
  private:
  int _internal_buckets_size() const;
  public:
  void clear_buckets();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_buckets(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      _internal_buckets() const;
  void _internal_add_buckets(::PROTOBUF_NAMESPACE_ID::uint32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      _internal_mutable_buckets();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint32 buckets(int index) const;
  void set_buckets(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_buckets(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      buckets() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_buckets();

  // required uint64 min = 2;
  bool has_min() const;
  private:
  bool _internal_has_min() const;
  public:
  void clear_min();
  ::PROTOBUF_NAMESPACE_ID::uint64 min() const;
  void set_min(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_min() const;
  void _internal_set_min(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // required uint64 max = 3;
  bool has_max() const;
  private:
  bool _internal_has_max() const;
  public:
  void clear_max();
  ::PROTOBUF_NAMESPACE_ID::uint64 max() const;
  void set_max(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_max() const;
  void _internal_set_max(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // required uint64 total = 4;
  bool has_total() const;
  private:
  bool _internal_has_total() const;
  public:
  void clear_total();
  ::PROTOBUF_NAMESPACE_ID::uint64 total() const;
  void set_total(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_total() const;
  void _internal_set_total(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // required uint64 count = 5;
  bool has_count() const;
  private:
  bool _internal_has_count() const;
  public:
  void clear_count();
  ::PROTOBUF_NAMESPACE_ID::uint64 count() const;
  void set_count(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_count() const;
  void _internal_set_count(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // required uint32 type = 1;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::PROTOBUF_NAMESPACE_ID::uint32 type() const;
  void set_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_type() const;
  void _internal_set_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:transport.latency.format.LatencyDist)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > buckets_;
  ::PROTOBUF_NAMESPACE_ID::uint64 min_;
  ::PROTOBUF_NAMESPACE_ID::uint64 max_;
  ::PROTOBUF_NAMESPACE_ID::uint64 total_;
  ::PROTOBUF_NAMESPACE_ID::uint64 count_;
  ::PROTOBUF_NAMESPACE_ID::uint32 type_;
  friend struct ::TableStruct_lib_2flatency_2dformat_2eproto;
};
// -------------------------------------------------------------------

class Latency PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:transport.latency.format.Latency) */ {
 public:
  inline Latency() : Latency(nullptr) {};
  virtual ~Latency();

  Latency(const Latency& from);
  Latency(Latency&& from) noexcept
    : Latency() {
    *this = ::std::move(from);
  }

  inline Latency& operator=(const Latency& from) {
    CopyFrom(from);
    return *this;
  }
  inline Latency& operator=(Latency&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const Latency& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Latency* internal_default_instance() {
    return reinterpret_cast<const Latency*>(
               &_Latency_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Latency& a, Latency& b) {
    a.Swap(&b);
  }
  inline void Swap(Latency* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Latency* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Latency* New() const final {
    return CreateMaybeMessage<Latency>(nullptr);
  }

  Latency* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Latency>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Latency& from);
  void MergeFrom(const Latency& from);
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
  void InternalSwap(Latency* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "transport.latency.format.Latency";
  }
  protected:
  explicit Latency(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_lib_2flatency_2dformat_2eproto);
    return ::descriptor_table_lib_2flatency_2dformat_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDistsFieldNumber = 2,
    kNameFieldNumber = 1,
  };
  // repeated .transport.latency.format.LatencyDist dists = 2;
  int dists_size() const;
  private:
  int _internal_dists_size() const;
  public:
  void clear_dists();
  ::transport::latency::format::LatencyDist* mutable_dists(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::transport::latency::format::LatencyDist >*
      mutable_dists();
  private:
  const ::transport::latency::format::LatencyDist& _internal_dists(int index) const;
  ::transport::latency::format::LatencyDist* _internal_add_dists();
  public:
  const ::transport::latency::format::LatencyDist& dists(int index) const;
  ::transport::latency::format::LatencyDist* add_dists();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::transport::latency::format::LatencyDist >&
      dists() const;

  // required string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_name(
      std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // @@protoc_insertion_point(class_scope:transport.latency.format.Latency)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::transport::latency::format::LatencyDist > dists_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  friend struct ::TableStruct_lib_2flatency_2dformat_2eproto;
};
// -------------------------------------------------------------------

class LatencyFile PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:transport.latency.format.LatencyFile) */ {
 public:
  inline LatencyFile() : LatencyFile(nullptr) {};
  virtual ~LatencyFile();

  LatencyFile(const LatencyFile& from);
  LatencyFile(LatencyFile&& from) noexcept
    : LatencyFile() {
    *this = ::std::move(from);
  }

  inline LatencyFile& operator=(const LatencyFile& from) {
    CopyFrom(from);
    return *this;
  }
  inline LatencyFile& operator=(LatencyFile&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const LatencyFile& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LatencyFile* internal_default_instance() {
    return reinterpret_cast<const LatencyFile*>(
               &_LatencyFile_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(LatencyFile& a, LatencyFile& b) {
    a.Swap(&b);
  }
  inline void Swap(LatencyFile* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LatencyFile* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LatencyFile* New() const final {
    return CreateMaybeMessage<LatencyFile>(nullptr);
  }

  LatencyFile* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LatencyFile>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LatencyFile& from);
  void MergeFrom(const LatencyFile& from);
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
  void InternalSwap(LatencyFile* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "transport.latency.format.LatencyFile";
  }
  protected:
  explicit LatencyFile(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_lib_2flatency_2dformat_2eproto);
    return ::descriptor_table_lib_2flatency_2dformat_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLatenciesFieldNumber = 1,
  };
  // repeated .transport.latency.format.Latency latencies = 1;
  int latencies_size() const;
  private:
  int _internal_latencies_size() const;
  public:
  void clear_latencies();
  ::transport::latency::format::Latency* mutable_latencies(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::transport::latency::format::Latency >*
      mutable_latencies();
  private:
  const ::transport::latency::format::Latency& _internal_latencies(int index) const;
  ::transport::latency::format::Latency* _internal_add_latencies();
  public:
  const ::transport::latency::format::Latency& latencies(int index) const;
  ::transport::latency::format::Latency* add_latencies();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::transport::latency::format::Latency >&
      latencies() const;

  // @@protoc_insertion_point(class_scope:transport.latency.format.LatencyFile)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::transport::latency::format::Latency > latencies_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_lib_2flatency_2dformat_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LatencyDist

// required uint32 type = 1;
inline bool LatencyDist::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool LatencyDist::has_type() const {
  return _internal_has_type();
}
inline void LatencyDist::clear_type() {
  type_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LatencyDist::_internal_type() const {
  return type_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LatencyDist::type() const {
  // @@protoc_insertion_point(field_get:transport.latency.format.LatencyDist.type)
  return _internal_type();
}
inline void LatencyDist::_internal_set_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  type_ = value;
}
inline void LatencyDist::set_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:transport.latency.format.LatencyDist.type)
}

// required uint64 min = 2;
inline bool LatencyDist::_internal_has_min() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool LatencyDist::has_min() const {
  return _internal_has_min();
}
inline void LatencyDist::clear_min() {
  min_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 LatencyDist::_internal_min() const {
  return min_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 LatencyDist::min() const {
  // @@protoc_insertion_point(field_get:transport.latency.format.LatencyDist.min)
  return _internal_min();
}
inline void LatencyDist::_internal_set_min(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000001u;
  min_ = value;
}
inline void LatencyDist::set_min(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_min(value);
  // @@protoc_insertion_point(field_set:transport.latency.format.LatencyDist.min)
}

// required uint64 max = 3;
inline bool LatencyDist::_internal_has_max() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool LatencyDist::has_max() const {
  return _internal_has_max();
}
inline void LatencyDist::clear_max() {
  max_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 LatencyDist::_internal_max() const {
  return max_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 LatencyDist::max() const {
  // @@protoc_insertion_point(field_get:transport.latency.format.LatencyDist.max)
  return _internal_max();
}
inline void LatencyDist::_internal_set_max(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000002u;
  max_ = value;
}
inline void LatencyDist::set_max(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_max(value);
  // @@protoc_insertion_point(field_set:transport.latency.format.LatencyDist.max)
}

// required uint64 total = 4;
inline bool LatencyDist::_internal_has_total() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool LatencyDist::has_total() const {
  return _internal_has_total();
}
inline void LatencyDist::clear_total() {
  total_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 LatencyDist::_internal_total() const {
  return total_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 LatencyDist::total() const {
  // @@protoc_insertion_point(field_get:transport.latency.format.LatencyDist.total)
  return _internal_total();
}
inline void LatencyDist::_internal_set_total(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000004u;
  total_ = value;
}
inline void LatencyDist::set_total(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_total(value);
  // @@protoc_insertion_point(field_set:transport.latency.format.LatencyDist.total)
}

// required uint64 count = 5;
inline bool LatencyDist::_internal_has_count() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool LatencyDist::has_count() const {
  return _internal_has_count();
}
inline void LatencyDist::clear_count() {
  count_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 LatencyDist::_internal_count() const {
  return count_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 LatencyDist::count() const {
  // @@protoc_insertion_point(field_get:transport.latency.format.LatencyDist.count)
  return _internal_count();
}
inline void LatencyDist::_internal_set_count(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000008u;
  count_ = value;
}
inline void LatencyDist::set_count(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:transport.latency.format.LatencyDist.count)
}

// repeated uint32 buckets = 6;
inline int LatencyDist::_internal_buckets_size() const {
  return buckets_.size();
}
inline int LatencyDist::buckets_size() const {
  return _internal_buckets_size();
}
inline void LatencyDist::clear_buckets() {
  buckets_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LatencyDist::_internal_buckets(int index) const {
  return buckets_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LatencyDist::buckets(int index) const {
  // @@protoc_insertion_point(field_get:transport.latency.format.LatencyDist.buckets)
  return _internal_buckets(index);
}
inline void LatencyDist::set_buckets(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  buckets_.Set(index, value);
  // @@protoc_insertion_point(field_set:transport.latency.format.LatencyDist.buckets)
}
inline void LatencyDist::_internal_add_buckets(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  buckets_.Add(value);
}
inline void LatencyDist::add_buckets(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_add_buckets(value);
  // @@protoc_insertion_point(field_add:transport.latency.format.LatencyDist.buckets)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
LatencyDist::_internal_buckets() const {
  return buckets_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
LatencyDist::buckets() const {
  // @@protoc_insertion_point(field_list:transport.latency.format.LatencyDist.buckets)
  return _internal_buckets();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
LatencyDist::_internal_mutable_buckets() {
  return &buckets_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
LatencyDist::mutable_buckets() {
  // @@protoc_insertion_point(field_mutable_list:transport.latency.format.LatencyDist.buckets)
  return _internal_mutable_buckets();
}

// -------------------------------------------------------------------

// Latency

// required string name = 1;
inline bool Latency::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Latency::has_name() const {
  return _internal_has_name();
}
inline void Latency::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Latency::name() const {
  // @@protoc_insertion_point(field_get:transport.latency.format.Latency.name)
  return _internal_name();
}
inline void Latency::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:transport.latency.format.Latency.name)
}
inline std::string* Latency::mutable_name() {
  // @@protoc_insertion_point(field_mutable:transport.latency.format.Latency.name)
  return _internal_mutable_name();
}
inline const std::string& Latency::_internal_name() const {
  return name_.Get();
}
inline void Latency::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Latency::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:transport.latency.format.Latency.name)
}
inline void Latency::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:transport.latency.format.Latency.name)
}
inline void Latency::set_name(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:transport.latency.format.Latency.name)
}
inline std::string* Latency::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Latency::release_name() {
  // @@protoc_insertion_point(field_release:transport.latency.format.Latency.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Latency::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:transport.latency.format.Latency.name)
}
inline std::string* Latency::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:transport.latency.format.Latency.name)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000001u;
  return name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Latency::unsafe_arena_set_allocated_name(
    std::string* name) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      name, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:transport.latency.format.Latency.name)
}

// repeated .transport.latency.format.LatencyDist dists = 2;
inline int Latency::_internal_dists_size() const {
  return dists_.size();
}
inline int Latency::dists_size() const {
  return _internal_dists_size();
}
inline void Latency::clear_dists() {
  dists_.Clear();
}
inline ::transport::latency::format::LatencyDist* Latency::mutable_dists(int index) {
  // @@protoc_insertion_point(field_mutable:transport.latency.format.Latency.dists)
  return dists_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::transport::latency::format::LatencyDist >*
Latency::mutable_dists() {
  // @@protoc_insertion_point(field_mutable_list:transport.latency.format.Latency.dists)
  return &dists_;
}
inline const ::transport::latency::format::LatencyDist& Latency::_internal_dists(int index) const {
  return dists_.Get(index);
}
inline const ::transport::latency::format::LatencyDist& Latency::dists(int index) const {
  // @@protoc_insertion_point(field_get:transport.latency.format.Latency.dists)
  return _internal_dists(index);
}
inline ::transport::latency::format::LatencyDist* Latency::_internal_add_dists() {
  return dists_.Add();
}
inline ::transport::latency::format::LatencyDist* Latency::add_dists() {
  // @@protoc_insertion_point(field_add:transport.latency.format.Latency.dists)
  return _internal_add_dists();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::transport::latency::format::LatencyDist >&
Latency::dists() const {
  // @@protoc_insertion_point(field_list:transport.latency.format.Latency.dists)
  return dists_;
}

// -------------------------------------------------------------------

// LatencyFile

// repeated .transport.latency.format.Latency latencies = 1;
inline int LatencyFile::_internal_latencies_size() const {
  return latencies_.size();
}
inline int LatencyFile::latencies_size() const {
  return _internal_latencies_size();
}
inline void LatencyFile::clear_latencies() {
  latencies_.Clear();
}
inline ::transport::latency::format::Latency* LatencyFile::mutable_latencies(int index) {
  // @@protoc_insertion_point(field_mutable:transport.latency.format.LatencyFile.latencies)
  return latencies_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::transport::latency::format::Latency >*
LatencyFile::mutable_latencies() {
  // @@protoc_insertion_point(field_mutable_list:transport.latency.format.LatencyFile.latencies)
  return &latencies_;
}
inline const ::transport::latency::format::Latency& LatencyFile::_internal_latencies(int index) const {
  return latencies_.Get(index);
}
inline const ::transport::latency::format::Latency& LatencyFile::latencies(int index) const {
  // @@protoc_insertion_point(field_get:transport.latency.format.LatencyFile.latencies)
  return _internal_latencies(index);
}
inline ::transport::latency::format::Latency* LatencyFile::_internal_add_latencies() {
  return latencies_.Add();
}
inline ::transport::latency::format::Latency* LatencyFile::add_latencies() {
  // @@protoc_insertion_point(field_add:transport.latency.format.LatencyFile.latencies)
  return _internal_add_latencies();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::transport::latency::format::Latency >&
LatencyFile::latencies() const {
  // @@protoc_insertion_point(field_list:transport.latency.format.LatencyFile.latencies)
  return latencies_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace format
}  // namespace latency
}  // namespace transport

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_lib_2flatency_2dformat_2eproto