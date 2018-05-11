/////////////////////////////////////////////////////////////////////////
///@system QuantDo Platform
///@company �Ϻ���Ͷ����Ƽ����޹�˾
///@file UserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
/////////////////////////////////////////////////////////////////////////

#if !defined(STRUCT_H)
#define STRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "UserApiDataType.h"

///ϵͳ�û���¼����
struct CReqUserLoginField
{
	///������
	TDateType	TradingDay;
	///�����û�����
	TUserIDType	UserID;
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///����
	TPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TProtocolInfoType	ProtocolInfo;
	///IP��ַ
	TIPAddressType	IPAddress;
	///Mac��ַ
	TMacAddressType	MacAddress;
	///�������Ĵ���
	TDataCenterIDType	DataCenterID;
	///��̬����
	TPasswordType	OneTimePassword;
	///�ն�IP��ַ
	TIPAddressType	ClientIPAddress;
};

///ϵͳ�û���¼Ӧ��
struct CRspUserLoginField
{
	///������
	TDateType	TradingDay;
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�����û�����
	TUserIDType	UserID;
	///��¼�ɹ�ʱ��
	TTimeType	LoginTime;
	///�û���󱾵ر�����
	TUserOrderLocalIDType	MaxOrderLocalID;
	///����ϵͳ����
	TTradingSystemNameType	TradingSystemName;
	///�������Ĵ���
	TDataCenterIDType	DataCenterID;
	///��Ա˽������ǰ����
	TSequenceNoType	PrivateFlowSize;
	///����Ա˽������ǰ����
	TSequenceNoType	UserFlowSize;
};

///�û��ǳ�����
struct CReqUserLogoutField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�����û�����
	TUserIDType	UserID;
};

///�û��ǳ�����
struct CRspUserLogoutField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�����û�����
	TUserIDType	UserID;
};

///ǿ���û��˳�
struct CForceUserExitField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�����û�����
	TUserIDType	UserID;
};

///�û������޸�
struct CUserPasswordUpdateField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�����û�����
	TUserIDType	UserID;
	///������
	TPasswordType	OldPassword;
	///������
	TPasswordType	NewPassword;
};

///���뱨��
struct CInputOrderField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///����������
	TExchangeIDType	ExchangeID;
	///ϵͳ�������
	TOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///�û�����
	TUserIDType	UserID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///�û����ر�����
	TUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TOrderPriceTypeType	OrderPriceType;
	///��������
	TDirectionType	Direction;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///�۸�
	TPriceType	LimitPrice;
	///����
	TVolumeType	Volume;
	///��Ч������
	TTimeConditionType	TimeCondition;
	///GTD����
	TDateType	GTDDate;
	///�ɽ�������
	TVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TVolumeType	MinVolume;
	///ֹ���
	TPriceType	StopPrice;
	///ǿƽԭ��
	TForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TCustomType	UserCustom;
};

///��������
struct COrderActionField
{
	///����������
	TExchangeIDType	ExchangeID;
	///�������
	TOrderSysIDType	OrderSysID;
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///�û�����
	TUserIDType	UserID;
	///���γ��������ı��ر��
	TUserOrderLocalIDType	UserOrderActionLocalID;
	///���������ı��ر������
	TUserOrderLocalIDType	UserOrderLocalID;
	///����������־
	TActionFlagType	ActionFlag;
	///�۸�
	TPriceType	LimitPrice;
	///�����仯
	TVolumeType	VolumeChange;
};

///�ڴ����
struct CMemDbField
{
	///�ڴ����
	TMemTableNameType	MemTableName;
};

///��Ӧ��Ϣ
struct CRspInfoField
{
	///�������
	TErrorIDType	ErrorID;
	///������Ϣ
	TErrorMsgType	ErrorMsg;
};

///������ѯ
struct CQryOrderField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�û�����
	TUserIDType	UserID;
	///����������
	TExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///�������
	TOrderSysIDType	OrderSysID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
};

///�ɽ���ѯ
struct CQryTradeField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�û�����
	TUserIDType	UserID;
	///����������
	TExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///�ɽ����
	TTradeIDType	TradeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
};

///��Լ��ѯ
struct CQryInstrumentField
{
	///����������
	TExchangeIDType	ExchangeID;
	///��Ʒ����
	TProductIDType	ProductID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
};

///��Լ��ѯӦ��
struct CRspInstrumentField
{
	///����������
	TExchangeIDType	ExchangeID;
	///Ʒ�ִ���
	TProductIDType	ProductID;
	///Ʒ������
	TProductNameType	ProductName;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��Լ����
	TInstrumentNameType	InstrumentName;
	///�������
	TYearType	DeliveryYear;
	///������
	TMonthType	DeliveryMonth;
	///�޼۵�����µ���
	TVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TVolumeType	MinLimitOrderVolume;
	///�м۵�����µ���
	TVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TVolumeType	MinMarketOrderVolume;
	///��������
	TVolumeMultipleType	VolumeMultiple;
	///���۵�λ
	TPriceTickType	PriceTick;
	///����
	TCurrencyType	Currency;
	///��ͷ�޲�
	TVolumeType	LongPosLimit;
	///��ͷ�޲�
	TVolumeType	ShortPosLimit;
	///��ͣ���
	TPriceType	LowerLimitPrice;
	///��ͣ���
	TPriceType	UpperLimitPrice;
	///�����
	TPriceType	PreSettlementPrice;
	///��Լ����״̬
	TInstrumentStatusType	InstrumentStatus;
	///������
	TDateType	CreateDate;
	///������
	TDateType	OpenDate;
	///������
	TDateType	ExpireDate;
	///��ʼ������
	TDateType	StartDelivDate;
	///��󽻸���
	TDateType	EndDelivDate;
	///���ƻ�׼��
	TPriceType	BasisPrice;
	///��ǰ�Ƿ���
	TBoolType	IsTrading;
	///������Ʒ����
	TInstrumentIDType	UnderlyingInstrID;
	///������Ʒ����
	TUnderlyingMultipleType	UnderlyingMultiple;
	///�ֲ�����
	TPositionTypeType	PositionType;
	///ִ�м�
	TPriceType	StrikePrice;
	///��Ȩ����
	TOptionsTypeType	OptionsType;
	///����
	TRatioType	ExchangeRate;
	///��Ʒ����
	TProductClassType	ProductClass;
	///��������
	TAPITypeType	APIType;
	///ҵ���������ͣ�ͬһ�ӿڶ��������ʹ��
	TLinkTypeType	LinkType;
};

///��Լ״̬
struct CInstrumentStatusField
{
	///����������
	TExchangeIDType	ExchangeID;
	///Ʒ�ִ���
	TProductIDType	ProductID;
	///Ʒ������
	TProductNameType	ProductName;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��Լ����
	TInstrumentNameType	InstrumentName;
	///�������
	TYearType	DeliveryYear;
	///������
	TMonthType	DeliveryMonth;
	///�޼۵�����µ���
	TVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TVolumeType	MinLimitOrderVolume;
	///�м۵�����µ���
	TVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TVolumeType	MinMarketOrderVolume;
	///��������
	TVolumeMultipleType	VolumeMultiple;
	///���۵�λ
	TPriceTickType	PriceTick;
	///����
	TCurrencyType	Currency;
	///��ͷ�޲�
	TVolumeType	LongPosLimit;
	///��ͷ�޲�
	TVolumeType	ShortPosLimit;
	///��ͣ���
	TPriceType	LowerLimitPrice;
	///��ͣ���
	TPriceType	UpperLimitPrice;
	///�����
	TPriceType	PreSettlementPrice;
	///��Լ����״̬
	TInstrumentStatusType	InstrumentStatus;
	///������
	TDateType	CreateDate;
	///������
	TDateType	OpenDate;
	///������
	TDateType	ExpireDate;
	///��ʼ������
	TDateType	StartDelivDate;
	///��󽻸���
	TDateType	EndDelivDate;
	///���ƻ�׼��
	TPriceType	BasisPrice;
	///��ǰ�Ƿ���
	TBoolType	IsTrading;
	///������Ʒ����
	TInstrumentIDType	UnderlyingInstrID;
	///������Ʒ����
	TUnderlyingMultipleType	UnderlyingMultiple;
	///�ֲ�����
	TPositionTypeType	PositionType;
	///ִ�м�
	TPriceType	StrikePrice;
	///��Ȩ����
	TOptionsTypeType	OptionsType;
	///����
	TRatioType	ExchangeRate;
	///��Ʒ����
	TProductClassType	ProductClass;
	///��������
	TAPITypeType	APIType;
	///ҵ���������ͣ�ͬһ�ӿڶ��������ʹ��
	TLinkTypeType	LinkType;
};

