/*
 * @Descripttion: 
 * @Author: jev
 * @version: 
 * @Date: 2024-10-30
 * @LastEditors: jev
 * @LastEditTime: 2024-11-07
 */
#include <grpcpp/grpcpp.h>
#include <iostream>
#include <vector>
#include <mutex>
#include <thread>

#include "remoteFunction.grpc.pb.h"
#include "absl/flags/flag.h"
#include "absl/flags/parse.h"

using grpc::Channel;

using func_call::RemoteFunction;
using func_call::Numbers;
using func_call::ans;
using func_call::SquareTwoNum;

ABSL_FLAG(std::string, n1, "1", "Opt number 1");
ABSL_FLAG(std::string, n2, "2", "Opt number 2");
ABSL_FLAG(std::string, opts, "3", "Opt times");

class TestClient {
public:
    TestClient(std::shared_ptr<Channel> channel) : stub_(RemoteFunction::NewStub(channel)) {};

    int addTwoNum(int n1, int n2, int opts) {
        Numbers number;
        number.set_num1(n1);
        number.set_num2(n2);
        number.set_opttimes(opts);

        ans response;

        grpc::ClientContext context;

        // 调用远程服务
        grpc::Status status = stub_->addTwoNum(&context, number, &response);

        if (status.ok()) {
            return response.result();
        } else {
            return -1;
        }
    }

    std::vector<int> plusTwoNum(int n1, int n2, int opts) {
        Numbers number;
        number.set_num1(n1);
        number.set_num2(n2);
        number.set_opttimes(opts);

        std::vector<int> results;

        grpc::ClientContext context;

        // 调用远程服务
        std::unique_ptr<grpc::ClientReader<ans>> reader(stub_->plusTwoNum(&context, number));

        ans response;

        while (reader->Read(&response)) {
            results.push_back(response.result());
        }

        grpc::Status status = reader->Finish();

        if (status.ok()) {
            return results;
        } else {
            return std::vector<int>();
        }
    }

    int plusTwoNum2(int n1, int n2, int opts) {
        Numbers number;
        number.set_num1(n1);
        number.set_num2(n2);
        number.set_opttimes(opts);

        SquareTwoNum response;

        grpc::ClientContext context;

        std::unique_ptr<grpc::ClientWriter<Numbers>> writer(stub_->plusTwoNum2(&context, &response));

        for (int i = 0; i < opts; ++i) {
            if (!writer->Write(number)) {
                break;
            }
        }

        writer->WritesDone();
        grpc::Status status = writer->Finish();

        if (status.ok()) {
            return response.num1() + response.num2();
        } else {
            return -1;
        }

    }

    std::vector<std::pair<int, int>> plusTwoNum3(int n1, int n2, int opts) {
        grpc::ClientContext context;

        std::shared_ptr<grpc::ClientReaderWriter<Numbers, SquareTwoNum>> stream(stub_->plusTwoNum3(&context));

        std::vector<std::pair<int, int>> results;

        SquareTwoNum response;

        std::thread writer([stream, n1, n2, opts]() {
            for (int i = 0; i < opts; ++i) {
                Numbers number;
                number.set_num1(n1);
                number.set_num2(n2);
                stream->Write(number);
            }
            stream->WritesDone();
        });

        while (stream->Read(&response)) {
            results.push_back(std::make_pair<int, int>(response.num1(), response.num2()));
        }

        writer.join();

        grpc::Status status = stream->Finish();

        if (status.ok()) {
            return results;
        } else {
            return std::vector<std::pair<int, int>>();
        }
    
    }

private:
    std::unique_ptr<RemoteFunction::Stub> stub_;
};


int main(int argc, char** argv) {
    absl::ParseCommandLine(argc, argv);

    int n1 = std::stoi(absl::GetFlag(FLAGS_n1));
    int n2 = std::stoi(absl::GetFlag(FLAGS_n2));
    int opts = std::stoi(absl::GetFlag(FLAGS_opts));

    TestClient client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));

    int result = client.addTwoNum(n1, n2, opts);
    std::cout << "add two number result: " << result << std::endl;

    std::vector<int> results = client.plusTwoNum(n1, n2, opts);
    std::cout << "plus two number result: ";
    for (auto r : results) {
        std::cout << r << " ";
    }
    std::cout << std::endl;

    int result2 = client.plusTwoNum2(n1, n2, opts);
    std::cout << "plus two number 2 result: " << result2 << std::endl;

    std::vector<std::pair<int, int>> results2 = client.plusTwoNum3(n1, n2, opts);
    std::cout << "plus two number 3 result: ";
    for (auto r : results2) {
        std::cout << r.first << " " << r.second << " ";
    }

    return 0;
}