/*
 * @Author: wcfylcf wcfyacf@163.com
 * @Date: 2023-06-26 19:56:04
 * @LastEditors: wcfylcf wcfyacf@163.com
 * @LastEditTime: 2023-06-27 09:44:18
 * @FilePath: /proto-rpc/srpc/pb/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// #include <google/protobuf/message.h>
#include <iostream>
#include "test.protoc.pb.h"

int main(int argc, char** argv){
    testprotoc::TestMsg msg, de_msg;
    msg.set_name("wang");
    msg.set_age(21);
    auto map_r = msg.map_rec();
    map_r["a"] = 1;
    map_r["b"] = 2;
    auto sel_msg = msg.SerializeAsString();

    de_msg.ParseFromString(sel_msg);
    
    std::cout << "name:" << de_msg.name() << " age:" << de_msg.age() << std::endl;

    auto map_d = de_msg.map_rec();
    // std::copy(map_r.begin(), map_r.end(), std::ostream_iterator<google::protobuf::MapPair<std::string, int>{std::cout, " "});
    std::for_each(map_d.begin(), map_d.end(), [](google::protobuf::MapPair<std::string, int> pair){
        std::cout << "first:" << pair.first << " second:" << pair.second << std::endl;
    });
    return 0;
}