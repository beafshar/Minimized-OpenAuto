// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ButtonEventData.proto

#include "ButtonEventData.pb.h"

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
namespace data {
class ButtonEventDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ButtonEvent>
      _instance;
} _ButtonEvent_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_ButtonEventData_2eproto {
static void InitDefaultsButtonEvent() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_ButtonEvent_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::ButtonEvent();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::ButtonEvent::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ButtonEvent =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsButtonEvent}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ButtonEvent.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::ButtonEvent, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::ButtonEvent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::ButtonEvent, scan_code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::ButtonEvent, is_pressed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::ButtonEvent, meta_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::ButtonEvent, long_press_),
  0,
  2,
  1,
  3,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::f1x::aasdk::proto::data::ButtonEvent)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::data::_ButtonEvent_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "ButtonEventData.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\025ButtonEventData.proto\022\024f1x.aasdk.proto"
      ".data\"V\n\013ButtonEvent\022\021\n\tscan_code\030\001 \002(\r\022"
      "\022\n\nis_pressed\030\002 \002(\010\022\014\n\004meta\030\003 \001(\r\022\022\n\nlon"
      "g_press\030\004 \001(\010"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 133);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ButtonEventData.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_ButtonEventData_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void ButtonEvent::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ButtonEvent::kScanCodeFieldNumber;
const int ButtonEvent::kIsPressedFieldNumber;
const int ButtonEvent::kMetaFieldNumber;
const int ButtonEvent::kLongPressFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ButtonEvent::ButtonEvent()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_ButtonEventData_2eproto::scc_info_ButtonEvent.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.data.ButtonEvent)
}
ButtonEvent::ButtonEvent(const ButtonEvent& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&scan_code_, &from.scan_code_,
    static_cast<size_t>(reinterpret_cast<char*>(&long_press_) -
    reinterpret_cast<char*>(&scan_code_)) + sizeof(long_press_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.ButtonEvent)
}

void ButtonEvent::SharedCtor() {
  ::memset(&scan_code_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&long_press_) -
      reinterpret_cast<char*>(&scan_code_)) + sizeof(long_press_));
}

ButtonEvent::~ButtonEvent() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.ButtonEvent)
  SharedDtor();
}

void ButtonEvent::SharedDtor() {
}

void ButtonEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ButtonEvent::descriptor() {
  ::protobuf_ButtonEventData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ButtonEventData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ButtonEvent& ButtonEvent::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_ButtonEventData_2eproto::scc_info_ButtonEvent.base);
  return *internal_default_instance();
}


void ButtonEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.ButtonEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    ::memset(&scan_code_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&long_press_) -
        reinterpret_cast<char*>(&scan_code_)) + sizeof(long_press_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ButtonEvent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.data.ButtonEvent)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 scan_code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_scan_code();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &scan_code_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool is_pressed = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_is_pressed();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_pressed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 meta = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_meta();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &meta_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool long_press = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_long_press();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &long_press_)));
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.data.ButtonEvent)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.data.ButtonEvent)
  return false;
#undef DO_
}

void ButtonEvent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.data.ButtonEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 scan_code = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->scan_code(), output);
  }

  // required bool is_pressed = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->is_pressed(), output);
  }

  // optional uint32 meta = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->meta(), output);
  }

  // optional bool long_press = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->long_press(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.data.ButtonEvent)
}

::google::protobuf::uint8* ButtonEvent::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.ButtonEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 scan_code = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->scan_code(), target);
  }

  // required bool is_pressed = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->is_pressed(), target);
  }

  // optional uint32 meta = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->meta(), target);
  }

  // optional bool long_press = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->long_press(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.ButtonEvent)
  return target;
}

size_t ButtonEvent::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.data.ButtonEvent)
  size_t total_size = 0;

  if (has_scan_code()) {
    // required uint32 scan_code = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->scan_code());
  }

  if (has_is_pressed()) {
    // required bool is_pressed = 2;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t ButtonEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.ButtonEvent)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000005) ^ 0x00000005) == 0) {  // All required fields are present.
    // required uint32 scan_code = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->scan_code());

    // required bool is_pressed = 2;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional uint32 meta = 3;
  if (has_meta()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->meta());
  }

  // optional bool long_press = 4;
  if (has_long_press()) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ButtonEvent::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.ButtonEvent)
  GOOGLE_DCHECK_NE(&from, this);
  const ButtonEvent* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ButtonEvent>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.ButtonEvent)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.ButtonEvent)
    MergeFrom(*source);
  }
}

void ButtonEvent::MergeFrom(const ButtonEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.ButtonEvent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      scan_code_ = from.scan_code_;
    }
    if (cached_has_bits & 0x00000002u) {
      meta_ = from.meta_;
    }
    if (cached_has_bits & 0x00000004u) {
      is_pressed_ = from.is_pressed_;
    }
    if (cached_has_bits & 0x00000008u) {
      long_press_ = from.long_press_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ButtonEvent::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.ButtonEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ButtonEvent::CopyFrom(const ButtonEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.ButtonEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ButtonEvent::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000005) != 0x00000005) return false;
  return true;
}

void ButtonEvent::Swap(ButtonEvent* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ButtonEvent::InternalSwap(ButtonEvent* other) {
  using std::swap;
  swap(scan_code_, other->scan_code_);
  swap(meta_, other->meta_);
  swap(is_pressed_, other->is_pressed_);
  swap(long_press_, other->long_press_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ButtonEvent::GetMetadata() const {
  protobuf_ButtonEventData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ButtonEventData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::data::ButtonEvent* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::ButtonEvent >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::data::ButtonEvent >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)