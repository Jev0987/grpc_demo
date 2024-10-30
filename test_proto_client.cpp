/*
 * @Descripttion: 
 * @Author: jev
 * @version: 
 * @Date: 2024-10-29
 * @LastEditors: jev
 * @LastEditTime: 2024-10-30
 */
#include <grpcpp/grpcpp.h>
#include <iostream>
#include <memory>
#include <string>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"

#include "testProto.grpc.pb.h"

// 定义一个命令行标志 target ，类型为std::string， 默认值为localhost:9872，描述为Target server address
ABSL_FLAG(std::string, target, "localhost:9872", "Target server address");
// 定义一个命令行标志 msg ，类型为std::string， 默认值为Hello, gRPC!，描述为Message to send to server
ABSL_FLAG(std::string, msg, "Hello, gRPC!", "Message to send to server");

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using testProto::TestService;
using testProto::TestRequest;
using testProto::TestResponse;

class TestClient {
public:
    TestClient(std::shared_ptr<Channel> channel) : stub_(TestService::NewStub(channel)) {};

    std::string sendMsg(const std::string& msg) {
        TestRequest request;
        request.set_name(msg);

        TestResponse response;

        ClientContext context;

        // 调用远程服务
        Status status = stub_->Test(&context, request, &response);

        if (status.ok()) {
            return response.message();
        } else {
            return "RPC failed";
        }
    }

private:
    std::unique_ptr<TestService::Stub> stub_;

};

int main(int argc, char** argv) {
    absl::ParseCommandLine(argc, argv);

    std::string target_url = absl::GetFlag(FLAGS_target);
    std::string msg = absl::GetFlag(FLAGS_msg);

    // 创建一个 TestClient 对象
    TestClient client(grpc::CreateChannel(target_url, grpc::InsecureChannelCredentials()));

    // 调用 TestClient 对象的 sendMsg 方法
    std::string response = client.sendMsg(msg);
    std::cout << "Response: " << response << std::endl;
    return 0;
}