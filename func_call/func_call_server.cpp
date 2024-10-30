/*
 * @Descripttion: 
 * @Author: jev
 * @version: 
 * @Date: 2024-10-30
 * @LastEditors: jev
 * @LastEditTime: 2024-10-30
 */
#include <grpcpp/grpcpp.h>
#include <iostream>
#include <vector>
#include <mutex>
#include "remoteFunction.grpc.pb.h"

using grpc::Server;

using func_call::RemoteFunction;
using func_call::Numbers;
using func_call::ans;
using func_call::SquareTwoNum;
class FuncCallServiceImpl final : public RemoteFunction::Service {


private:
    std::vector<SquareTwoNum> squareTwoNums_list;  // 保存每次平方的结果
    std::mutex mtx_;
    std::vector<ans> ans_list;  // 保存每次相加的结果
};


int main(int argv, char** argc) {
    return 0;
}