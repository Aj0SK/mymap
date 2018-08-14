// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fileformat.proto

#ifndef PROTOBUF_INCLUDED_fileformat_2eproto
#define PROTOBUF_INCLUDED_fileformat_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_fileformat_2eproto 

namespace protobuf_fileformat_2eproto {
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
}  // namespace protobuf_fileformat_2eproto
namespace OSMPBF {
class Blob;
class BlobDefaultTypeInternal;
extern BlobDefaultTypeInternal _Blob_default_instance_;
class BlobHeader;
class BlobHeaderDefaultTypeInternal;
extern BlobHeaderDefaultTypeInternal _BlobHeader_default_instance_;
}  // namespace OSMPBF
namespace google {
namespace protobuf {
template<> ::OSMPBF::Blob* Arena::CreateMaybeMessage<::OSMPBF::Blob>(Arena*);
template<> ::OSMPBF::BlobHeader* Arena::CreateMaybeMessage<::OSMPBF::BlobHeader>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace OSMPBF {

// ===================================================================

class Blob : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:OSMPBF.Blob) */ {
 public:
  Blob();
  virtual ~Blob();

  Blob(const Blob& from);

  inline Blob& operator=(const Blob& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Blob(Blob&& from) noexcept
    : Blob() {
    *this = ::std::move(from);
  }

  inline Blob& operator=(Blob&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Blob& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Blob* internal_default_instance() {
    return reinterpret_cast<const Blob*>(
               &_Blob_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Blob* other);
  friend void swap(Blob& a, Blob& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Blob* New() const final {
    return CreateMaybeMessage<Blob>(NULL);
  }

  Blob* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Blob>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Blob& from);
  void MergeFrom(const Blob& from);
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
  void InternalSwap(Blob* other);
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

  // optional bytes raw = 1;
  bool has_raw() const;
  void clear_raw();
  static const int kRawFieldNumber = 1;
  const ::std::string& raw() const;
  void set_raw(const ::std::string& value);
  #if LANG_CXX11
  void set_raw(::std::string&& value);
  #endif
  void set_raw(const char* value);
  void set_raw(const void* value, size_t size);
  ::std::string* mutable_raw();
  ::std::string* release_raw();
  void set_allocated_raw(::std::string* raw);

  // optional bytes zlib_data = 3;
  bool has_zlib_data() const;
  void clear_zlib_data();
  static const int kZlibDataFieldNumber = 3;
  const ::std::string& zlib_data() const;
  void set_zlib_data(const ::std::string& value);
  #if LANG_CXX11
  void set_zlib_data(::std::string&& value);
  #endif
  void set_zlib_data(const char* value);
  void set_zlib_data(const void* value, size_t size);
  ::std::string* mutable_zlib_data();
  ::std::string* release_zlib_data();
  void set_allocated_zlib_data(::std::string* zlib_data);

  // optional bytes lzma_data = 4;
  bool has_lzma_data() const;
  void clear_lzma_data();
  static const int kLzmaDataFieldNumber = 4;
  const ::std::string& lzma_data() const;
  void set_lzma_data(const ::std::string& value);
  #if LANG_CXX11
  void set_lzma_data(::std::string&& value);
  #endif
  void set_lzma_data(const char* value);
  void set_lzma_data(const void* value, size_t size);
  ::std::string* mutable_lzma_data();
  ::std::string* release_lzma_data();
  void set_allocated_lzma_data(::std::string* lzma_data);

  // optional bytes OBSOLETE_bzip2_data = 5 [deprecated = true];
  GOOGLE_PROTOBUF_DEPRECATED_ATTR bool has_obsolete_bzip2_data() const;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void clear_obsolete_bzip2_data();
  GOOGLE_PROTOBUF_DEPRECATED_ATTR static const int kOBSOLETEBzip2DataFieldNumber = 5;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR const ::std::string& obsolete_bzip2_data() const;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_obsolete_bzip2_data(const ::std::string& value);
  #if LANG_CXX11
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_obsolete_bzip2_data(::std::string&& value);
  #endif
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_obsolete_bzip2_data(const char* value);
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_obsolete_bzip2_data(const void* value, size_t size);
  GOOGLE_PROTOBUF_DEPRECATED_ATTR ::std::string* mutable_obsolete_bzip2_data();
  GOOGLE_PROTOBUF_DEPRECATED_ATTR ::std::string* release_obsolete_bzip2_data();
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_allocated_obsolete_bzip2_data(::std::string* obsolete_bzip2_data);

  // optional int32 raw_size = 2;
  bool has_raw_size() const;
  void clear_raw_size();
  static const int kRawSizeFieldNumber = 2;
  ::google::protobuf::int32 raw_size() const;
  void set_raw_size(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:OSMPBF.Blob)
 private:
  void set_has_raw();
  void clear_has_raw();
  void set_has_raw_size();
  void clear_has_raw_size();
  void set_has_zlib_data();
  void clear_has_zlib_data();
  void set_has_lzma_data();
  void clear_has_lzma_data();
  void set_has_obsolete_bzip2_data();
  void clear_has_obsolete_bzip2_data();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr raw_;
  ::google::protobuf::internal::ArenaStringPtr zlib_data_;
  ::google::protobuf::internal::ArenaStringPtr lzma_data_;
  ::google::protobuf::internal::ArenaStringPtr obsolete_bzip2_data_;
  ::google::protobuf::int32 raw_size_;
  friend struct ::protobuf_fileformat_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BlobHeader : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:OSMPBF.BlobHeader) */ {
 public:
  BlobHeader();
  virtual ~BlobHeader();

  BlobHeader(const BlobHeader& from);

  inline BlobHeader& operator=(const BlobHeader& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BlobHeader(BlobHeader&& from) noexcept
    : BlobHeader() {
    *this = ::std::move(from);
  }

  inline BlobHeader& operator=(BlobHeader&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BlobHeader& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BlobHeader* internal_default_instance() {
    return reinterpret_cast<const BlobHeader*>(
               &_BlobHeader_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(BlobHeader* other);
  friend void swap(BlobHeader& a, BlobHeader& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BlobHeader* New() const final {
    return CreateMaybeMessage<BlobHeader>(NULL);
  }

  BlobHeader* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BlobHeader>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BlobHeader& from);
  void MergeFrom(const BlobHeader& from);
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
  void InternalSwap(BlobHeader* other);
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

  // required string type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // optional bytes indexdata = 2;
  bool has_indexdata() const;
  void clear_indexdata();
  static const int kIndexdataFieldNumber = 2;
  const ::std::string& indexdata() const;
  void set_indexdata(const ::std::string& value);
  #if LANG_CXX11
  void set_indexdata(::std::string&& value);
  #endif
  void set_indexdata(const char* value);
  void set_indexdata(const void* value, size_t size);
  ::std::string* mutable_indexdata();
  ::std::string* release_indexdata();
  void set_allocated_indexdata(::std::string* indexdata);

  // required int32 datasize = 3;
  bool has_datasize() const;
  void clear_datasize();
  static const int kDatasizeFieldNumber = 3;
  ::google::protobuf::int32 datasize() const;
  void set_datasize(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:OSMPBF.BlobHeader)
 private:
  void set_has_type();
  void clear_has_type();
  void set_has_indexdata();
  void clear_has_indexdata();
  void set_has_datasize();
  void clear_has_datasize();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::internal::ArenaStringPtr indexdata_;
  ::google::protobuf::int32 datasize_;
  friend struct ::protobuf_fileformat_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Blob

// optional bytes raw = 1;
inline bool Blob::has_raw() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Blob::set_has_raw() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Blob::clear_has_raw() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Blob::clear_raw() {
  raw_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_raw();
}
inline const ::std::string& Blob::raw() const {
  // @@protoc_insertion_point(field_get:OSMPBF.Blob.raw)
  return raw_.GetNoArena();
}
inline void Blob::set_raw(const ::std::string& value) {
  set_has_raw();
  raw_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:OSMPBF.Blob.raw)
}
#if LANG_CXX11
inline void Blob::set_raw(::std::string&& value) {
  set_has_raw();
  raw_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:OSMPBF.Blob.raw)
}
#endif
inline void Blob::set_raw(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_raw();
  raw_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:OSMPBF.Blob.raw)
}
inline void Blob::set_raw(const void* value, size_t size) {
  set_has_raw();
  raw_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:OSMPBF.Blob.raw)
}
inline ::std::string* Blob::mutable_raw() {
  set_has_raw();
  // @@protoc_insertion_point(field_mutable:OSMPBF.Blob.raw)
  return raw_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Blob::release_raw() {
  // @@protoc_insertion_point(field_release:OSMPBF.Blob.raw)
  if (!has_raw()) {
    return NULL;
  }
  clear_has_raw();
  return raw_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Blob::set_allocated_raw(::std::string* raw) {
  if (raw != NULL) {
    set_has_raw();
  } else {
    clear_has_raw();
  }
  raw_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), raw);
  // @@protoc_insertion_point(field_set_allocated:OSMPBF.Blob.raw)
}

// optional int32 raw_size = 2;
inline bool Blob::has_raw_size() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Blob::set_has_raw_size() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Blob::clear_has_raw_size() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Blob::clear_raw_size() {
  raw_size_ = 0;
  clear_has_raw_size();
}
inline ::google::protobuf::int32 Blob::raw_size() const {
  // @@protoc_insertion_point(field_get:OSMPBF.Blob.raw_size)
  return raw_size_;
}
inline void Blob::set_raw_size(::google::protobuf::int32 value) {
  set_has_raw_size();
  raw_size_ = value;
  // @@protoc_insertion_point(field_set:OSMPBF.Blob.raw_size)
}

// optional bytes zlib_data = 3;
inline bool Blob::has_zlib_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Blob::set_has_zlib_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Blob::clear_has_zlib_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Blob::clear_zlib_data() {
  zlib_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_zlib_data();
}
inline const ::std::string& Blob::zlib_data() const {
  // @@protoc_insertion_point(field_get:OSMPBF.Blob.zlib_data)
  return zlib_data_.GetNoArena();
}
inline void Blob::set_zlib_data(const ::std::string& value) {
  set_has_zlib_data();
  zlib_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:OSMPBF.Blob.zlib_data)
}
#if LANG_CXX11
inline void Blob::set_zlib_data(::std::string&& value) {
  set_has_zlib_data();
  zlib_data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:OSMPBF.Blob.zlib_data)
}
#endif
inline void Blob::set_zlib_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_zlib_data();
  zlib_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:OSMPBF.Blob.zlib_data)
}
inline void Blob::set_zlib_data(const void* value, size_t size) {
  set_has_zlib_data();
  zlib_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:OSMPBF.Blob.zlib_data)
}
inline ::std::string* Blob::mutable_zlib_data() {
  set_has_zlib_data();
  // @@protoc_insertion_point(field_mutable:OSMPBF.Blob.zlib_data)
  return zlib_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Blob::release_zlib_data() {
  // @@protoc_insertion_point(field_release:OSMPBF.Blob.zlib_data)
  if (!has_zlib_data()) {
    return NULL;
  }
  clear_has_zlib_data();
  return zlib_data_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Blob::set_allocated_zlib_data(::std::string* zlib_data) {
  if (zlib_data != NULL) {
    set_has_zlib_data();
  } else {
    clear_has_zlib_data();
  }
  zlib_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), zlib_data);
  // @@protoc_insertion_point(field_set_allocated:OSMPBF.Blob.zlib_data)
}

// optional bytes lzma_data = 4;
inline bool Blob::has_lzma_data() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Blob::set_has_lzma_data() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Blob::clear_has_lzma_data() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Blob::clear_lzma_data() {
  lzma_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_lzma_data();
}
inline const ::std::string& Blob::lzma_data() const {
  // @@protoc_insertion_point(field_get:OSMPBF.Blob.lzma_data)
  return lzma_data_.GetNoArena();
}
inline void Blob::set_lzma_data(const ::std::string& value) {
  set_has_lzma_data();
  lzma_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:OSMPBF.Blob.lzma_data)
}
#if LANG_CXX11
inline void Blob::set_lzma_data(::std::string&& value) {
  set_has_lzma_data();
  lzma_data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:OSMPBF.Blob.lzma_data)
}
#endif
inline void Blob::set_lzma_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_lzma_data();
  lzma_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:OSMPBF.Blob.lzma_data)
}
inline void Blob::set_lzma_data(const void* value, size_t size) {
  set_has_lzma_data();
  lzma_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:OSMPBF.Blob.lzma_data)
}
inline ::std::string* Blob::mutable_lzma_data() {
  set_has_lzma_data();
  // @@protoc_insertion_point(field_mutable:OSMPBF.Blob.lzma_data)
  return lzma_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Blob::release_lzma_data() {
  // @@protoc_insertion_point(field_release:OSMPBF.Blob.lzma_data)
  if (!has_lzma_data()) {
    return NULL;
  }
  clear_has_lzma_data();
  return lzma_data_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Blob::set_allocated_lzma_data(::std::string* lzma_data) {
  if (lzma_data != NULL) {
    set_has_lzma_data();
  } else {
    clear_has_lzma_data();
  }
  lzma_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), lzma_data);
  // @@protoc_insertion_point(field_set_allocated:OSMPBF.Blob.lzma_data)
}

