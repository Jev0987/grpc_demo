# /*
#  * @Descripttion: 
#  * @Author: jev
#  * @version: 
#  * @Date: 2024-10-29
#  * @LastEditors: jev
#  * @LastEditTime: 2024-10-29
#  */
cmake_minimum_required(VERSION 3.16)

project(testGrpc C CXX)

# 系统环境中有 protobuf，利用find_package查找
find_package(Protobuf CONFIG REQUIRED)
message(STATUS "Using protobuf ${Protobuf_VERSION}")
set(_REFLECTION gRPC::grpc++_reflection)
if(CMAKE_CROSSCOMPILING)
  find_program(_PROTOBUF_PROTOC protoc)
else()
  set(_PROTOBUF_PROTOC $<TARGET_FILE:protobuf::protoc>)
endif()

# 查找 gRPC
# Looks for gRPCConfig.cmake file installed by gRPC's cmake installation.
find_package(gRPC CONFIG REQUIRED)
message(STATUS "Using gRPC ${gRPC_VERSION}")

set(_GRPC_GRPCPP gRPC::grpc++)
if(CMAKE_CROSSCOMPILING)
find_program(_GRPC_CPP_PLUGIN_EXECUTABLE grpc_cpp_plugin)
else()
set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:gRPC::grpc_cpp_plugin>)
endif()

# Proto 文件路径
get_filename_component(tp_proto "./proto/testProto.proto" ABSOLUTE)
get_filename_component(tp_proto_path "${tp_proto}" PATH)

# 生成源文件
set(tp_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/testProto.pb.cc")
set(tp_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/testProto.pb.h")
set(tp_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/testProto.grpc.pb.cc")
set(tp_grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/testProto.grpc.pb.h")

# 自动执行protoc命令
add_custom_command(
      OUTPUT "${tp_proto_srcs}" "${tp_proto_hdrs}" "${tp_grpc_srcs}" "${tp_grpc_hdrs}"
      COMMAND ${_PROTOBUF_PROTOC}
      ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
        --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
        -I "${tp_proto_path}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${tp_proto}"
      DEPENDS "${tp_proto}")

# Include 生成的 *.pb.h 文件
include_directories("${CMAKE_CURRENT_BINARY_DIR}")

# 生成 tp_grpc_proto 静态库，包含proto文件和grpc文件
add_library(tp_grpc_proto
  ${tp_proto_srcs}
  ${tp_proto_hdrs}
  ${tp_grpc_srcs}
  ${tp_grpc_hdrs})

# 为tp_grpc_proto添加链接库
target_link_libraries(tp_grpc_proto
  absl::absl_log
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF})

# # 生成可执行文件
foreach(_target
  test_proto_client test_proto_server)
  add_executable(${_target}
    "${_target}.cpp")
  target_link_libraries(${_target}
    tp_grpc_proto
    absl::flags_parse
    absl::absl_log
    absl::log_initialize
    absl::log_globals
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF})
endforeach()

  