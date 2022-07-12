// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVInputChannelData.proto

#include "AVInputChannelData.pb.h"

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

namespace protobuf_AudioConfigData_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_AudioConfigData_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_AudioConfig;
}  // namespace protobuf_AudioConfigData_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class AVInputChannelDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AVInputChannel>
      _instance;
} _AVInputChannel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_AVInputChannelData_2eproto {
static void InitDefaultsAVInputChannel() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_AVInputChannel_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::AVInputChannel();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::AVInputChannel::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_AVInputChannel =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsAVInputChannel}, {
      &protobuf_AudioConfigData_2eproto::scc_info_AudioConfig.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AVInputChannel.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::AVInputChannel, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::AVInputChannel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::AVInputChannel, stream_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::AVInputChannel, audio_config_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::AVInputChannel, available_while_in_call_),
  1,
  0,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::f1x::aasdk::proto::data::AVInputChannel)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::data::_AVInputChannel_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "AVInputChannelData.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\030AVInputChannelData.proto\022\024f1x.aasdk.pr"
      "oto.data\032\026AVStreamTypeEnum.proto\032\025AudioC"
      "onfigData.proto\"\251\001\n\016AVInputChannel\022=\n\013st"
      "ream_type\030\001 \002(\0162(.f1x.aasdk.proto.enums."
      "AVStreamType.Enum\0227\n\014audio_config\030\002 \002(\0132"
      "!.f1x.aasdk.proto.data.AudioConfig\022\037\n\027av"
      "ailable_while_in_call\030\003 \001(\010"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 267);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AVInputChannelData.proto", &protobuf_RegisterTypes);
  ::protobuf_AVStreamTypeEnum_2eproto::AddDescriptors();
  ::protobuf_AudioConfigData_2eproto::AddDescriptors();
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
}  // namespace protobuf_AVInputChannelData_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void AVInputChannel::InitAsDefaultInstance() {
  ::f1x::aasdk::proto::data::_AVInputChannel_default_instance_._instance.get_mutable()->audio_config_ = const_cast< ::f1x::aasdk::proto::data::AudioConfig*>(
      ::f1x::aasdk::proto::data::AudioConfig::internal_default_instance());
}
void AVInputChannel::clear_audio_config() {
  if (audio_config_ != NULL) audio_config_->Clear();
  clear_has_audio_config();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AVInputChannel::kStreamTypeFieldNumber;
const int AVInputChannel::kAudioConfigFieldNumber;
const int AVInputChannel::kAvailableWhileInCallFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AVInputChannel::AVInputChannel()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_AVInputChannelData_2eproto::scc_info_AVInputChannel.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.data.AVInputChannel)
}
AVInputChannel::AVInputChannel(const AVInputChannel& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_audio_config()) {
    audio_config_ = new ::f1x::aasdk::proto::data::AudioConfig(*from.audio_config_);
  } else {
    audio_config_ = NULL;
  }
  ::memcpy(&stream_type_, &from.stream_type_,
    static_cast<size_t>(reinterpret_cast<char*>(&available_while_in_call_) -
    reinterpret_cast<char*>(&stream_type_)) + sizeof(available_while_in_call_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.AVInputChannel)
}

void AVInputChannel::SharedCtor() {
  ::memset(&audio_config_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&available_while_in_call_) -
      reinterpret_cast<char*>(&audio_config_)) + sizeof(available_while_in_call_));
}

AVInputChannel::~AVInputChannel() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.AVInputChannel)
  SharedDtor();
}

void AVInputChannel::SharedDtor() {
  if (this != internal_default_instance()) delete audio_config_;
}

void AVInputChannel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AVInputChannel::descriptor() {
  ::protobuf_AVInputChannelData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AVInputChannelData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AVInputChannel& AVInputChannel::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_AVInputChannelData_2eproto::scc_info_AVInputChannel.base);
  return *internal_default_instance();
}


void AVInputChannel::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.AVInputChannel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(audio_config_ != NULL);
    audio_config_->Clear();
  }
  if (cached_has_bits & 6u) {
    ::memset(&stream_type_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&available_while_in_call_) -
        reinterpret_cast<char*>(&stream_type_)) + sizeof(available_while_in_call_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AVInputChannel::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.data.AVInputChannel)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .f1x.aasdk.proto.enums.AVStreamType.Enum stream_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::f1x::aasdk::proto::enums::AVStreamType_Enum_IsValid(value)) {
            set_stream_type(static_cast< ::f1x::aasdk::proto::enums::AVStreamType_Enum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .f1x.aasdk.proto.data.AudioConfig audio_config = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_audio_config()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool available_while_in_call = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_available_while_in_call();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &available_while_in_call_)));
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.data.AVInputChannel)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.data.AVInputChannel)
  return false;
#undef DO_
}

void AVInputChannel::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.data.AVInputChannel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .f1x.aasdk.proto.enums.AVStreamType.Enum stream_type = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->stream_type(), output);
  }

  // required .f1x.aasdk.proto.data.AudioConfig audio_config = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_audio_config(), output);
  }

  // optional bool available_while_in_call = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->available_while_in_call(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.data.AVInputChannel)
}

::google::protobuf::uint8* AVInputChannel::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.AVInputChannel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .f1x.aasdk.proto.enums.AVStreamType.Enum stream_type = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->stream_type(), target);
  }

  // required .f1x.aasdk.proto.data.AudioConfig audio_config = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_audio_config(), deterministic, target);
  }

  // optional bool available_while_in_call = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->available_while_in_call(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.AVInputChannel)
  return target;
}

size_t AVInputChannel::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.data.AVInputChannel)
  size_t total_size = 0;

  if (has_audio_config()) {
    // required .f1x.aasdk.proto.data.AudioConfig audio_config = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *audio_config_);
  }

  if (has_stream_type()) {
    // required .f1x.aasdk.proto.enums.AVStreamType.Enum stream_type = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->stream_type());
  }

  return total_size;
}
size_t AVInputChannel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.AVInputChannel)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .f1x.aasdk.proto.data.AudioConfig audio_config = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *audio_config_);

    // required .f1x.aasdk.proto.enums.AVStreamType.Enum stream_type = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->stream_type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional bool available_while_in_call = 3;
  if (has_available_while_in_call()) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AVInputChannel::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.AVInputChannel)
  GOOGLE_DCHECK_NE(&from, this);
  const AVInputChannel* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AVInputChannel>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.AVInputChannel)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.AVInputChannel)
    MergeFrom(*source);
  }
}

void AVInputChannel::MergeFrom(const AVInputChannel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.AVInputChannel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_audio_config()->::f1x::aasdk::proto::data::AudioConfig::MergeFrom(from.audio_config());
    }
    if (cached_has_bits & 0x00000002u) {
      stream_type_ = from.stream_type_;
    }
    if (cached_has_bits & 0x00000004u) {
      available_while_in_call_ = from.available_while_in_call_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void AVInputChannel::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.AVInputChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AVInputChannel::CopyFrom(const AVInputChannel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.AVInputChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AVInputChannel::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  if (has_audio_config()) {
    if (!this->audio_config_->IsInitialized()) return false;
  }
  return true;
}

void AVInputChannel::Swap(AVInputChannel* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AVInputChannel::InternalSwap(AVInputChannel* other) {
  using std::swap;
  swap(audio_config_, other->audio_config_);
  swap(stream_type_, other->stream_type_);
  swap(available_while_in_call_, other->available_while_in_call_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AVInputChannel::GetMetadata() const {
  protobuf_AVInputChannelData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AVInputChannelData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::data::AVInputChannel* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::AVInputChannel >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::data::AVInputChannel >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