///Ͷ�����ʽ��ѯ
struct CQryInvestorAccountField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�û�����
	TUserIDType	UserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///Ͷ�����ʽ�Ӧ��
struct CRspInvestorAccountField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TAccountIDType	AccountID;
	///�ϴν���׼����
	TMoneyType	PreBalance;
	///���տ����ʽ�
	TMoneyType	PreAvailable;
	///�����
	TMoneyType	Deposit;
	///������
	TMoneyType	Withdraw;
	///ռ�ñ�֤��
	TMoneyType	Margin;
	///��ȨȨ������֧
	TMoneyType	Premium;
	///������
	TMoneyType	Fee;
	///����ı�֤��
	TMoneyType	FrozenMargin;
	///����Ȩ����
	TMoneyType	FrozenPremium;
	///����������
	TMoneyType	FrozenFee;
	///ƽ��ӯ��
	TMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TMoneyType	PositionProfit;
	///�����ʽ�
	TMoneyType	Available;
	///����׼����
	TMoneyType	Balance;
	///��ͷռ�ñ�֤��
	TMoneyType	LongMargin;
	///��ͷռ�ñ�֤��
	TMoneyType	ShortMargin;
	///��ͷ����ı�֤��
	TMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TMoneyType	ShortFrozenMargin;
	///��̬Ȩ��
	TMoneyType	DynamicRights;
	///���ն�
	TMoneyType	Risk;
	///��������
	TMoneyType	OtherFee;
	///��Ѻ���
	TMoneyType	Mortgage;
	///����
	TCurrencyIDType	Currency;
};

///����Ͷ���߲�ѯ
struct CQryUserInvestorField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�û�����
	TUserIDType	UserID;
};

///����Ͷ����
struct CRspUserInvestorField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�����û�����
	TUserIDType	UserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///���ױ����ѯ
struct CQryTradingCodeField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�û�����
	TUserIDType	UserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����������
	TExchangeIDType	ExchangeID;
};

///���ױ����ѯ
struct CRspTradingCodeField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TAccountIDType	AccountID;
	///����������
	TExchangeIDType	ExchangeID;
	///��Ա���
	TParticipantIDType	ParticipantID;
	///�ͻ�����
	TClientIDType	ClientID;
	///�ͻ�����Ȩ��
	TTradingRightType	ClientRight;
	///�ͻ�����
	TClientTypeType	ClientType;
	///�ͻ���ֵ����
	TClientHedgeFlagType	ClientHedgeFlag;
	///�Ƿ��Ծ
	TIsActiveType	IsActive;
};

///��������ѯ����
struct CQryExchangeField
{
	///����������
	TExchangeIDType	ExchangeID;
};

///��������ѯӦ��
struct CRspExchangeField
{
	///����������
	TExchangeIDType	ExchangeID;
	///����������
	TExchangeNameType	ExchangeName;
	///������
	TTradingDayType	TradingDay;
};

///Ͷ���ֲֲ߳�ѯ����
struct CQryInvestorPositionField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�û�����
	TUserIDType	UserID;
	///����������
	TExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
};

///Ͷ���ֲֲ߳�ѯӦ��
struct CRspInvestorPositionField
{
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///����������
	TExchangeIDType	ExchangeID;
	///�ͻ�����
	TClientIDType	ClientID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///ռ�ñ�֤��
	TMoneyType	UsedMargin;
	///��ֲ���
	TVolumeType	Position;
	///���ճֲֳɱ�
	TPriceType	PositionCost;
	///��ֲ���
	TVolumeType	YdPosition;
	///���ճֲֳɱ�
	TMoneyType	YdPositionCost;
	///����ı�֤��
	TMoneyType	FrozenMargin;
	///���ֶ���ֲ�
	TVolumeType	FrozenPosition;
	///ƽ�ֶ���ֲ�
	TVolumeType	FrozenClosing;
	///�����Ȩ����
	TMoneyType	FrozenPremium;
	///���һ�ʳɽ����
	TTradeIDType	LastTradeID;
	///���һ�ʱ��ر������
	TOrderLocalIDType	LastOrderLocalID;
	///����
	TCurrencyIDType	Currency;
};

///�û���ѯ
struct CQryUserField
{
	///�����û�����
	TUserIDType	StartUserID;
	///�����û�����
	TUserIDType	EndUserID;
};

///�û�
struct CUserField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�û�����
	TUserIDType	UserID;
	///�û���¼����
	TPasswordType	Password;
	///�Ƿ��Ծ
	TIsActiveType	IsActive;
	///�û�����
	TUserNameType	UserName;
	///�û�����
	TUserTypeType	UserType;
	///Ӫҵ��
	TDepartmentType	Department;
	///��Ȩ���ܼ�
	TGrantFuncSetType	GrantFuncSet;
	///�޸��û����
	TUserIDType	SetUserID;
	///��������
	TDateType	CommandDate;
	///����ʱ��
	TTimeType	CommandTime;
};

///Ͷ�����������ʲ�ѯ
struct CQryInvestorFeeField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�û�����
	TUserIDType	UserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
};

///Ͷ������������
struct CInvestorFeeField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///����������
	TExchangeIDType	ExchangeID;
	///�ͻ���
	TClientIDType	ClientID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///���������Ѱ�����
	TRatioType	OpenFeeRate;
	///���������Ѱ�����
	TRatioType	OpenFeeAmt;
	///ƽ�������Ѱ�����
	TRatioType	OffsetFeeRate;
	///ƽ�������Ѱ�����
	TRatioType	OffsetFeeAmt;
	///ƽ��������Ѱ�����
	TRatioType	OTFeeRate;
	///ƽ��������Ѱ�����
	TRatioType	OTFeeAmt;
};

///Ͷ���߱�֤���ʲ�ѯ
struct CQryInvestorMarginField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�û�����
	TUserIDType	UserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
};

///Ͷ���߱�֤����
struct CInvestorMarginField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///����������
	TExchangeIDType	ExchangeID;
	///�ͻ���
	TClientIDType	ClientID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��ͷռ�ñ�֤�𰴱���
	TRatioType	LongMarginRate;
	///��ͷ��֤������
	TRatioType	LongMarginAmt;
	///��ͷռ�ñ�֤�𰴱���
	TRatioType	ShortMarginRate;
	///��ͷ��֤������
	TRatioType	ShortMarginAmt;
};

