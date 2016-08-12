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
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif
enum TSignalType {����Ƶ��,����Ƶ��};
enum CountTye{�������,��������};
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
		m_CountType=�������;
		m_CounterNum=0; //Ƶ��ͨ����������;
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
	IChannel	  *m_pAi[CHANNELNUM];  //ģ��ͨ��
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
	float         xreal[CHANNELNUM ][N0],ximag[N0]; //���ٸ���Ҷ�任;
	float         wreal [N0/2], wimag [N0/2];
	float         m_CntValue,m_fBasefre,m_CntSum;
	float         m_ave_fval;
 	long          m_lPointNum;  
	long          m_lNowNum[CHANNELNUM ];
	long          m_StoreCount,m_StoreCountEx[CHANNELNUM ];
public:
	IChannel      *m_pCh[CHANNELNUM ][200];
	IChannel      *m_pChCounter[4];   //Counter ͨ��;
	int           m_CounterIndex[CHANNELNUM]; //ģ��ͨ��ʹ�õ�Ƶ��ͨ��;
	int           m_CounterNum;          //Counter������;
	long          ChAllNum[CHANNELNUM];       //ͨ��������;
	float         m_freqmult[CHANNELNUM ][50]; //ÿ��ͨ����Ƶ�ʲ���;
	float         m_Exfremult[CHANNELNUM ][50];//
	long          m_chIndex[CHANNELNUM ];
	CString       cstring[CHANNELNUM ][50];   //ÿ��ͨ����Ƶ�ʲ���;
	CComBSTR      m_bstr[CHANNELNUM ][50];    //ͨ��������;
	CountTye      m_CountType;                //���ݼ��㷽ʽ���������������;
	float         m_fPointTime;               //�����������ʱ����;
	int           m_iSignalOutPoint;          //
	bool          IsPrintInfo[CHANNELNUM];    //�Ƿ��ӡͨ��������Ϣ;
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
		AIgroup->get_Count(&numAIChannels);//��ȡģ��ͨ������
		
		for (int i = 0; i < numAIChannels; i++)
		{
			//��ȡʹ�ܵ�ģ��ͨ��;
			AIgroup->get_Item(i,&m_pAi[i]);
			VARIANT_BOOL isUsed;
			m_pAi[i]->get_Used(&isUsed);
			if (!isUsed)
				m_pAi[i] = NULL;
		}
		if(!GetTrigChannel(data)) //���������trig,��ʵ���ǳ�������
		{
			return S_FALSE;
		}
		if(!GetPsTrigChannel(data)) //���������trig,��ʵ���ǳ�������
		{
			return S_FALSE;
		}
		if(!GetAllCounterChannel()) //���������trig,��ʵ���ǳ�������
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
