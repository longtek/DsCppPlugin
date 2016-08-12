#pragma once
#include "resource.h" 
#include <math.h>
#include <atlstr.h>
#include "DsCppPlugin_i.h"
#include <vector>
using namespace std;
#include "stdafx.h"
#define CHANNELNUM  16
const  long N=32768;
const  long N0=65536;
const  long N1=4096;
const  long N2=1024;
const  long N3=256;
using namespace ATL;
#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif
enum TSignalType {固有频率,倍数频率};
enum CountTye{间隔计算,连续计算};
#include <atlwin.h>
class ATL_NO_VTABLE CVCppPluginImpl :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CVCppPluginImpl, &CLSID_VCppPluginImpl>,
	public IDispatchImpl<IVCppPluginImpl,&IID_IVCppPluginImpl,&LIBID_DsCppPluginLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispatchImpl<IPlugin2, &__uuidof(IPlugin2), &LIBID_DEWEsoft, /* wMajor = */ 630, /* wMinor = */ 7>,
	public IDispatchImpl<IPlugin4, &__uuidof(IPlugin4), &LIBID_DEWEsoft, /* wMajor = */ 630, /* wMinor = */ 7>
{
public:
	CVCppPluginImpl()
	{
		app = NULL;
		memset(m_pAi, NULL, sizeof(m_pAi));
		memset(m_pCh, NULL, sizeof(m_pCh));
		m_pTrig = NULL;
		m_pPsTrig= NULL;
		numAIChannels = 0;
		memset(m_freqmult,0,sizeof(m_freqmult));
		memset(m_chIndex,0,sizeof(m_chIndex));
		memset(ChAllNum,0,sizeof(ChAllNum));
		memset(m_Exfremult,0,sizeof(m_Exfremult));
		m_CountType=间隔计算;
		m_CounterNum=0; //频率通道的总数量;
		m_fPointTime=1.0;
		m_lPointNum=0;  
		m_iSignalOutPoint=1;
		for (int i=0;i<16;i++)
		{
			m_CounterIndex[i]=0;
			for(int j=0;j<50;j++)
			{
				cstring[i][j]="0";
				switch(i)
				{
				case 0:m_bstr[i][j]="A1_temp";break;
				case 1:m_bstr[i][j]="A2_temp";break;
				case 2:m_bstr[i][j]="A3_temp";break;
				case 3:m_bstr[i][j]="A4_temp";break;
				case 4:m_bstr[i][j]="A5_temp";break;
				case 5:m_bstr[i][j]="A6_temp";break;
				case 6:m_bstr[i][j]="A7_temp";break;
				case 7:m_bstr[i][j]="A8_temp";break;
				case 8:m_bstr[i][j]="A9_temp";break;
				case 9:m_bstr[i][j]="A10_temp";break;
				case 10:m_bstr[i][j]="A11_temp";break;
				case 11:m_bstr[i][j]="A12_temp";break;
				case 12:m_bstr[i][j]="A13_temp";break;
				case 13:m_bstr[i][j]="A14_temp";break;
				case 14:m_bstr[i][j]="A15_temp";break;
				case 15:m_bstr[i][j]="A16_temp";break;
				}
			}
		}
		CleanData();
	}
	~CVCppPluginImpl();

	DECLARE_REGISTRY_RESOURCEID(IDR_VCPPPLUGINIMPL)


	BEGIN_COM_MAP(CVCppPluginImpl)
		COM_INTERFACE_ENTRY(IVCppPluginImpl)
		COM_INTERFACE_ENTRY2(IDispatch, IPlugin2)
		COM_INTERFACE_ENTRY(IPlugin2)
		COM_INTERFACE_ENTRY(IPlugin4)
	END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}
	void FinalRelease()
	{
	}
private:
	IApp          *app;
	bool          used;
	IChannel	  *m_pAi[CHANNELNUM];  //模拟通道
	IChannel      *m_pTrig,*m_pPsTrig,*m_pCntCh;
	long          numAIChannels;
	long		  m_sampleRate;
	long long	  samplesSoFar[CHANNELNUM ];
	long		  oldBuffPos[CHANNELNUM ];
	bool          bRet,m_bCnt,m_bStop[CHANNELNUM ],m_bClear[CHANNELNUM ],m_bAmple,m_bFirst,m_bClearEnter,m_bStart[CHANNELNUM ],m_bNret[CHANNELNUM];
	long          numfftsample[CHANNELNUM ];
	long          m_allSamples[CHANNELNUM ],DN;
	float	      m_SingleSum[CHANNELNUM ],m_SqSum[CHANNELNUM ],m_CubeSum[CHANNELNUM ],m_QuadSum[CHANNELNUM],m_FFTsum[CHANNELNUM];
	float         m_Amax[CHANNELNUM ],m_abxSum[CHANNELNUM ],m_sqabSum[CHANNELNUM ];
	long          m_numTtrig[CHANNELNUM ],m_numALLtrig[CHANNELNUM ];
	float         xreal[CHANNELNUM ][N0],ximag[N0]; //快速傅里叶变换;
	float         wreal [N0/2], wimag [N0/2];
	float         m_CntValue,m_fBasefre,m_CntSum;
	float         m_ave_fval;
 	long          m_lPointNum;  
	long          m_lNowNum[CHANNELNUM ];
	long          m_StoreCount,m_StoreCountEx[CHANNELNUM ];
