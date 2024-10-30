// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: remoteFunction.proto

#include "remoteFunction.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace func_call {

inline constexpr ans::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : result_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR ans::ans(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ansDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ansDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ansDefaultTypeInternal() {}
  union {
    ans _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ansDefaultTypeInternal _ans_default_instance_;

inline constexpr SquareTwoNum::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : num1_{0},
        num2_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR SquareTwoNum::SquareTwoNum(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct SquareTwoNumDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SquareTwoNumDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SquareTwoNumDefaultTypeInternal() {}
  union {
    SquareTwoNum _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SquareTwoNumDefaultTypeInternal _SquareTwoNum_default_instance_;

inline constexpr Numbers::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : opttimes_{0},
        num1_{0},
        num2_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Numbers::Numbers(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct NumbersDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NumbersDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~NumbersDefaultTypeInternal() {}
  union {
    Numbers _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NumbersDefaultTypeInternal _Numbers_default_instance_;
}  // namespace func_call
static ::_pb::Metadata file_level_metadata_remoteFunction_2eproto[3];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_remoteFunction_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_remoteFunction_2eproto = nullptr;
const ::uint32_t TableStruct_remoteFunction_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::func_call::Numbers, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::func_call::Numbers, _impl_.num1_),
    PROTOBUF_FIELD_OFFSET(::func_call::Numbers, _impl_.num2_),
    PROTOBUF_FIELD_OFFSET(::func_call::Numbers, _impl_.opttimes_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::func_call::ans, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::func_call::ans, _impl_.result_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::func_call::SquareTwoNum, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::func_call::SquareTwoNum, _impl_.num1_),
    PROTOBUF_FIELD_OFFSET(::func_call::SquareTwoNum, _impl_.num2_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::func_call::Numbers)},
        {11, -1, -1, sizeof(::func_call::ans)},
        {20, -1, -1, sizeof(::func_call::SquareTwoNum)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::func_call::_Numbers_default_instance_._instance,
    &::func_call::_ans_default_instance_._instance,
    &::func_call::_SquareTwoNum_default_instance_._instance,
};
const char descriptor_table_protodef_remoteFunction_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\024remoteFunction.proto\022\tfunc_call\"7\n\007Num"
    "bers\022\014\n\004num1\030\002 \001(\005\022\014\n\004num2\030\003 \001(\005\022\020\n\010optT"
    "imes\030\001 \001(\005\"\025\n\003ans\022\016\n\006result\030\001 \001(\005\"*\n\014Squ"
    "areTwoNum\022\014\n\004num1\030\001 \001(\005\022\014\n\004num2\030\002 \001(\0052\373\001"
    "\n\016RemoteFunction\0221\n\taddTwoNum\022\022.func_cal"
    "l.Numbers\032\016.func_call.ans\"\000\0224\n\nplusTwoNu"
    "m\022\022.func_call.Numbers\032\016.func_call.ans\"\0000"
    "\001\022>\n\013plusTwoNum2\022\022.func_call.Numbers\032\027.f"
    "unc_call.SquareTwoNum\"\000(\001\022@\n\013plusTwoNum3"
    "\022\022.func_call.Numbers\032\027.func_call.SquareT"
    "woNum\"\000(\0010\001b\006proto3"
};
static ::absl::once_flag descriptor_table_remoteFunction_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_remoteFunction_2eproto = {
    false,
    false,
    419,
    descriptor_table_protodef_remoteFunction_2eproto,
    "remoteFunction.proto",
    &descriptor_table_remoteFunction_2eproto_once,
    nullptr,
    0,
    3,
    schemas,
    file_default_instances,
    TableStruct_remoteFunction_2eproto::offsets,
    file_level_metadata_remoteFunction_2eproto,
    file_level_enum_descriptors_remoteFunction_2eproto,
    file_level_service_descriptors_remoteFunction_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_remoteFunction_2eproto_getter() {
  return &descriptor_table_remoteFunction_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_remoteFunction_2eproto(&descriptor_table_remoteFunction_2eproto);
namespace func_call {
// ===================================================================

class Numbers::_Internal {
 public:
};

Numbers::Numbers(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:func_call.Numbers)
}
Numbers::Numbers(
    ::google::protobuf::Arena* arena, const Numbers& from)
    : Numbers(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE Numbers::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void Numbers::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, opttimes_),
           0,
           offsetof(Impl_, num2_) -
               offsetof(Impl_, opttimes_) +
               sizeof(Impl_::num2_));
}
Numbers::~Numbers() {
  // @@protoc_insertion_point(destructor:func_call.Numbers)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Numbers::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Numbers::Clear() {
// @@protoc_insertion_point(message_clear_start:func_call.Numbers)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.opttimes_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.num2_) -
      reinterpret_cast<char*>(&_impl_.opttimes_)) + sizeof(_impl_.num2_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Numbers::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 0, 2> Numbers::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Numbers_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // int32 optTimes = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Numbers, _impl_.opttimes_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(Numbers, _impl_.opttimes_)}},
    // int32 num1 = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Numbers, _impl_.num1_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(Numbers, _impl_.num1_)}},
    // int32 num2 = 3;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Numbers, _impl_.num2_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(Numbers, _impl_.num2_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 optTimes = 1;
    {PROTOBUF_FIELD_OFFSET(Numbers, _impl_.opttimes_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // int32 num1 = 2;
    {PROTOBUF_FIELD_OFFSET(Numbers, _impl_.num1_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // int32 num2 = 3;
    {PROTOBUF_FIELD_OFFSET(Numbers, _impl_.num2_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* Numbers::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:func_call.Numbers)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 optTimes = 1;
  if (this->_internal_opttimes() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_opttimes(), target);
  }

  // int32 num1 = 2;
  if (this->_internal_num1() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_num1(), target);
  }

  // int32 num2 = 3;
  if (this->_internal_num2() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<3>(
            stream, this->_internal_num2(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:func_call.Numbers)
  return target;
}

::size_t Numbers::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:func_call.Numbers)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 optTimes = 1;
  if (this->_internal_opttimes() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_opttimes());
  }

  // int32 num1 = 2;
  if (this->_internal_num1() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_num1());
  }

  // int32 num2 = 3;
  if (this->_internal_num2() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_num2());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Numbers::_class_data_ = {
    Numbers::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Numbers::GetClassData() const {
  return &_class_data_;
}

void Numbers::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Numbers*>(&to_msg);
  auto& from = static_cast<const Numbers&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:func_call.Numbers)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_opttimes() != 0) {
    _this->_internal_set_opttimes(from._internal_opttimes());
  }
  if (from._internal_num1() != 0) {
    _this->_internal_set_num1(from._internal_num1());
  }
  if (from._internal_num2() != 0) {
    _this->_internal_set_num2(from._internal_num2());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Numbers::CopyFrom(const Numbers& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:func_call.Numbers)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Numbers::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Numbers::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Numbers::InternalSwap(Numbers* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Numbers, _impl_.num2_)
      + sizeof(Numbers::_impl_.num2_)
      - PROTOBUF_FIELD_OFFSET(Numbers, _impl_.opttimes_)>(
          reinterpret_cast<char*>(&_impl_.opttimes_),
          reinterpret_cast<char*>(&other->_impl_.opttimes_));
}

::google::protobuf::Metadata Numbers::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_remoteFunction_2eproto_getter, &descriptor_table_remoteFunction_2eproto_once,
      file_level_metadata_remoteFunction_2eproto[0]);
}
// ===================================================================

class ans::_Internal {
 public:
};

ans::ans(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:func_call.ans)
}
ans::ans(
    ::google::protobuf::Arena* arena, const ans& from)
    : ans(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE ans::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void ans::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.result_ = {};
}
ans::~ans() {
  // @@protoc_insertion_point(destructor:func_call.ans)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void ans::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void ans::Clear() {
// @@protoc_insertion_point(message_clear_start:func_call.ans)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.result_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* ans::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> ans::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_ans_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // int32 result = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(ans, _impl_.result_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(ans, _impl_.result_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 result = 1;
    {PROTOBUF_FIELD_OFFSET(ans, _impl_.result_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* ans::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:func_call.ans)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 result = 1;
  if (this->_internal_result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_result(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:func_call.ans)
  return target;
}

::size_t ans::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:func_call.ans)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->_internal_result() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_result());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData ans::_class_data_ = {
    ans::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* ans::GetClassData() const {
  return &_class_data_;
}

void ans::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<ans*>(&to_msg);
  auto& from = static_cast<const ans&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:func_call.ans)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_result() != 0) {
    _this->_internal_set_result(from._internal_result());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void ans::CopyFrom(const ans& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:func_call.ans)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool ans::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* ans::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void ans::InternalSwap(ans* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        swap(_impl_.result_, other->_impl_.result_);
}

::google::protobuf::Metadata ans::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_remoteFunction_2eproto_getter, &descriptor_table_remoteFunction_2eproto_once,
      file_level_metadata_remoteFunction_2eproto[1]);
}
// ===================================================================

