// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AudioFocusResponseMessage.proto

#include "AudioFocusResponseMessage.pb.h"

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

namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class AudioFocusResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AudioFocusResponse>
      _instance;
} _AudioFocusResponse_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_AudioFocusResponseMessage_2eproto {
static void InitDefaultsAudioFocusResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::messages::_AudioFocusResponse_default_instance_;
    new (ptr) ::f1x::aasdk::proto::messages::AudioFocusResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::messages::AudioFocusResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AudioFocusResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAudioFocusResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AudioFocusResponse.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AudioFocusResponse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AudioFocusResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AudioFocusResponse, audio_focus_state_),
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::f1x::aasdk::proto::messages::AudioFocusResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::messages::_AudioFocusResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "AudioFocusResponseMessage.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\037AudioFocusResponseMessage.proto\022\030f1x.a"
      "asdk.proto.messages\032\031AudioFocusStateEnum"
      ".proto\"\\\n\022AudioFocusResponse\022F\n\021audio_fo"
      "cus_state\030\001 \002(\0162+.f1x.aasdk.proto.enums."
      "AudioFocusState.Enum"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 180);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AudioFocusResponseMessage.proto", &protobuf_RegisterTypes);
  ::protobuf_AudioFocusStateEnum_2eproto::AddDescriptors();
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
}  // namespace protobuf_AudioFocusResponseMessage_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

void AudioFocusResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AudioFocusResponse::kAudioFocusStateFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AudioFocusResponse::AudioFocusResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_AudioFocusResponseMessage_2eproto::scc_info_AudioFocusResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.messages.AudioFocusResponse)
}
AudioFocusResponse::AudioFocusResponse(const AudioFocusResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  audio_focus_state_ = from.audio_focus_state_;
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.messages.AudioFocusResponse)
}

void AudioFocusResponse::SharedCtor() {
  audio_focus_state_ = 0;
}

AudioFocusResponse::~AudioFocusResponse() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.messages.AudioFocusResponse)
  SharedDtor();
}

void AudioFocusResponse::SharedDtor() {
}

void AudioFocusResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AudioFocusResponse::descriptor() {
  ::protobuf_AudioFocusResponseMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AudioFocusResponseMessage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AudioFocusResponse& AudioFocusResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_AudioFocusResponseMessage_2eproto::scc_info_AudioFocusResponse.base);
  return *internal_default_instance();
}


void AudioFocusResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.messages.AudioFocusResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  audio_focus_state_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AudioFocusResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.messages.AudioFocusResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .f1x.aasdk.proto.enums.AudioFocusState.Enum audio_focus_state = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::f1x::aasdk::proto::enums::AudioFocusState_Enum_IsValid(value)) {
            set_audio_focus_state(static_cast< ::f1x::aasdk::proto::enums::AudioFocusState_Enum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast< ::google::protobuf::uint64>(value));
          }
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.messages.AudioFocusResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.messages.AudioFocusResponse)
  return false;
#undef DO_
}

void AudioFocusResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.messages.AudioFocusResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .f1x.aasdk.proto.enums.AudioFocusState.Enum audio_focus_state = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->audio_focus_state(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.messages.AudioFocusResponse)
}

::google::protobuf::uint8* AudioFocusResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.messages.AudioFocusResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .f1x.aasdk.proto.enums.AudioFocusState.Enum audio_focus_state = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->audio_focus_state(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.messages.AudioFocusResponse)
  return target;
}

size_t AudioFocusResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.messages.AudioFocusResponse)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required .f1x.aasdk.proto.enums.AudioFocusState.Enum audio_focus_state = 1;
  if (has_audio_focus_state()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->audio_focus_state());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AudioFocusResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.messages.AudioFocusResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const AudioFocusResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AudioFocusResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.messages.AudioFocusResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.messages.AudioFocusResponse)
    MergeFrom(*source);
  }
}

void AudioFocusResponse::MergeFrom(const AudioFocusResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.messages.AudioFocusResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_audio_focus_state()) {
    set_audio_focus_state(from.audio_focus_state());
  }
}

void AudioFocusResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.messages.AudioFocusResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AudioFocusResponse::CopyFrom(const AudioFocusResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.messages.AudioFocusResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AudioFocusResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void AudioFocusResponse::Swap(AudioFocusResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AudioFocusResponse::InternalSwap(AudioFocusResponse* other) {
  using std::swap;
  swap(audio_focus_state_, other->audio_focus_state_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AudioFocusResponse::GetMetadata() const {
  protobuf_AudioFocusResponseMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AudioFocusResponseMessage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::messages::AudioFocusResponse* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::messages::AudioFocusResponse >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::messages::AudioFocusResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
