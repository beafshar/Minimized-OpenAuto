// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AudioFocusTypeEnum.proto

#ifndef PROTOBUF_INCLUDED_AudioFocusTypeEnum_2eproto
#define PROTOBUF_INCLUDED_AudioFocusTypeEnum_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_AudioFocusTypeEnum_2eproto 

namespace protobuf_AudioFocusTypeEnum_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_AudioFocusTypeEnum_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {
class AudioFocusType;
class AudioFocusTypeDefaultTypeInternal;
extern AudioFocusTypeDefaultTypeInternal _AudioFocusType_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> ::f1x::aasdk::proto::enums::AudioFocusType* Arena::CreateMaybeMessage<::f1x::aasdk::proto::enums::AudioFocusType>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {

enum AudioFocusType_Enum {
  AudioFocusType_Enum_NONE = 0,
  AudioFocusType_Enum_GAIN = 1,
  AudioFocusType_Enum_GAIN_TRANSIENT = 2,
  AudioFocusType_Enum_GAIN_NAVI = 3,
  AudioFocusType_Enum_RELEASE = 4
};
bool AudioFocusType_Enum_IsValid(int value);
const AudioFocusType_Enum AudioFocusType_Enum_Enum_MIN = AudioFocusType_Enum_NONE;
const AudioFocusType_Enum AudioFocusType_Enum_Enum_MAX = AudioFocusType_Enum_RELEASE;
const int AudioFocusType_Enum_Enum_ARRAYSIZE = AudioFocusType_Enum_Enum_MAX + 1;

const ::google::protobuf::EnumDescriptor* AudioFocusType_Enum_descriptor();
inline const ::std::string& AudioFocusType_Enum_Name(AudioFocusType_Enum value) {
  return ::google::protobuf::internal::NameOfEnum(
    AudioFocusType_Enum_descriptor(), value);
}
inline bool AudioFocusType_Enum_Parse(
    const ::std::string& name, AudioFocusType_Enum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AudioFocusType_Enum>(
    AudioFocusType_Enum_descriptor(), name, value);
}
// ===================================================================

class AudioFocusType : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.enums.AudioFocusType) */ {
 public:
  AudioFocusType();
  virtual ~AudioFocusType();

  AudioFocusType(const AudioFocusType& from);

  inline AudioFocusType& operator=(const AudioFocusType& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AudioFocusType(AudioFocusType&& from) noexcept
    : AudioFocusType() {
    *this = ::std::move(from);
  }

  inline AudioFocusType& operator=(AudioFocusType&& from) noexcept {
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
  static const AudioFocusType& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AudioFocusType* internal_default_instance() {
    return reinterpret_cast<const AudioFocusType*>(
               &_AudioFocusType_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AudioFocusType* other);
  friend void swap(AudioFocusType& a, AudioFocusType& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AudioFocusType* New() const final {
    return CreateMaybeMessage<AudioFocusType>(NULL);
  }

  AudioFocusType* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AudioFocusType>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AudioFocusType& from);
  void MergeFrom(const AudioFocusType& from);
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
  void InternalSwap(AudioFocusType* other);
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

  typedef AudioFocusType_Enum Enum;
  static const Enum NONE =
    AudioFocusType_Enum_NONE;
  static const Enum GAIN =
    AudioFocusType_Enum_GAIN;
  static const Enum GAIN_TRANSIENT =
    AudioFocusType_Enum_GAIN_TRANSIENT;
  static const Enum GAIN_NAVI =
    AudioFocusType_Enum_GAIN_NAVI;
  static const Enum RELEASE =
    AudioFocusType_Enum_RELEASE;
  static inline bool Enum_IsValid(int value) {
    return AudioFocusType_Enum_IsValid(value);
  }
  static const Enum Enum_MIN =
    AudioFocusType_Enum_Enum_MIN;
  static const Enum Enum_MAX =
    AudioFocusType_Enum_Enum_MAX;
  static const int Enum_ARRAYSIZE =
    AudioFocusType_Enum_Enum_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Enum_descriptor() {
    return AudioFocusType_Enum_descriptor();
  }
  static inline const ::std::string& Enum_Name(Enum value) {
    return AudioFocusType_Enum_Name(value);
  }
  static inline bool Enum_Parse(const ::std::string& name,
      Enum* value) {
    return AudioFocusType_Enum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.enums.AudioFocusType)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_AudioFocusTypeEnum_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AudioFocusType

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::f1x::aasdk::proto::enums::AudioFocusType_Enum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::f1x::aasdk::proto::enums::AudioFocusType_Enum>() {
  return ::f1x::aasdk::proto::enums::AudioFocusType_Enum_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_AudioFocusTypeEnum_2eproto