///�ɽ�
struct CTradeField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///����������
	TExchangeIDType	ExchangeID;
	///������
	TTradingDayType	TradingDay;
	///��Ա���
	TParticipantIDType	ParticipantID;
	///�µ�ϯλ��
	TSeatIDType	SeatID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///�ͻ���
	TClientIDType	ClientID;
	///�û����
	TUserIDType	UserID;
	///�ɽ����
	TTradeIDType	TradeID;
	///�������
	TOrderSysIDType	OrderSysID;
	///���ر������
	TUserOrderLocalIDType	UserOrderLocalID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///ί�м۸�
	TPriceType	LimitPrice;
	///�ɽ��۸�
	TPriceType	TradePrice;
	///�ɽ�����
	TVolumeType	TradeVolume;
	///�ɽ�ʱ��
	TTimeType	TradeTime;
	///�����Ա���
	TParticipantIDType	ClearingPartID;
	///ϵͳ�������
	TSequenceNoType	CombOrderSysID;
	///��������
	TPlotTypeType	PlotType;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///������
	TMoneyType	Fee;
};

///����
struct COrderField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///����������
	TExchangeIDType	ExchangeID;
	///ϵͳ�������
	TOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///�û�����
	TUserIDType	UserID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///�û����ر�����
	TUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TOrderPriceTypeType	OrderPriceType;
	///��������
	TDirectionType	Direction;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///�۸�
	TPriceType	LimitPrice;
	///����
	TVolumeType	Volume;
	///��Ч������
	TTimeConditionType	TimeCondition;
	///GTD����
	TDateType	GTDDate;
	///�ɽ�������
	TVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TVolumeType	MinVolume;
	///ֹ���
	TPriceType	StopPrice;
	///ǿƽԭ��
	TForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TCustomType	UserCustom;
	///������
	TTradingDayType	TradingDay;
	///��Ա���
	TParticipantIDType	ParticipantID;
	///�ͻ���
	TClientIDType	ClientID;
	///�µ�ϯλ��
	TSeatIDType	SeatID;
	///����ʱ��
	TTimeType	InsertTime;
	///���ر������
	TOrderLocalIDType	OrderLocalID;
	///������Դ
	TOrderSourceType	OrderSource;
	///����״̬
	TOrderStatusType	OrderStatus;
	///����ʱ��
	TTimeType	CancelTime;
	///�����û����
	TUserIDType	CancelUserID;
	///��ɽ�����
	TVolumeType	VolumeTraded;
	///ʣ������
	TVolumeType	VolumeRemain;
	///��������
	TPlotTypeType	PlotType;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///������
	TMoneyType	Fee;
};

///����������
struct CFlowMessageCancelField
{
	///����ϵ�к�
	TSequenceSeriesType	SequenceSeries;
	///������
	TDateType	TradingDay;
	///�������Ĵ���
	TDataCenterIDType	DataCenterID;
	///������ʼ���к�
	TSequenceNoType	StartSequenceNo;
	///���˽������к�
	TSequenceNoType	EndSequenceNo;
};

///��Ϣ�ַ�
struct CDisseminationField
{
	///����ϵ�к�
	TSequenceSeriesType	SequenceSeries;
	///���к�
	TSequenceNoType	SequenceNo;
};

///�������
struct CInvestorAccountDepositResField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�û�����
	TUserIDType	UserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TAccountIDType	AccountID;
	///�ʽ���ˮ��
	TAccountSeqNoType	AccountSeqNo;
	///���
	TMoneyType	Amount;
	///�������
	TAccountDirectionType	AmountDirection;
	///�����ʽ�
	TMoneyType	Available;
	///����׼����
	TMoneyType	Balance;
};

///�����������
struct CMarketDataBaseField
{
	///������
	TDateType	TradingDay;
	///���������
	TSettlementGroupIDType	SettlementGroupID;
	///������
	TSettlementIDType	SettlementID;
	///�����
	TPriceType	PreSettlementPrice;
	///������
	TPriceType	PreClosePrice;
	///��ֲ���
	TLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TRatioType	PreDelta;
};

///���龲̬����
struct CMarketDataStaticField
{
	///����
	TPriceType	OpenPrice;
	///��߼�
	TPriceType	HighestPrice;
	///��ͼ�
	TPriceType	LowestPrice;
	///������
	TPriceType	ClosePrice;
	///��ͣ���
	TPriceType	UpperLimitPrice;
	///��ͣ���
	TPriceType	LowerLimitPrice;
	///�����
	TPriceType	SettlementPrice;
	///����ʵ��
	TRatioType	CurrDelta;
};

///�������³ɽ�����
struct CMarketDataLastMatchField
{
	///���¼�
	TPriceType	LastPrice;
	///����
	TVolumeType	Volume;
	///�ɽ����
	TMoneyType	Turnover;
	///�ֲ���
	TLargeVolumeType	OpenInterest;
};

///�������ż�����
struct CMarketDataBestPriceField
{
	///�����һ
	TPriceType	BidPrice1;
	///������һ
	TVolumeType	BidVolume1;
	///������һ
	TPriceType	AskPrice1;
	///������һ
	TVolumeType	AskVolume1;
};

///�����������������
struct CMarketDataBid23Field
{
	///����۶�
	TPriceType	BidPrice2;
	///��������
	TVolumeType	BidVolume2;
	///�������
	TPriceType	BidPrice3;
	///��������
	TVolumeType	BidVolume3;
};

///������������������
struct CMarketDataAsk23Field
{
	///�����۶�
	TPriceType	AskPrice2;
	///��������
	TVolumeType	AskVolume2;
	///��������
	TPriceType	AskPrice3;
	///��������
	TVolumeType	AskVolume3;
};

///���������ġ�������
struct CMarketDataBid45Field
{
	///�������
	TPriceType	BidPrice4;
	///��������
	TVolumeType	BidVolume4;
	///�������
	TPriceType	BidPrice5;
	///��������
	TVolumeType	BidVolume5;
};

///���������ġ�������
struct CMarketDataAsk45Field
{
	///��������
	TPriceType	AskPrice4;
	///��������
	TVolumeType	AskVolume4;
	///��������
	TPriceType	AskPrice5;
	///��������
	TVolumeType	AskVolume5;
};

///�������ʱ������
struct CMarketDataUpdateTimeField
{
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TTimeType	UpdateTime;
	///����޸ĺ���
	TMillisecType	UpdateMillisec;
};

///�������
struct CDepthMarketDataField
{
	///����������
	TExchangeIDType	ExchangeID;
	///������
	TDateType	TradingDay;
	///���������
	TSettlementGroupIDType	SettlementGroupID;
	///������
	TSettlementIDType	SettlementID;
	///�����
	TPriceType	PreSettlementPrice;
	///������
	TPriceType	PreClosePrice;
	///��ֲ���
	TLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TRatioType	PreDelta;
	///����
	TPriceType	OpenPrice;
	///��߼�
	TPriceType	HighestPrice;
	///��ͼ�
	TPriceType	LowestPrice;
	///������
	TPriceType	ClosePrice;
	///��ͣ���
	TPriceType	UpperLimitPrice;
	///��ͣ���
	TPriceType	LowerLimitPrice;
	///�����
	TPriceType	SettlementPrice;
	///����ʵ��
	TRatioType	CurrDelta;
	///���¼�
	TPriceType	LastPrice;
	///����
	TVolumeType	Volume;
	///�ɽ����
	TMoneyType	Turnover;
	///�ֲ���
	TLargeVolumeType	OpenInterest;
	///�����һ
	TPriceType	BidPrice1;
	///������һ
	TVolumeType	BidVolume1;
	///������һ
	TPriceType	AskPrice1;
	///������һ
	TVolumeType	AskVolume1;
	///����۶�
	TPriceType	BidPrice2;
	///��������
	TVolumeType	BidVolume2;
	///�������
	TPriceType	BidPrice3;
	///��������
	TVolumeType	BidVolume3;
	///�����۶�
	TPriceType	AskPrice2;
	///��������
	TVolumeType	AskVolume2;
	///��������
	TPriceType	AskPrice3;
	///��������
	TVolumeType	AskVolume3;
	///�������
	TPriceType	BidPrice4;
	///��������
	TVolumeType	BidVolume4;
	///�������
	TPriceType	BidPrice5;
	///��������
	TVolumeType	BidVolume5;
	///��������
	TPriceType	AskPrice4;
	///��������
	TVolumeType	AskVolume4;
	///��������
	TPriceType	AskPrice5;
	///��������
	TVolumeType	AskVolume5;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TTimeType	UpdateTime;
	///����޸ĺ���
	TMillisecType	UpdateMillisec;
};

