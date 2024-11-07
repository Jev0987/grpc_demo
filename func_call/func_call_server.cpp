/*
 * @Descripttion: 
 * @Author: jev
 * @version: 
 * @Date: 2024-10-30
 * @LastEditors: jev
 * @LastEditTime: 2024-10-31
 */

#include <grpcpp/grpcpp.h>
#include <iostream>
#include <vector>
#include <mutex>
#include "remoteFunction.grpc.pb.h"
#include "absl/flags/flag.h"
#include "absl/flags/parse.h"

using grpc::Server;
using grpc::Status;
using grpc::ServerContext;
using grpc::ServerBuilder;
using grpc::ServerWriter;
using grpc::ServerReader;
using grpc::ServerReaderWriter;

using func_call::RemoteFunction;
using func_call::Numbers;
using func_call::ans;
using func_call::SquareTwoNum;

class FuncCallServiceImpl final : public RemoteFunction::Service {
public:
    explicit FuncCallServiceImpl() {}

    // 两个数字相加opttimes次, 返回一个结果
    Status addTwoNum(ServerContext* context, const Numbers* request, ans* response) override {
        int result = 0;
        for (int i = 0; i < request->opttimes(); ++i) {
            result += request->num1() + request->num2();
        }
        response->set_result(result);
        return Status::OK;
    }
    // 两个数字相加opttimes次, 返回每次相加的结果
    Status plusTwoNum(ServerContext* context, const Numbers* request, ServerWriter<ans>* writer) override {
        int result = 0;
        for (int i = 0; i < request->opttimes(); ++i) {
            result += request->num1() + request->num2();
            ans ans_;
            ans_.set_result(result);
            writer->Write(ans_);
        }
        return Status::OK;
    }

    // 接受流数据，返回结果
    // 两个数字平方后相加opttimes次, 返回一个结果
    Status plusTwoNum2(ServerContext* context, ServerReader<Numbers>* reader, SquareTwoNum* response) override {
        Numbers numbers;
        int result1 = 0;
        int result2 = 0;
        while (reader->Read(&numbers)) {
            result1 += numbers.num1() * numbers.num1();
            result2 += numbers.num2() * numbers.num2();
        }
        response->set_num1(result1);
        response->set_num2(result2);
        return Status::OK;
    }

    // 接受流数据，返回每次平方的结果
    Status plusTwoNum3(ServerContext* context, ServerReaderWriter<SquareTwoNum, Numbers> *stream) override {
        Numbers numbers;
        SquareTwoNum squareTwoNum;
        while (stream->Read(&numbers)) {
            squareTwoNum.set_num1(numbers.num1() * numbers.num1());
            squareTwoNum.set_num2(numbers.num2() * numbers.num2());
            stream->Write(squareTwoNum);
        }
        return Status::OK;
    }
};

void RunServer() {
    std::string server_address("0.0.0.0:9872");
    FuncCallServiceImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());  // 监听端口
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}

int main(int argv, char** argc) {
    absl::ParseCommandLine(argv, argc);
    RunServer();
    return 0;
}