// optional bytes OBSOLETE_bzip2_data = 5 [deprecated = true];
inline bool Blob::has_obsolete_bzip2_data() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Blob::set_has_obsolete_bzip2_data() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Blob::clear_has_obsolete_bzip2_data() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Blob::clear_obsolete_bzip2_data() {
  obsolete_bzip2_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_obsolete_bzip2_data();
}
inline const ::std::string& Blob::obsolete_bzip2_data() const {
  // @@protoc_insertion_point(field_get:OSMPBF.Blob.OBSOLETE_bzip2_data)
  return obsolete_bzip2_data_.GetNoArena();
}
inline void Blob::set_obsolete_bzip2_data(const ::std::string& value) {
  set_has_obsolete_bzip2_data();
  obsolete_bzip2_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:OSMPBF.Blob.OBSOLETE_bzip2_data)
}
#if LANG_CXX11
inline void Blob::set_obsolete_bzip2_data(::std::string&& value) {
  set_has_obsolete_bzip2_data();
  obsolete_bzip2_data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:OSMPBF.Blob.OBSOLETE_bzip2_data)
}
#endif
inline void Blob::set_obsolete_bzip2_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_obsolete_bzip2_data();
  obsolete_bzip2_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:OSMPBF.Blob.OBSOLETE_bzip2_data)
}
inline void Blob::set_obsolete_bzip2_data(const void* value, size_t size) {
  set_has_obsolete_bzip2_data();
  obsolete_bzip2_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:OSMPBF.Blob.OBSOLETE_bzip2_data)
}
inline ::std::string* Blob::mutable_obsolete_bzip2_data() {
  set_has_obsolete_bzip2_data();
  // @@protoc_insertion_point(field_mutable:OSMPBF.Blob.OBSOLETE_bzip2_data)
  return obsolete_bzip2_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Blob::release_obsolete_bzip2_data() {
  // @@protoc_insertion_point(field_release:OSMPBF.Blob.OBSOLETE_bzip2_data)
  if (!has_obsolete_bzip2_data()) {
    return NULL;
  }
  clear_has_obsolete_bzip2_data();
  return obsolete_bzip2_data_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Blob::set_allocated_obsolete_bzip2_data(::std::string* obsolete_bzip2_data) {
  if (obsolete_bzip2_data != NULL) {
    set_has_obsolete_bzip2_data();
  } else {
    clear_has_obsolete_bzip2_data();
  }
  obsolete_bzip2_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), obsolete_bzip2_data);
  // @@protoc_insertion_point(field_set_allocated:OSMPBF.Blob.OBSOLETE_bzip2_data)
}