///���ĺ�Լ�������Ϣ
struct CSpecificInstrumentField
{
	///��Լ����
	TInstrumentIDType	InstrumentID;
};

///������Լ
struct CCombInstrumentField
{
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///�����۸����
	TCombPriceTypeType	priceType;
	///�۸�ʽ
	TformulaType	priceformula;
	///��������
	TOrderEnterTypeType	EnterType;
	///��ǰ�Ƿ���
	TBoolType	IsTrading;
	///Ĭ���µ�����
	TVolumeType	Volume;
	///����µ�����
	TVolumeType	MaxVolume;
	///Ĭ�ϴ�������
	TVolumeType	TrigTimes;
	///��󴥷�����
	TVolumeType	MaxTrigTimes;
	///����
	TVolumeType	LegNum;
	///����������
	TExchangeIDType	Leg1ExchangeID;
	///��һ��Լ����
	TInstrumentIDType	Leg1ID;
	///��һ��������
	TDirectionType	Leg1Direction;
	///��һ����
	TVolumeMultipleType	Leg1Multiple;
	///��һ�۱���
	TRatioType	Leg1PriceRatio;
	///��һ�����
	TPriceType	Leg1BasisPrice;
	///��һ����˳��
	TVolumeType	Leg1SeqNo;
	///����������
	TExchangeIDType	Leg2ExchangeID;
	///�ȶ���Լ����
	TInstrumentIDType	Leg2ID;
	///�ȶ���������
	TDirectionType	Leg2Direction;
	///�ȶ�����
	TVolumeMultipleType	Leg2Multiple;
	///�ȶ��۱���
	TRatioType	Leg2PriceRatio;
	///�ȶ������
	TPriceType	Leg2BasisPrice;
	///�ȶ�����˳��
	TVolumeType	Leg2SeqNo;
	///����������
	TExchangeIDType	Leg3ExchangeID;
	///������Լ����
	TInstrumentIDType	Leg3ID;
	///������������
	TDirectionType	Leg3Direction;
	///��������
	TVolumeMultipleType	Leg3Multiple;
	///�����۱���
	TRatioType	Leg3PriceRatio;
	///���������
	TPriceType	Leg3BasisPrice;
	///��������˳��
	TVolumeType	Leg3SeqNo;
	///���Ľ���������
	TExchangeIDType	Leg4ExchangeID;
	///���ĺ�Լ����
	TInstrumentIDType	Leg4ID;
	///������������
	TDirectionType	Leg4Direction;
	///���ĳ���
	TVolumeMultipleType	Leg4Multiple;
	///���ļ۱���
	TRatioType	Leg4PriceRatio;
	///���Ļ����
	TPriceType	Leg4BasisPrice;
	///���ı���˳��
	TVolumeType	Leg4SeqNo;
	///��Ч������
	TTimeConditionType	TimeCondition;
	///������־
	TActionFlagType	ActionFlag;
	///��ƽѭ�����ƽ������
	TOffsetTypeType	OffsetType;
	///��һ������־
	TCombLeg1ActionFlagType	Leg1ActionFlag;
	///Ͷ���߱��
	TInvestorIDType	Leg1InvestorID;
	///Ͷ���߱��
	TInvestorIDType	Leg2InvestorID;
	///Ͷ���߱��
	TInvestorIDType	Leg3InvestorID;
	///Ͷ���߱��
	TInvestorIDType	Leg4InvestorID;
	///׷������
	TVolumeType	Leg1Times;
	///׷������
	TVolumeType	Leg2Times;
	///׷������
	TVolumeType	Leg3Times;
	///׷������
	TVolumeType	Leg4Times;
	///���ִ���ʽ
	TOpenDealTypeType	Leg1OpenDealType;
	///���ִ���ʽ
	TOpenDealTypeType	Leg2OpenDealType;
	///���ִ���ʽ
	TOpenDealTypeType	Leg3OpenDealType;
	///���ִ���ʽ
	TOpenDealTypeType	Leg4OpenDealType;
	///Ͷ���ױ���־
	THedgeFlagType	Leg1HedgeFlag;
	///Ͷ���ױ���־
	THedgeFlagType	Leg2HedgeFlag;
	///Ͷ���ױ���־
	THedgeFlagType	Leg3HedgeFlag;
	///Ͷ���ױ���־
	THedgeFlagType	Leg4HedgeFlag;
};

///��Լ��ѯ
struct CQryCombInstrumentField
{
	///��Լ����
	TInstrumentIDType	CombInstrumentID;
};

///�����������
struct CCombMarketDataField
{
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TTimeType	UpdateTime;
	///����޸ĺ���
	TMillisecType	UpdateMillisec;
	///�����һ
	TPriceType	BidPrice1;
	///������һ
	TVolumeType	BidVolume1;
	///������һ
	TPriceType	AskPrice1;
	///������һ
	TVolumeType	AskVolume1;
	///���¼�
	TPriceType	LastPrice;
	///������ʱ���������ͣ����
	TBoolType	Leg1Gap;
	///������ʱ���������ͣ����
	TBoolType	Leg2Gap;
	///������ʱ���������ͣ����
	TBoolType	Leg3Gap;
	///������ʱ���������ͣ����
	TBoolType	Leg4Gap;
};