public:
	IChannel      *m_pCh[CHANNELNUM ][200];
	IChannel      *m_pChCounter[4];   //Counter 通道;
	int           m_CounterIndex[CHANNELNUM]; //模拟通道使用的频率通道;
	int           m_CounterNum;          //Counter总数量;
	long          ChAllNum[CHANNELNUM];       //通道组总数;
	float         m_freqmult[CHANNELNUM ][50]; //每个通道组频率参数;
	float         m_Exfremult[CHANNELNUM ][50];//
	long          m_chIndex[CHANNELNUM ];
	CString       cstring[CHANNELNUM ][50];   //每个通道组频率参数;
	CComBSTR      m_bstr[CHANNELNUM ][50];    //通道组名字;
	CountTye      m_CountType;                //数据计算方式间隔计算连续计算;
	float         m_fPointTime;               //连续计算计算时间间隔;
	int           m_iSignalOutPoint;          //
	bool          IsPrintInfo[CHANNELNUM];    //是否打印通道设置信息;
public:
	bool GetTrigChannel(IData* pData);
	bool GetPsTrigChannel(IData* pData);
	bool GetCNTChannel(IData* pData);
	int  GetAllCounterChannel();
	void CleanData();
	void MountChannels();
	void MountChannelExs();
	void MountAutoChannels(int chId,int idex);
	void DeleMountChannels();
	STDMETHOD(Initiate)(IApp * DeweApp);
	void StoreValue(int chId, float val);
	void StoreValue_Ex(int chId,float val);
	VARIANT AddIndexName(int *ind,long level);
	bool IsTrig();
	bool IsPsTrig();
	void Calculate(int chId,float val);
	void OnPutData(int chId);
	void MyFFT(float *data1,  float *data2,int n,int chId);
	void MySwap( float *dat1,  float *dat2,int n,int chId);
	void FFTInit();
	void FFTInit50();
	void Time_Calculate();
	STDMETHOD(OnStartAcq)()
	{
		IData* data;
		IChannelGroups* groups;
		IChannelGroup* AIgroup;

		app->get_Data(&data);
		data->get_Groups(&groups);
		groups->get_Item(1, &AIgroup); // get AI group
		AIgroup->get_Count(&numAIChannels);//获取模拟通道总数
		
		for (int i = 0; i < numAIChannels; i++)
		{
			//获取使能的模拟通道;
			AIgroup->get_Item(i,&m_pAi[i]);
			VARIANT_BOOL isUsed;
			m_pAi[i]->get_Used(&isUsed);
			if (!isUsed)
				m_pAi[i] = NULL;
		}
		if(!GetTrigChannel(data)) //如果不存在trig,其实就是出问题了
		{
			return S_FALSE;
		}
		if(!GetPsTrigChannel(data)) //如果不存在trig,其实就是出问题了
		{
			return S_FALSE;
		}
		if(!GetAllCounterChannel()) //如果不存在trig,其实就是出问题了
		{
			return S_FALSE;
		}
		CleanData();
		Time_Calculate();
		return S_OK;
	}
	STDMETHOD(OnStopAcq)()
	{
		return S_OK;
	}
	STDMETHOD(OnStartStoring)()
	{
		CleanData();
		m_bCnt=TRUE;
		return S_OK;
	}
	STDMETHOD(OnStopStoring)()
	{
		return S_OK;
	}
	STDMETHOD(OnGetData)();
	STDMETHOD(OnTrigger)(double Time)
	{
		return S_OK;
	}
	STDMETHOD(Configure)();
	STDMETHOD(get_Id)(BSTR * Value)
	{
		return S_OK;
	}
	STDMETHOD(SaveSetup)(VARIANT * Data)
	{
		return S_OK;
	}
	STDMETHOD(LoadSetup)(VARIANT Data);
	STDMETHOD(NewSetup)();
	STDMETHOD(ClearChannelsInstance)();
	STDMETHOD(ShowFrame)(long Parent, VARIANT_BOOL * Value);
	STDMETHOD(HideFrame)();
	STDMETHOD(UpdateFrame)();
	STDMETHOD(get_Used)(VARIANT_BOOL * Value);
	STDMETHOD(put_Used)(VARIANT_BOOL Value);
	STDMETHOD(OnOleMsg)(long Msg, long Param)
	{
		return S_OK;
	}

	// IPlugin4 Methods
public:
	STDMETHOD(OnEvent)(EventIDs EventID, VARIANT InParam, VARIANT * OutParam)
	{
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(VCppPluginImpl), CVCppPluginImpl)