// -------------------------------------------------------------------

// BlobHeader

// required string type = 1;
inline bool BlobHeader::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BlobHeader::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BlobHeader::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BlobHeader::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_type();
}
inline const ::std::string& BlobHeader::type() const {
  // @@protoc_insertion_point(field_get:OSMPBF.BlobHeader.type)
  return type_.GetNoArena();
}
inline void BlobHeader::set_type(const ::std::string& value) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:OSMPBF.BlobHeader.type)
}
#if LANG_CXX11
inline void BlobHeader::set_type(::std::string&& value) {
  set_has_type();
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:OSMPBF.BlobHeader.type)
}
#endif
inline void BlobHeader::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:OSMPBF.BlobHeader.type)
}
inline void BlobHeader::set_type(const char* value, size_t size) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:OSMPBF.BlobHeader.type)
}
inline ::std::string* BlobHeader::mutable_type() {
  set_has_type();
  // @@protoc_insertion_point(field_mutable:OSMPBF.BlobHeader.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BlobHeader::release_type() {
  // @@protoc_insertion_point(field_release:OSMPBF.BlobHeader.type)
  if (!has_type()) {
    return NULL;
  }
  clear_has_type();
  return type_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BlobHeader::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    set_has_type();
  } else {
    clear_has_type();
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:OSMPBF.BlobHeader.type)
}