///���뱨��
struct CCombInputOrderField
{
	///ϵͳ�������
	TSequenceNoType	CombOrderSysID;
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�û�����
	TUserIDType	UserID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///�û����ر�����
	TUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TDirectionType	Direction;
	///�۸�
	TPriceType	LimitPrice;
	///ֹӯ�۸�
	TPriceType	OffsetPrice;
	///ֹ��۸�
	TPriceType	StopPrice;
	///��ʼί����
	TVolumeType	Volume;
	///����������
	TVolumeType	SendInVolume;
	///���ֳɽ�����
	TVolumeType	OpenTradeVolume;
	///���ֳɽ��Ƿ�����
	TBoolType	IsOpenTradeWhole;
	///ƽ�ֳɽ�����
	TVolumeType	OffstTradeVolume;
	///ί�д�������
	TVolumeType	TrigTimes;
	///������������
	TVolumeType	OrderTimes;
	///����ʱ��
	TTimeType	InsertTime;
	///����״̬
	TOrderStatusType	OrderStatus;
	///������־
	TActionFlagType	ActionFlag;
	///��һ������־
	TCombLeg1ActionFlagType	Leg1ActionFlag;
	///��������
	TOrderPriceTypeType	OrderPriceType;
	///����ѭ������
	TCombCycleTypeType	CycleType;
	///�����ɽ�״̬
	TTradeStatusType	TradeStatus;
	///��ǰ�����Ⱥ�
	TVolumeType	PresentLegNo;
	///Ͷ���߱��
	TInvestorIDType	Leg1InvestorID;
	///Ͷ���߱��
	TInvestorIDType	Leg2InvestorID;
	///Ͷ���߱��
	TInvestorIDType	Leg3InvestorID;
	///Ͷ���߱��
	TInvestorIDType	Leg4InvestorID;
	///��һ�����
	TPriceType	Leg1BasisPrice;
	///�ȶ������
	TPriceType	Leg2BasisPrice;
	///���������
	TPriceType	Leg3BasisPrice;
	///���Ļ����
	TPriceType	Leg4BasisPrice;
	///��һ����˳��
	TVolumeType	Leg1SeqNo;
	///�ȶ�����˳��
	TVolumeType	Leg2SeqNo;
	///��������˳��
	TVolumeType	Leg3SeqNo;
	///���ı���˳��
	TVolumeType	Leg4SeqNo;
	///��һ����
	TVolumeMultipleType	Leg1Multiple;
	///�ȶ�����
	TVolumeMultipleType	Leg2Multiple;
	///��������
	TVolumeMultipleType	Leg3Multiple;
	///���ĳ���
	TVolumeMultipleType	Leg4Multiple;
	///��Ч������
	TTimeConditionType	TimeCondition;
	///��ƽѭ�����ƽ������
	TOffsetTypeType	OffsetType;
	///���ѳɽ��Զ�ƽ��
	TBoolType	IsErrorAutoOffset;
	///׷������
	TVolumeType	Leg1Times;
	///׷������
	TVolumeType	Leg2Times;
	///׷������
	TVolumeType	Leg3Times;
	///׷������
	TVolumeType	Leg4Times;
	///���ִ���ʽ
	TOpenDealTypeType	Leg1OpenDealType;
	///���ִ���ʽ
	TOpenDealTypeType	Leg2OpenDealType;
	///���ִ���ʽ
	TOpenDealTypeType	Leg3OpenDealType;
	///���ִ���ʽ
	TOpenDealTypeType	Leg4OpenDealType;
	///Ͷ���ױ���־
	THedgeFlagType	Leg1HedgeFlag;
	///Ͷ���ױ���־
	THedgeFlagType	Leg2HedgeFlag;
	///Ͷ���ױ���־
	THedgeFlagType	Leg3HedgeFlag;
	///Ͷ���ױ���־
	THedgeFlagType	Leg4HedgeFlag;
};

///�����ɽ�
struct CCombTradeField
{
	///�ɽ����
	TTradeIDType	TradeID;
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///������
	TTradingDayType	TradingDay;
	///ϵͳ�������
	TSequenceNoType	CombOrderSysID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///��������
	TDirectionType	Direction;
	///ί�м۸�
	TPriceType	LimitPrice;
	///�ɽ��۸�
	TPriceType	TradePrice;
	///�ɽ�����
	TVolumeType	TradeVolume;
	///�ɽ�ʱ��
	TTimeType	TradeTime;
};

///�������ȱ���
struct CCombAPIInputOrderField
{
	///ί�����κ�
	TSequenceNoType	OrderBatchNO;
	///�ڴ��仯����
	TMemtableChangeTypeType	MemtableChangeType;
	///�ڼ���
	TVolumeType	LegNo;
	///ί��˳��
	TVolumeType	LegSeqNo;
	///��ͬί��˳����
	TVolumeType	SameLegSeqNo;
	///��һ������־
	TCombLeg1ActionFlagType	Leg1ActionFlag;
	///�����
	TPriceType	LegBasisPrice;
	///�ȳ���
	TVolumeMultipleType	LegMultiple;
	///����������
	TDirectionType	LegDirection;
	///�ȼ۱���
	TRatioType	LegPriceRatio;
	///�Ƿ��������һ��
	TBoolType	IsLastLegSeqNo;
	///������Լ����
	TInstrumentIDType	CombInstrumentID;
	///������������
	TDirectionType	CombDirection;
	///ί�м۸�
	TPriceType	CombLimitPrice;
	///�����۸����
	TCombPriceTypeType	priceType;
	///�ɽ����
	TMoneyType	Amount;
	///��������
	TVolumeType	SendVolume;
	///��һ�ȱ���ʱ�ѳɽ���
	TVolumeType	FirstLegTradeVolume;
	///�����������
	TVolumeType	ErrorVolume;
	///��һ���ε�һ�ʱ������
	TOrderSysIDType	OrderSysID1;
	///��һ���εڶ��ʱ������
	TOrderSysIDType	OrderSysID2;
	///��һ���ε����ʱ������
	TOrderSysIDType	OrderSysID3;
	///����ί������
	TVolumeType	LegOpenOrderVolume;
	///ƽ��ί������
	TVolumeType	LegOffsetOrderVolume;
	///���ֳɽ�����
	TVolumeType	LegOpenTradeVolume;
	///ƽ�ֳɽ�����
	TVolumeType	LegOffsetTradeVolume;
	///�ɽ����
	TTradeIDType	TradeID;
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///����������
	TExchangeIDType	ExchangeID;
	///ϵͳ�������
	TOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///�û�����
	TUserIDType	UserID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///�û����ر�����
	TUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TOrderPriceTypeType	OrderPriceType;
	///��������
	TDirectionType	Direction;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///�۸�
	TPriceType	LimitPrice;
	///����
	TVolumeType	Volume;
	///��Ч������
	TTimeConditionType	TimeCondition;
	///GTD����
	TDateType	GTDDate;
	///�ɽ�������
	TVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TVolumeType	MinVolume;
	///ֹ���
	TPriceType	StopPrice;
	///ǿƽԭ��
	TForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TCustomType	UserCustom;
	///������
	TTradingDayType	TradingDay;
	///��Ա���
	TParticipantIDType	ParticipantID;
	///�ͻ���
	TClientIDType	ClientID;
	///�µ�ϯλ��
	TSeatIDType	SeatID;
	///����ʱ��
	TTimeType	InsertTime;
	///���ر������
	TOrderLocalIDType	OrderLocalID;
	///������Դ
	TOrderSourceType	OrderSource;
	///����״̬
	TOrderStatusType	OrderStatus;
	///����ʱ��
	TTimeType	CancelTime;
	///�����û����
	TUserIDType	CancelUserID;
	///��ɽ�����
	TVolumeType	VolumeTraded;
	///ʣ������
	TVolumeType	VolumeRemain;
	///��������
	TPlotTypeType	PlotType;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///������
	TMoneyType	Fee;
	///׷������
	TVolumeType	Leg1Times;
	///׷������
	TVolumeType	Leg2Times;
	///׷������
	TVolumeType	Leg3Times;
	///׷������
	TVolumeType	Leg4Times;
	///���ִ���ʽ
	TOpenDealTypeType	Leg1OpenDealType;
	///���ִ���ʽ
	TOpenDealTypeType	Leg2OpenDealType;
	///���ִ���ʽ
	TOpenDealTypeType	Leg3OpenDealType;
	///���ִ���ʽ
	TOpenDealTypeType	Leg4OpenDealType;
};

///��ʷ�����ɽ���ѯ
struct CQryHisCombTradeField
{
	///��ʼ������
	TTradingDayType	BeginTradingDay;
	///����������
	TTradingDayType	EndTradingDay;
	///������Լ����
	TInstrumentIDType	CombInstrumentID;
	///ϵͳ�������
	TSequenceNoType	CombOrderSysID;
	///�ɽ����
	TTradeIDType	TradeID;
};

///��ʷ�ɽ���ѯ
struct CQryHisTradeField
{
	///��ʼ������
	TTradingDayType	BeginTradingDay;
	///����������
	TTradingDayType	EndTradingDay;
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///�û�����
	TUserIDType	UserID;
	///����������
	TExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///�ɽ����
	TTradeIDType	TradeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
};

