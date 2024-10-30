/*
 * @Descripttion: 
 * @Author: jev
 * @version: 
 * @Date: 2024-10-29
 * @LastEditors: jev
 * @LastEditTime: 2024-10-30
 */
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>

#include <iostream>
#include <memory>
#include <string>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/strings/str_format.h"

#include "testProto.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using testProto::TestService;  // 根据 package name 和 service name 生成
using testProto::TestRequest;  // proto 里 定义的 message name
using testProto::TestResponse;

// 利用Abseil库的宏定义命令行标志 flag ， 定义了一个port 的命令行标志，类型为uint16_t， 默认值为9872，描述为Server port for the service
ABSL_FLAG(uint16_t, port, 9872, "Server port for the service");

// 服务实现类，把 TestService::Service 类的 Test 方法实现
class TestServiceImpl final : public TestService::Service {
    // Status 是一个类，包含了一个状态码和一个可选的状态消息
    Status Test(ServerContext* context, const TestRequest* request, TestResponse* response) override {
        std::string prefix("Service received: ");
        response->set_message(prefix + request->name());  // 设置返回的消息
        return Status::OK;
    }
};
/**
 * @descripttion:  运行服务器
 * @param {uint16_t} port 服务器端口
 * @return {*}
 */
void RunServer(uint16_t port) {
    std::string server_address = absl::StrFormat("0.0.0.0:%d", port);  // 生成地址字符串
    TestServiceImpl service;  // 创建服务实现类

    // 创建一个 ServerBuilder 对象
    ServerBuilder builder;

    // 添加服务到 ServerBuilder 对象
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());  // 监听地址和端口
    builder.RegisterService(&service);  // 注册服务

    // 创建一个 Server 对象
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;

    // 阻塞等待服务器关闭
    server->Wait();
}

int main (int argc, char** argv) {
    absl::ParseCommandLine(argc, argv);
    RunServer(absl::GetFlag(FLAGS_port));
    return 0;
    
}
