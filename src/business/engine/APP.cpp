//
// Created by david on 2018/5/10.
//

#include "APP.h"
#include "BaseExchApi.h"
#include "../ctp/ThostMdLink.h"

void APP::Run() {
    ApiExchLink mdlink;

    mdlink.BrokerID = 9999;
    mdlink.UserID   = 90088376;
    mdlink.Password = 121025;
    mdlink.Address  = "tcp://180.168.146.187:10010";

    CThostMdLink *cThostMdLink = new CThostMdLink(&mdlink);
    cThostMdLink ->StartWork();



}
