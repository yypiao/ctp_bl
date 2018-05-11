#include <iostream>
#include "ThostFtdcMdApi.h"
#include "src/business/ctp/ThostMdLink.h"
#include "src/business/engine/APP.h"

CThostFtdcMdApi *pUserApi;

int main (int argc, char const *argv[]){
    std::cout << "Hello, World!" << std::endl;
    // ³õÊ¼»¯UserApi
//    pUserApi = CThostFtdcMdApi::CreateFtdcMdApi();
    APP app;
    app.Run();

//    pUserApi->RegisterSpi()
    return 0;

}