///������Ϣ֪ͨ
struct CCombNtyMessageField
{
	///������Լ����
	TInstrumentIDType	CombInstrumentID;
	///ϵͳ�������
	TSequenceNoType	CombOrderSysID;
	///�ڼ���
	TVolumeType	LegNo;
	///ί��˳��
	TVolumeType	LegSeqNo;
	///��ϢժҪ
	TAbstractType	Abstract;
	///���͹�˾���
	TBrokerIDType	BrokerID;
};

///�����ײ��Ա�������
struct CGridOrderField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///����������
	TExchangeIDType	ExchangeID;
	///ϵͳ�������
	TOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///�û�����
	TUserIDType	UserID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///�û����ر�����
	TUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TOrderPriceTypeType	OrderPriceType;
	///��������
	TDirectionType	Direction;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///�۸�
	TPriceType	LimitPrice;
	///����
	TVolumeType	Volume;
	///��Ч������
	TTimeConditionType	TimeCondition;
	///GTD����
	TDateType	GTDDate;
	///�ɽ�������
	TVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TVolumeType	MinVolume;
	///ֹ���
	TPriceType	StopPrice;
	///ǿƽԭ��
	TForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TCustomType	UserCustom;
	///������
	TTradingDayType	TradingDay;
	///��Ա���
	TParticipantIDType	ParticipantID;
	///�ͻ���
	TClientIDType	ClientID;
	///�µ�ϯλ��
	TSeatIDType	SeatID;
	///����ʱ��
	TTimeType	InsertTime;
	///���ر������
	TOrderLocalIDType	OrderLocalID;
	///������Դ
	TOrderSourceType	OrderSource;
	///����״̬
	TOrderStatusType	OrderStatus;
	///����ʱ��
	TTimeType	CancelTime;
	///�����û����
	TUserIDType	CancelUserID;
	///��ɽ�����
	TVolumeType	VolumeTraded;
	///ʣ������
	TVolumeType	VolumeRemain;
	///��������
	TPlotTypeType	PlotType;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///������
	TMoneyType	Fee;
	///����������
	TMoneyType	FrozenFee;
	///����ı�֤��
	TMoneyType	FrozenMargin;
	///��ȨȨ������֧
	TMoneyType	FrozenPremium;
	///�ʽ��ʺ�
	TAccountIDType	AccountID;
	///�µ��û����
	TUserIDType	OrderUserID;
	///��������
	TTradeTypeType	TradeType;
	///�����־
	TDealFlagType	DealFlag;
	///ί�����κ�
	TSequenceNoType	OrderBatchNO;
	///�ڼ���
	TVolumeType	LegNo;
	///ί��˳��
	TVolumeType	LegSeqNo;
	///��ͬί��˳����
	TVolumeType	SameLegSeqNo;
	///�Ƿ��������һ��
	TBoolType	IsLastLegSeqNo;
	///�Ƿ������ȵ����һ��
	TBoolType	IsLastSameLegNo;
	///��һ���ε�һ�ȵڼ���
	TVolumeType	LegSeqNo1LegNoNum;
	///��һ������־
	TCombLeg1ActionFlagType	Leg1ActionFlag;
	///�����
	TPriceType	LegBasisPrice;
	///����׷��
	TBoolType	IsNoCancelOrder;
	///���տͻ���ʱ��
	TMillisecType	LocalInsertTime;
	///��ǰ��
	TVolumeType	CurrPot;
	///��ǰ��
	TVolumeType	LastPot;
	///�ɽ�״̬
	TTradeStatusType	TradeStatus;
	///�Ƿ�ƽ�ֻ򳷵�
	TBoolType	IsOffset;
	///��ƽ����ԭ�������
	TOrderSysIDType	OffsetSysID;
	///ԭ����۸�
	TPriceType	OpenPrice;
	///�ɽ��۸�
	TPriceType	TradePrice;
	///��λ�۸�
	TPriceType	PotPrice;
	///ֹ��״̬
	TBoolType	IsStopLoss;
	///�ö����Ƿ���Ա����ң�Ĭ�ϲ���
	TIsActiveType	IsActive;
	///����ʱ��
	TMillisecType	OrderTime;
	///��ע
	TCustomType	Comment;
	///�ڴ��仯����
	TMemtableChangeTypeType	MemtableChangeType;
};

///���ӹ���
struct CAPILinkField
{
	///���ӱ��
	TFrontIDType	LinkID;
	///ǰ̨�����û�����
	TUserIDType	UserID;
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///��̨Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����
	TPasswordType	Password;
	///�Ƿ��Ծ
	TBoolType	IsActive;
	///�������
	TEnvNoType	EnvNo;
	///�Ƿ��������
	TBoolType	IsMrkActive;
	///�Ƿ�ֻ������ѡ��Լ����QuotCrtList 1=��
	TBoolType	IsRcvQuotList;
};

///���г�������ʱ��
struct CMarketTimeField
{
	///����������
	TExchangeIDType	ExchangeID;
	///����ʱ��
	TTimeType	OpenTime;
	///����ʱ��
	TTimeType	CloseTime;
	///���뿪�п��Ա���ʱ��
	TTimeType	GapOpen;
	///������п��Ա���ʱ��
	TTimeType	GapClose;
};

///�������ղ���¼��
struct CLongShortPlotInputField
{
	///��ղ�������
	TLongShortPlotTypeType	LongShortPlotType;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///���Ա���,���벻���޸�
	TPriceType	OrderPrice;
	///��������
	TVolumeType	Volume;
	///��ࣺ��С���۵�����
	TVolumeType	Range;
	///����
	TVolumeType	Grade;
	///ֹ���
	TPriceType	StopPrice;
	///����ʱ��
	TTimeType	StartTime;
	///ֹͣʱ��
	TTimeType	EndTime;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///�ױʱ����ٷ���ʽ��֧���޼ۺ��м�
	TOrderPriceTypeType	OrderPriceType;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///��󱨵�����
	TVolumeType	MaxQty;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
};

///�������ղ���
struct CLongShortPlotField
{
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///��������
	TDateType	InsertDate;
	///����ʱ��
	TTimeType	InsertTime;
	///�޸�����
	TDateType	ModifyDate;
	///�޸�ʱ��
	TTimeType	ModifyTime;
	///��ղ�������
	TLongShortPlotTypeType	LongShortPlotType;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///���Ա���,���벻���޸�
	TPriceType	OrderPrice;
	///��������
	TVolumeType	Volume;
	///��ࣺ��С���۵�����
	TVolumeType	Range;
	///����
	TVolumeType	Grade;
	///ֹ���
	TPriceType	StopPrice;
	///����ʱ��
	TTimeType	StartTime;
	///ֹͣʱ��
	TTimeType	EndTime;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///�ױʱ����ٷ���ʽ��֧���޼ۺ��м�
	TOrderPriceTypeType	OrderPriceType;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///��󱨵�����
	TVolumeType	MaxQty;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///��ǰ��
	TVolumeType	CurrPot;
	///��һ��
	TVolumeType	PrePot;
	///����״̬
	TOrderStatusType	OrderStatus;
	///�ֲֳɱ�
	TMoneyType	PositionCost;
	///��ɽ�ʣ����
	TVolumeType	BuyRemainVolume;
	///���ɽ�ʣ����
	TVolumeType	SellRemainVolume;
	///�Ƿ�ٷ��״α���
	TBoolType	IsSendFirst;
	///�򶳽�����
	TVolumeType	FrozenBuyVolume;
	///����������
	TVolumeType	FrozenSellVolume;
	///����ӯ��
	TMoneyType	FloatMoney;
};