// optional bytes indexdata = 2;
inline bool BlobHeader::has_indexdata() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BlobHeader::set_has_indexdata() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BlobHeader::clear_has_indexdata() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BlobHeader::clear_indexdata() {
  indexdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_indexdata();
}
inline const ::std::string& BlobHeader::indexdata() const {
  // @@protoc_insertion_point(field_get:OSMPBF.BlobHeader.indexdata)
  return indexdata_.GetNoArena();
}
inline void BlobHeader::set_indexdata(const ::std::string& value) {
  set_has_indexdata();
  indexdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:OSMPBF.BlobHeader.indexdata)
}
#if LANG_CXX11
inline void BlobHeader::set_indexdata(::std::string&& value) {
  set_has_indexdata();
  indexdata_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:OSMPBF.BlobHeader.indexdata)
}
#endif
inline void BlobHeader::set_indexdata(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_indexdata();
  indexdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:OSMPBF.BlobHeader.indexdata)
}
inline void BlobHeader::set_indexdata(const void* value, size_t size) {
  set_has_indexdata();
  indexdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:OSMPBF.BlobHeader.indexdata)
}
inline ::std::string* BlobHeader::mutable_indexdata() {
  set_has_indexdata();
  // @@protoc_insertion_point(field_mutable:OSMPBF.BlobHeader.indexdata)
  return indexdata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BlobHeader::release_indexdata() {
  // @@protoc_insertion_point(field_release:OSMPBF.BlobHeader.indexdata)
  if (!has_indexdata()) {
    return NULL;
  }
  clear_has_indexdata();
  return indexdata_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BlobHeader::set_allocated_indexdata(::std::string* indexdata) {
  if (indexdata != NULL) {
    set_has_indexdata();
  } else {
    clear_has_indexdata();
  }
  indexdata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), indexdata);
  // @@protoc_insertion_point(field_set_allocated:OSMPBF.BlobHeader.indexdata)
}

// required int32 datasize = 3;
inline bool BlobHeader::has_datasize() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BlobHeader::set_has_datasize() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BlobHeader::clear_has_datasize() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BlobHeader::clear_datasize() {
  datasize_ = 0;
  clear_has_datasize();
}
inline ::google::protobuf::int32 BlobHeader::datasize() const {
  // @@protoc_insertion_point(field_get:OSMPBF.BlobHeader.datasize)
  return datasize_;
}
inline void BlobHeader::set_datasize(::google::protobuf::int32 value) {
  set_has_datasize();
  datasize_ = value;
  // @@protoc_insertion_point(field_set:OSMPBF.BlobHeader.datasize)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace OSMPBF

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_fileformat_2eproto