class SquareTwoNum::_Internal {
 public:
};

SquareTwoNum::SquareTwoNum(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:func_call.SquareTwoNum)
}
SquareTwoNum::SquareTwoNum(
    ::google::protobuf::Arena* arena, const SquareTwoNum& from)
    : SquareTwoNum(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE SquareTwoNum::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void SquareTwoNum::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, num1_),
           0,
           offsetof(Impl_, num2_) -
               offsetof(Impl_, num1_) +
               sizeof(Impl_::num2_));
}
SquareTwoNum::~SquareTwoNum() {
  // @@protoc_insertion_point(destructor:func_call.SquareTwoNum)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void SquareTwoNum::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void SquareTwoNum::Clear() {
// @@protoc_insertion_point(message_clear_start:func_call.SquareTwoNum)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.num1_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.num2_) -
      reinterpret_cast<char*>(&_impl_.num1_)) + sizeof(_impl_.num2_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* SquareTwoNum::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> SquareTwoNum::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_SquareTwoNum_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // int32 num2 = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(SquareTwoNum, _impl_.num2_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(SquareTwoNum, _impl_.num2_)}},
    // int32 num1 = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(SquareTwoNum, _impl_.num1_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(SquareTwoNum, _impl_.num1_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 num1 = 1;
    {PROTOBUF_FIELD_OFFSET(SquareTwoNum, _impl_.num1_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // int32 num2 = 2;
    {PROTOBUF_FIELD_OFFSET(SquareTwoNum, _impl_.num2_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* SquareTwoNum::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:func_call.SquareTwoNum)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 num1 = 1;
  if (this->_internal_num1() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_num1(), target);
  }

  // int32 num2 = 2;
  if (this->_internal_num2() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_num2(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:func_call.SquareTwoNum)
  return target;
}

::size_t SquareTwoNum::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:func_call.SquareTwoNum)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 num1 = 1;
  if (this->_internal_num1() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_num1());
  }

  // int32 num2 = 2;
  if (this->_internal_num2() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_num2());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData SquareTwoNum::_class_data_ = {
    SquareTwoNum::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* SquareTwoNum::GetClassData() const {
  return &_class_data_;
}

void SquareTwoNum::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<SquareTwoNum*>(&to_msg);
  auto& from = static_cast<const SquareTwoNum&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:func_call.SquareTwoNum)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_num1() != 0) {
    _this->_internal_set_num1(from._internal_num1());
  }
  if (from._internal_num2() != 0) {
    _this->_internal_set_num2(from._internal_num2());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void SquareTwoNum::CopyFrom(const SquareTwoNum& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:func_call.SquareTwoNum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool SquareTwoNum::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* SquareTwoNum::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void SquareTwoNum::InternalSwap(SquareTwoNum* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SquareTwoNum, _impl_.num2_)
      + sizeof(SquareTwoNum::_impl_.num2_)
      - PROTOBUF_FIELD_OFFSET(SquareTwoNum, _impl_.num1_)>(
          reinterpret_cast<char*>(&_impl_.num1_),
          reinterpret_cast<char*>(&other->_impl_.num1_));
}

::google::protobuf::Metadata SquareTwoNum::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_remoteFunction_2eproto_getter, &descriptor_table_remoteFunction_2eproto_once,
      file_level_metadata_remoteFunction_2eproto[2]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace func_call
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"