///�������ղ����޸�
struct CLongShortPlotActionField
{
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///��������
	TVolumeType	Volume;
	///����
	TVolumeType	Grade;
	///ֹ���
	TPriceType	StopPrice;
	///����ʱ��
	TTimeType	StartTime;
	///ֹͣʱ��
	TTimeType	EndTime;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///��󱨵�����
	TVolumeType	MaxQty;
};

///�������ղ��Բ�ѯ����
struct CQryLongShortPlotField
{
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///�������ݲ�ѯӦ��
struct CQueryBaseFinishField
{
	///�ͻ��˾��͹�˾���
	TBrokerIDType	FrontBrokerID;
	///�ͻ���ǰ̨�����û�����
	TUserIDType	FrontUserID;
	///���������͹�˾���
	TBrokerIDType	BackBrokerID;
	///������ǰ̨�����û�����
	TUserIDType	BackUserID;
	///����
	TPasswordType	Password;
	///��������
	TAPITypeType	APIType;
	///ҵ���������ͣ�ͬһ�ӿڶ��������ʹ��
	TLinkTypeType	LinkType;
	///���׻�������
	TBoolType	TradeOrMarket;
	///ǰ�ñ��
	TFrontIDType	FrontID;
	///�Ự���
	TSessionIDType	SessionID;
	///������
	TTradingDayType	TradingDay;
};

///��ɽ������������
struct CIcebergPlotInputField
{
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///֧���޼ۺ��м�
	TOrderPriceTypeType	OrderPriceType;
	///���Ա���,���벻���޸�
	TPriceType	OrderPrice;
	///��������
	TVolumeType	Volume;
	///ʵ����󱨵�����
	TVolumeType	MaxQty;
	///ʵ����С��������
	TVolumeType	MinQty;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
};

///��ɽ��������Ӧ��
struct CIcebergPlotField
{
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///��������
	TDateType	InsertDate;
	///����ʱ��
	TTimeType	InsertTime;
	///�޸�����
	TDateType	ModifyDate;
	///�޸�ʱ��
	TTimeType	ModifyTime;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///֧���޼ۺ��м�
	TOrderPriceTypeType	OrderPriceType;
	///���Ա���,���벻���޸�
	TPriceType	OrderPrice;
	///��������
	TVolumeType	Volume;
	///ʵ����󱨵�����
	TVolumeType	MaxQty;
	///ʵ����С��������
	TVolumeType	MinQty;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����״̬
	TOrderStatusType	OrderStatus;
	///�ֲֳɱ�
	TMoneyType	PositionCost;
	///��ɽ�ʣ����
	TVolumeType	BuyRemainVolume;
	///���ɽ�ʣ����
	TVolumeType	SellRemainVolume;
	///�򶳽�����
	TVolumeType	FrozenBuyVolume;
	///����������
	TVolumeType	FrozenSellVolume;
	///�ɽ��󱨵��Ƿ���
	TBoolType	IsSendFirst;
	///����ӯ��
	TMoneyType	FloatMoney;
};

///��ɽ���������޸�
struct CIcebergPlotActionField
{
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///����������
	TExchangeIDType	ExchangeID;
	///֧���޼ۺ��м�
	TOrderPriceTypeType	OrderPriceType;
	///���Ա���,���벻���޸�
	TPriceType	OrderPrice;
	///��������
	TVolumeType	Volume;
	///ʵ����󱨵�����
	TVolumeType	MaxQty;
	///ʵ����С��������
	TVolumeType	MinQty;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///��ɽ������ѯ����
struct CQryIcebergPlotField
{
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///���鶩����ѯ����
struct CGhostPlotInputField
{
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///֧���޼ۺ��м�
	TOrderPriceTypeType	OrderPriceType;
	///���������۸�
	TPriceType	OrderPrice;
	///��������
	TVolumeType	Volume;
	///��С������������
	TVolumeType	MinTriggerQty;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
};

///���鶩����ѯ
struct CGhostPlotField
{
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///��������
	TDateType	InsertDate;
	///����ʱ��
	TTimeType	InsertTime;
	///�޸�����
	TDateType	ModifyDate;
	///�޸�ʱ��
	TTimeType	ModifyTime;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///֧���޼ۺ��м�
	TOrderPriceTypeType	OrderPriceType;
	///���������۸�
	TPriceType	OrderPrice;
	///��������
	TVolumeType	Volume;
	///��С������������
	TVolumeType	MinTriggerQty;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����״̬
	TOrderStatusType	OrderStatus;
	///�ֲֳɱ�
	TMoneyType	PositionCost;
	///��ɽ�ʣ����
	TVolumeType	BuyRemainVolume;
	///���ɽ�ʣ����
	TVolumeType	SellRemainVolume;
	///�򶳽�����
	TVolumeType	FrozenBuyVolume;
	///����������
	TVolumeType	FrozenSellVolume;
	///�ɽ��󱨵��Ƿ���
	TBoolType	IsSendFirst;
	///����ӯ��
	TMoneyType	FloatMoney;
};

///���鶩�������޸�
struct CGhostPlotActionField
{
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///֧���޼ۺ��м�
	TOrderPriceTypeType	OrderPriceType;
	///��������
	TVolumeType	Volume;
	///��С������������
	TVolumeType	MinTriggerQty;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///���鶩����ѯ����
struct CQryGhostPlotField
{
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///���̶�����ѯ����
struct CPegPlotInputField
{
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///��������
	TReffPriceTypeType	ReffPriceType;
	///���ί�м�
	TPriceType	MaxOrderPrice;
	///��Сί�м�
	TPriceType	MinOrderPrice;
	///��������
	TVolumeType	Volume;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
};

///���̶�����ѯ
struct CPegPlotField
{
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///��������
	TDateType	InsertDate;
	///����ʱ��
	TTimeType	InsertTime;
	///�޸�����
	TDateType	ModifyDate;
	///�޸�ʱ��
	TTimeType	ModifyTime;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///��������
	TReffPriceTypeType	ReffPriceType;
	///���ί�м�
	TPriceType	MaxOrderPrice;
	///��Сί�м�
	TPriceType	MinOrderPrice;
	///��������
	TVolumeType	Volume;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����״̬
	TOrderStatusType	OrderStatus;
	///�ֲֳɱ�
	TMoneyType	PositionCost;
	///��ɽ�ʣ����
	TVolumeType	BuyRemainVolume;
	///���ɽ�ʣ����
	TVolumeType	SellRemainVolume;
	///�򶳽�����
	TVolumeType	FrozenBuyVolume;
	///����������
	TVolumeType	FrozenSellVolume;
	///�ɽ��󱨵��Ƿ���
	TBoolType	IsSendFirst;
	///����ӯ��
	TMoneyType	FloatMoney;
};

///���̶��������޸�
struct CPegPlotActionField
{
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///��������
	TReffPriceTypeType	ReffPriceType;
	///���ί�м�
	TPriceType	MaxOrderPrice;
	///��Сί�м�
	TPriceType	MinOrderPrice;
	///��������
	TVolumeType	Volume;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///���̶�����ѯ����
struct CQryPegPlotField
{
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///TWap������ѯ����
struct CTWapPlotInputField
{
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///��ִ���
	TVolumeType	NumberOfWaves;
	///�ڲ𵥺����������㱨�������Ƿ��Զ�����
	TBoolType	IsAutoWaves;
	///��������
	TReffPriceTypeType	ReffPriceType;
	///�ο�ί�м�
	TPriceType	ReffPrice;
	///�۲�
	TPriceType	PriceDiff;
	///��������
	TVolumeType	Volume;
	///ί�м��ʱ��
	TVolumeType	WaitDelay;
	///����ȷ��ʱ��
	TVolumeType	CancelDelay;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
};

///TWap������ѯ
struct CTWapPlotField
{
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///��������
	TDateType	InsertDate;
	///����ʱ��
	TTimeType	InsertTime;
	///�޸�����
	TDateType	ModifyDate;
	///�޸�ʱ��
	TTimeType	ModifyTime;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///��ִ���
	TVolumeType	NumberOfWaves;
	///�ڲ𵥺����������㱨�������Ƿ��Զ�����
	TBoolType	IsAutoWaves;
	///��������
	TReffPriceTypeType	ReffPriceType;
	///�ο�ί�м�
	TPriceType	ReffPrice;
	///�۲�
	TPriceType	PriceDiff;
	///��������
	TVolumeType	Volume;
	///ί�м��ʱ��
	TVolumeType	WaitDelay;
	///����ȷ��ʱ��
	TVolumeType	CancelDelay;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����״̬
	TOrderStatusType	OrderStatus;
	///�ֲֳɱ�
	TMoneyType	PositionCost;
	///��ɽ�ʣ����
	TVolumeType	BuyRemainVolume;
	///���ɽ�ʣ����
	TVolumeType	SellRemainVolume;
	///�򶳽�����
	TVolumeType	FrozenBuyVolume;
	///����������
	TVolumeType	FrozenSellVolume;
	///�ɽ��󱨵��Ƿ���
	TBoolType	IsSendFirst;
	///��С��������
	TVolumeType	MinLimitOrderVolume;
	///��󱨵�����
	TVolumeType	MaxLimitOrderVolume;
	///���¼�
	TPriceType	LastPrice;
	///��һ��
	TPriceType	AskPrice;
	///��һ��
	TPriceType	BidPrice;
	///�ϴα���ʱ��
	TMillisecType	LastOrderTime;
	///�ϴγ���ʱ��
	TMillisecType	LastCancelTime;
	///����ӯ��
	TMoneyType	FloatMoney;
};

///TWap���������޸�
struct CTWapPlotActionField
{
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///��������
	TReffPriceTypeType	ReffPriceType;
	///�ο�ί�м�
	TPriceType	ReffPrice;
	///�۲�
	TPriceType	PriceDiff;
	///��������
	TVolumeType	Volume;
	///ί�м��ʱ��
	TVolumeType	WaitDelay;
	///����ȷ��ʱ��
	TVolumeType	CancelDelay;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///TWap������ѯ����
struct CQryTWapPlotField
{
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///MIT��Stop������ѯ����
struct CMITStopPlotInputField
{
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///��С������
	TVolumeType	MinTrigQty;
	///��������
	TReffPriceTypeType	ReffPriceType;
	///����ί�м�
	TPriceType	TrigPrice;
	///�۲�
	TPriceType	PriceDiff;
	///��������
	TVolumeType	Volume;
	///���Ա�������
	TMITStopTypeType	MITStopType;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
};

///MIT��Stop������ѯ
struct CMITStopPlotField
{
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///��������
	TDateType	InsertDate;
	///����ʱ��
	TTimeType	InsertTime;
	///�޸�����
	TDateType	ModifyDate;
	///�޸�ʱ��
	TTimeType	ModifyTime;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///��С������
	TVolumeType	MinTrigQty;
	///��������
	TReffPriceTypeType	ReffPriceType;
	///����ί�м�
	TPriceType	TrigPrice;
	///�۲�
	TPriceType	PriceDiff;
	///��������
	TVolumeType	Volume;
	///���Ա�������
	TMITStopTypeType	MITStopType;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����״̬
	TOrderStatusType	OrderStatus;
	///�ֲֳɱ�
	TMoneyType	PositionCost;
	///��ɽ�ʣ����
	TVolumeType	BuyRemainVolume;
	///���ɽ�ʣ����
	TVolumeType	SellRemainVolume;
	///�򶳽�����
	TVolumeType	FrozenBuyVolume;
	///����������
	TVolumeType	FrozenSellVolume;
	///�Ƿ�ﵽ�����ۣ��ﵽ�������´ο�ʼ����
	TBoolType	IsSendFirst;
	///��С��������
	TVolumeType	MinLimitOrderVolume;
	///��󱨵�����
	TVolumeType	MaxLimitOrderVolume;
	///���¼�
	TPriceType	LastPrice;
	///��һ��
	TPriceType	AskPrice;
	///��һ��
	TPriceType	BidPrice;
	///����ӯ��
	TMoneyType	FloatMoney;
};

///MIT��Stop���������޸�
struct CMITStopPlotActionField
{
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///��������
	TDirectionType	Direction;
	///Ͷ���ױ���־
	THedgeFlagType	HedgeFlag;
	///��ƽ��־
	TOffsetFlagType	OffsetFlag;
	///��С������
	TVolumeType	MinTrigQty;
	///��������
	TReffPriceTypeType	ReffPriceType;
	///����ί�м�
	TPriceType	TrigPrice;
	///�۲�
	TPriceType	PriceDiff;
	///��������
	TVolumeType	Volume;
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///MIT��Stop������ѯ����
struct CQryMITStopPlotField
{
	///��¼���͹�˾���
	TBrokerIDType	LogBrokerID;
	///��¼�û�����
	TUserIDType	LogUserID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///����ִ��״̬
	TPlotStatusTypeType	Status;
	///Ͷ���߱��
	TInvestorIDType	InvestorID;
};

///���ĵ������б�
struct CSubMarketQuotoListField
{
	///���ӱ��
	TFrontIDType	LinkID;
	///��������,QDP,QDAM,CTP
	TAPITypeType	APIType;
	///ҵ���������ͣ�ͬһ�ӿڶ��������ʹ��
	TLinkTypeType	LinkType;
	///����������
	TExchangeIDType	ExchangeID;
	///��Լ����
	TInstrumentIDType	InstrumentID;
	///�Ƿ���
	TBoolType	IsActive;
};

///��Ӧ���������ӹ�����
struct CEnvManagerField
{
	///�������
	TEnvNoType	EnvNo;
	///��������
	TShortNameType	EnvName;
	///��������
	TLongNameType	EnvDesc;
	///��������
	TAPITypeType	APIType;
	///ҵ���������ͣ�ͬһ�ӿڶ��������ʹ��
	TLinkTypeType	LinkType;
	///���ӵ�ַ
	TTCPAddressType	TradeAddress;
	///���ӵ�ַ
	TTCPAddressType	MarketAddress;
	///���������
	TTopicIDType	TopicID;
};

///���ӹ���
struct CAPIInnerLinkField
{
	///���ӱ��
	TFrontIDType	LinkID;
	///ǰ̨�����û�����
	TUserIDType	UserID;
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///��̨Ͷ���߱��
	TInvestorIDType	InvestorID;
	///����
	TPasswordType	Password;
	///�Ƿ��Ծ
	TBoolType	IsActive;
	///�������
	TEnvNoType	EnvNo;
	///�Ƿ��������
	TBoolType	IsMrkActive;
	///�Ƿ�ֻ������ѡ��Լ����QuotCrtList 1=��
	TBoolType	IsRcvQuotList;
	///��������
	TAPITypeType	APIType;
	///ҵ���������ͣ�ͬһ�ӿڶ��������ʹ��
	TLinkTypeType	LinkType;
	///���ӵ�ַ
	TTCPAddressType	TradeAddress;
	///���ӵ�ַ
	TTCPAddressType	MarketAddress;
	///���������
	TTopicIDType	TopicID;
};

///������Ϣ֪ͨ
struct CPlotNtyMessageField
{
	///���͹�˾���
	TBrokerIDType	BrokerID;
	///����ִ�б��
	TOrderLocalIDType	PlotID;
	///�������
	TErrorIDType	ErrorID;
	///��ϢժҪ
	TAbstractType	Abstract;
};



#endif
