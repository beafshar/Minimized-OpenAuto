// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VideoFPSEnum.proto

#include "VideoFPSEnum.pb.h"

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
namespace enums {
class VideoFPSDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VideoFPS>
      _instance;
} _VideoFPS_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_VideoFPSEnum_2eproto {
static void InitDefaultsVideoFPS() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::enums::_VideoFPS_default_instance_;
    new (ptr) ::f1x::aasdk::proto::enums::VideoFPS();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::enums::VideoFPS::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_VideoFPS =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVideoFPS}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_VideoFPS.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::enums::VideoFPS, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::enums::VideoFPS, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 5, sizeof(::f1x::aasdk::proto::enums::VideoFPS)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::enums::_VideoFPS_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "VideoFPSEnum.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
      "\n\022VideoFPSEnum.proto\022\025f1x.aasdk.proto.en"
      "ums\".\n\010VideoFPS\"\"\n\004Enum\022\010\n\004NONE\020\000\022\007\n\003_30"
      "\020\001\022\007\n\003_60\020\002"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 91);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "VideoFPSEnum.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_VideoFPSEnum_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {
const ::google::protobuf::EnumDescriptor* VideoFPS_Enum_descriptor() {
  protobuf_VideoFPSEnum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_VideoFPSEnum_2eproto::file_level_enum_descriptors[0];
}
bool VideoFPS_Enum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const VideoFPS_Enum VideoFPS::NONE;
const VideoFPS_Enum VideoFPS::_30;
const VideoFPS_Enum VideoFPS::_60;
const VideoFPS_Enum VideoFPS::Enum_MIN;
const VideoFPS_Enum VideoFPS::Enum_MAX;
const int VideoFPS::Enum_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void VideoFPS::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VideoFPS::VideoFPS()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_VideoFPSEnum_2eproto::scc_info_VideoFPS.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.enums.VideoFPS)
}
VideoFPS::VideoFPS(const VideoFPS& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.enums.VideoFPS)
}

void VideoFPS::SharedCtor() {
}

VideoFPS::~VideoFPS() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.enums.VideoFPS)
  SharedDtor();
}

void VideoFPS::SharedDtor() {
}

void VideoFPS::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* VideoFPS::descriptor() {
  ::protobuf_VideoFPSEnum_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_VideoFPSEnum_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VideoFPS& VideoFPS::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_VideoFPSEnum_2eproto::scc_info_VideoFPS.base);
  return *internal_default_instance();
}


void VideoFPS::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.enums.VideoFPS)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool VideoFPS::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.enums.VideoFPS)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.enums.VideoFPS)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.enums.VideoFPS)
  return false;
#undef DO_
}

void VideoFPS::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.enums.VideoFPS)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.enums.VideoFPS)
}

::google::protobuf::uint8* VideoFPS::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.enums.VideoFPS)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.enums.VideoFPS)
  return target;
}

size_t VideoFPS::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.enums.VideoFPS)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VideoFPS::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.enums.VideoFPS)
  GOOGLE_DCHECK_NE(&from, this);
  const VideoFPS* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VideoFPS>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.enums.VideoFPS)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.enums.VideoFPS)
    MergeFrom(*source);
  }
}

void VideoFPS::MergeFrom(const VideoFPS& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.enums.VideoFPS)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void VideoFPS::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.enums.VideoFPS)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VideoFPS::CopyFrom(const VideoFPS& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.enums.VideoFPS)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VideoFPS::IsInitialized() const {
  return true;
}

void VideoFPS::Swap(VideoFPS* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VideoFPS::InternalSwap(VideoFPS* other) {
  using std::swap;
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata VideoFPS::GetMetadata() const {
  protobuf_VideoFPSEnum_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_VideoFPSEnum_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::enums::VideoFPS* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::enums::VideoFPS >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::enums::VideoFPS >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
