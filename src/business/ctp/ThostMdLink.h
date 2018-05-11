#ifndef THOST_QUOT_LINK_H
#define THOST_QUOT_LINK_H
#include "ThostFtdcMdApi.h"
#include "../engine/BaseExchApi.h"

#define MAX_STORE_MARKETLIST_CNT       60
class CThostMdLink: public CThostFtdcMdSpi, public CBaseExchApi
{
    public:
        CThostMdLink(ApiExchLink* mdlink);
        ~CThostMdLink();

        void OnFrontConnected();
        void OnFrontDisconnected(int nReason);
        void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
        void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
        void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData);

        ///��������Ӧ��
        void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

        ///ȡ����������Ӧ��
        void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

        ///�������顣
        ///@param ppInstrumentID ��ԼID  
        ///@param nCount Ҫ����/�˶�����ĺ�Լ����
        ///@remark 
        int SubMarketData(char *ppInstrumentID[], int nCount);

        ///�˶����顣
        ///@param ppInstrumentID ��ԼID  
        ///@param nCount Ҫ����/�˶�����ĺ�Լ����
        ///@remark 
        int UnSubMarketData(char *ppInstrumentID[], int nCount);

        void StartWork();

        void SetRedis(MdRedis* redis);

        bool ReqLogin(string BrokerID, string UserID, string Password);

        void SetQuot(vector<string> v);

        vector<string> GetQuot(string storePath);
        void StoreQuot(string storePath);
        void Login();

    protected:

    private:
        CThostFtdcMdApi *m_pUserApi;
        MdRedis* m_redis;

        string _env;	
        string _channel;
        string _snapshot;
        string _tick;
        string _mrklist;
        bool   _isTick;		
};

#endif
