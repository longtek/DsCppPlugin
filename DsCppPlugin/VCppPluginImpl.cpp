﻿// VCppPluginImpl.cpp : CVCppPluginImpl 的实现
#include"stdafx.h"
#include "VCppPluginImpl.h"
#include<stdlib.h>
#include "SetupUserControl.h"
#include <vcclr.h>
#include <cstdlib>
using namespace DsCppPlugin; 
gcroot<SetupUserControl^> setupUserControl;
const  float PI=3.1415f;
const char g_strName[16][32] = {{"AI_1"}, {"AI_2"}, {"AI_3"}, {"AI_4"}, \
								{"AI_5"}, {"AI_6"}, {"AI_7"}, {"AI_8"}, {"BI_1"}, {"BI_2"}, \
                                 {"BI_3"}, {"BI_4"}, {"BI_5"}, {"BI_6"}, {"BI_7"},{"BI_8"}};
	                                 
const char s_strName[16][32][32] = { {{"A1_Tnum"},{"A1_ALLnum"},{"A1_DATA"},{"A1_平均值AVE"}, {"A1_均方差RM"}, {"A1_有效值RMS"},{"A1_方差VAR"}, {"A1_标准差STDEV"},{"A1_偏度SKEW"},{"A1_峭度QURT"},{"A1_最大幅值AMPMAX"},{"A1_平均幅值AMPVAR"},{"A1_方根幅值AQMAX"},{"A1_偏态Cs"},{"A1_峰态Ce"},{"A1_波形K"},{"A1_脉冲I"},{"A1_峰值C"},{"A1_裕度L"},{"A1_FFT"},{"A1_1xFFT"},{"A1_2xFFT"},{"A1_3xFFT"},{"A1_1xFA"},{"A1_2xFA"},{"A1_3xFA"},{"A1_1xF"},{"A1_2xF"},{"A1_3xF"},{"A1_1xFRMS"},{"A1_2xFRMS"},{"A1_3xFRMS"}},\
	                                 {{"A2_Tnum"},{"A2_ALLnum"},{"A2_DATA"},{"A2_平均值AVE"}, {"A2_均方差RM"}, {"A2_有效值RMS"},{"A2_方差VAR"}, {"A2_标准差STDEV"},{"A2_偏度SKEW"},{"A2_峭度QURT"},{"A2_最大幅值AMPMAX"},{"A2_平均幅值AMPVAR"},{"A2_方根幅值AQMAX"},{"A2_偏态Cs"},{"A2_峰态Ce"},{"A2_波形K"},{"A2_脉冲I"},{"A2_峰值C"},{"A2_裕度L"},{"A2_FFT"},{"A2_1xFFT"},{"A2_2xFFT"},{"A2_3xFFT"},{"A2_1xFA"},{"A2_2xFA"},{"A2_3xFA"},{"A2_1xF"},{"A2_2xF"},{"A2_3xF"},{"A2_1xFRMS"},{"A2_2xFRMS"},{"A2_3xFRMS"}},\
                                     {{"A3_Tnum"},{"A3_ALLnum"},{"A3_DATA"},{"A3_平均值AVE"}, {"A3_均方差RM"}, {"A3_有效值RMS"},{"A3_方差VAR"}, {"A3_标准差STDEV"},{"A3_偏度SKEW"},{"A3_峭度QURT"},{"A3_最大幅值AMPMAX"},{"A3_平均幅值AMPVAR"},{"A3_方根幅值AQMAX"},{"A3_偏态Cs"},{"A3_峰态Ce"},{"A3_波形K"},{"A3_脉冲I"},{"A3_峰值C"},{"A3_裕度L"},{"A3_FFT"},{"A3_1xFFT"},{"A3_2xFFT"},{"A3_3xFFT"},{"A3_1xFA"},{"A3_2xFA"},{"A3_3xFA"},{"A3_1xF"},{"A3_2xF"},{"A3_3xF"},{"A3_1xFRMS"},{"A3_2xFRMS"},{"A3_3xFRMS"}},\
									 {{"A4_Tnum"},{"A4_ALLnum"},{"A4_DATA"},{"A4_平均值AVE"}, {"A4_均方差RM"}, {"A4_有效值RMS"},{"A4_方差VAR"}, {"A4_标准差STDEV"},{"A4_偏度SKEW"},{"A4_峭度QURT"},{"A4_最大幅值AMPMAX"},{"A4_平均幅值AMPVAR"},{"A4_方根幅值AQMAX"},{"A4_偏态Cs"},{"A4_峰态Ce"},{"A4_波形K"},{"A4_脉冲I"},{"A4_峰值C"},{"A4_裕度L"},{"A4_FFT"},{"A4_1xFFT"},{"A4_2xFFT"},{"A4_3xFFT"},{"A4_1xFA"},{"A4_2xFA"},{"A4_3xFA"},{"A4_1xF"},{"A4_2xF"},{"A4_3xF"},{"A4_1xFRMS"},{"A4_2xFRMS"},{"A4_3xFRMS"}},\
									 {{"A5_Tnum"},{"A5_ALLnum"},{"A5_DATA"},{"A5_平均值AVE"}, {"A5_均方差RM"}, {"A5_有效值RMS"},{"A5_方差VAR"}, {"A5_标准差STDEV"},{"A5_偏度SKEW"},{"A5_峭度QURT"},{"A5_最大幅值AMPMAX"},{"A5_平均幅值AMPVAR"},{"A5_方根幅值AQMAX"},{"A5_偏态Cs"},{"A5_峰态Ce"},{"A5_波形K"},{"A5_脉冲I"},{"A5_峰值C"},{"A5_裕度L"},{"A5_FFT"},{"A5_1xFFT"},{"A5_2xFFT"},{"A5_3xFFT"},{"A5_1xFA"},{"A5_2xFA"},{"A5_3xFA"},{"A5_1xF"},{"A5_2xF"},{"A5_3xF"},{"A5_1xFRMS"},{"A5_2xFRMS"},{"A5_3xFRMS"}},\
									 {{"A6_Tnum"},{"A6_ALLnum"},{"A6_DATA"},{"A6_平均值AVE"}, {"A6_均方差RM"}, {"A6_有效值RMS"},{"A6_方差VAR"}, {"A6_标准差STDEV"},{"A6_偏度SKEW"},{"A6_峭度QURT"},{"A6_最大幅值AMPMAX"},{"A6_平均幅值AMPVAR"},{"A6_方根幅值AQMAX"},{"A6_偏态Cs"},{"A6_峰态Ce"},{"A6_波形K"},{"A6_脉冲I"},{"A6_峰值C"},{"A6_裕度L"},{"A6_FFT"},{"A6_1xFFT"},{"A6_2xFFT"},{"A6_3xFFT"},{"A6_1xFA"},{"A6_2xFA"},{"A6_3xFA"},{"A6_1xF"},{"A6_2xF"},{"A6_3xF"},{"A6_1xFRMS"},{"A6_2xFRMS"},{"A6_3xFRMS"}},\
									 {{"A7_Tnum"},{"A7_ALLnum"},{"A7_DATA"},{"A7_平均值AVE"}, {"A7_均方差RM"}, {"A7_有效值RMS"},{"A7_方差VAR"}, {"A7_标准差STDEV"},{"A7_偏度SKEW"},{"A7_峭度QURT"},{"A7_最大幅值AMPMAX"},{"A7_平均幅值AMPVAR"},{"A7_方根幅值AQMAX"},{"A7_偏态Cs"},{"A7_峰态Ce"},{"A7_波形K"},{"A7_脉冲I"},{"A7_峰值C"},{"A7_裕度L"},{"A7_FFT"},{"A7_1xFFT"},{"A7_2xFFT"},{"A7_3xFFT"},{"A7_1xFA"},{"A7_2xFA"},{"A7_3xFA"},{"A7_1xF"},{"A7_2xF"},{"A7_3xF"},{"A7_1xFRMS"},{"A7_2xFRMS"},{"A7_3xFRMS"}},\
									 {{"A8_Tnum"},{"A8_ALLnum"},{"A8_DATA"},{"A8_平均值AVE"}, {"A8_均方差RM"}, {"A8_有效值RMS"},{"A8_方差VAR"}, {"A8_标准差STDEV"},{"A8_偏度SKEW"},{"A8_峭度QURT"},{"A8_最大幅值AMPMAX"},{"A8_平均幅值AMPVAR"},{"A8_方根幅值AQMAX"},{"A8_偏态Cs"},{"A8_峰态Ce"},{"A8_波形K"},{"A8_脉冲I"},{"A8_峰值C"},{"A8_裕度L"},{"A8_FFT"},{"A8_1xFFT"},{"A8_2xFFT"},{"A8_3xFFT"},{"A8_1xFA"},{"A8_2xFA"},{"A8_3xFA"},{"A8_1xF"},{"A8_2xF"},{"A8_3xF"},{"A8_1xFRMS"},{"A8_2xFRMS"},{"A8_3xFRMS"}},\
									 {{"B1_Tnum"},{"B1_ALLnum"},{"B1_DATA"},{"B1_平均值AVE"}, {"B1_均方差RM"}, {"B1_有效值RMS"},{"B1_方差VAR"}, {"B1_标准差STDEV"},{"B1_偏度SKEW"},{"B1_峭度QURT"},{"B1_最大幅值AMPMAX"},{"B1_平均幅值AMPVAR"},{"B1_方根幅值AQMAX"},{"B1_偏态Cs"},{"B1_峰态Ce"},{"B1_波形K"},{"B1_脉冲I"},{"B1_峰值C"},{"B1_裕度L"},{"B1_FFT"},{"B1_1xFFT"},{"B1_2xFFT"},{"B1_3xFFT"},{"B1_1xFA"},{"B1_2xFA"},{"B1_3xFA"},{"B1_1xF"},{"B1_2xF"},{"B1_3xF"},{"B1_1xFRMS"},{"B1_2xFRMS"},{"B1_3xFRMS"}},\
									 {{"B2_Tnum"},{"B3_ALLnum"},{"B2_DATA"},{"B2_平均值AVE"},{"B2_均方差RM"}, {"B2_有效值RMS"},{"B2_方差VAR"}, {"B2_标准差STDEV"},{"B2_偏度SKEW"},{"B2_峭度QURT"},{"B2_最大幅值AMPMAX"},{"B2_平均幅值AMPVAR"},{"B2_方根幅值AQMAX"},{"B2_偏态Cs"},{"B2_峰态Ce"},{"B2_波形K"},{"B2_脉冲I"},{"B2_峰值C"},{"B2_裕度L"},{"B2_FFT"},{"B2_1xFFT"},{"B2_2xFFT"},{"B2_3xFFT"},{"B2_1xFA"},{"B2_2xFA"},{"B2_3xFA"},{"B2_1xF"},{"B2_2xF"},{"B2_3xF"},{"B2_1xFRMS"},{"B2_2xFRMS"},{"B2_3xFRMS"}},\
									 {{"B3_Tnum"},{"B3_ALLnum"},{"B3_DATA"},{"B3_平均值AVE"}, {"B3_均方差RM"}, {"B3_有效值RMS"},{"B3_方差VAR"}, {"B3_标准差STDEV"},{"B3_偏度SKEW"},{"B3_峭度QURT"},{"B3_最大幅值AMPMAX"},{"B3_平均幅值AMPVAR"},{"B3_方根幅值AQMAX"},{"B3_偏态Cs"},{"B3_峰态Ce"},{"B3_波形K"},{"B3_脉冲I"},{"B3_峰值C"},{"B3_裕度L"},{"B3_FFT"},{"B3_1xFFT"},{"B3_2xFFT"},{"B3_3xFFT"},{"B3_1xFA"},{"B3_2xFA"},{"B3_3xFA"},{"B3_1xF"},{"B3_2xF"},{"B3_3xF"},{"B3_1xFRMS"},{"B3_2xFRMS"},{"B3_3xFRMS"}},\
									 {{"B4_Tnum"},{"B4_ALLnum"},{"B4_DATA"},{"B4_平均值AVE"}, {"B4_均方差RM"}, {"B4_有效值RMS"},{"B4_方差VAR"}, {"B4_标准差STDEV"},{"B4_偏度SKEW"},{"B4_峭度QURT"},{"B4_最大幅值AMPMAX"},{"B4_平均幅值AMPVAR"},{"B4_方根幅值AQMAX"},{"B4_偏态Cs"},{"B4_峰态Ce"},{"B4_波形K"},{"B4_脉冲I"},{"B4_峰值C"},{"B4_裕度L"},{"B4_FFT"},{"B4_1xFFT"},{"B4_2xFFT"},{"B4_3xFFT"},{"B4_1xFA"},{"B4_2xFA"},{"B4_3xFA"},{"B4_1xF"},{"B4_2xF"},{"B4_3xF"},{"B4_1xFRMS"},{"B4_2xFRMS"},{"B4_3xFRMS"}},\
									 {{"B5_Tnum"},{"B5_ALLnum"},{"B5_DATA"},{"B5_平均值AVE"}, {"B5_均方差RM"}, {"B5_有效值RMS"},{"B5_方差VAR"}, {"B5_标准差STDEV"},{"B5_偏度SKEW"},{"B5_峭度QURT"},{"B5_最大幅值AMPMAX"},{"B5_平均幅值AMPVAR"},{"B5_方根幅值AQMAX"},{"B5_偏态Cs"},{"B5_峰态Ce"},{"B5_波形K"},{"B5_脉冲I"},{"B5_峰值C"},{"B5_裕度L"},{"B5_FFT"},{"B5_1xFFT"},{"B5_2xFFT"},{"B5_3xFFT"},{"B5_1xFA"},{"B5_2xFA"},{"B5_3xFA"},{"B5_1xF"},{"B5_2xF"},{"B5_3xF"},{"B5_1xFRMS"},{"B5_2xFRMS"},{"B5_3xFRMS"}},\
									 {{"B6_Tnum"},{"B6_ALLnum"},{"B6_DATA"},{"B6_平均值AVE"}, {"B6_均方差RM"}, {"B6_有效值RMS"},{"B6_方差VAR"}, {"B6_标准差STDEV"},{"B6_偏度SKEW"},{"B6_峭度QURT"},{"B6_最大幅值AMPMAX"},{"B6_平均幅值AMPVAR"},{"B6_方根幅值AQMAX"},{"B6_偏态Cs"},{"B6_峰态Ce"},{"B6_波形K"},{"B6_脉冲I"},{"B6_峰值C"},{"B6_裕度L"},{"B6_FFT"},{"B6_1xFFT"},{"B6_2xFFT"},{"B6_3xFFT"},{"B6_1xFA"},{"B6_2xFA"},{"B6_3xFA"},{"B6_1xF"},{"B6_2xF"},{"B6_3xF"},{"B6_1xFRMS"},{"B6_2xFRMS"},{"B6_3xFRMS"}},\
									 {{"B7_Tnum"},{"B7_ALLnum"},{"B7_DATA"},{"B7_平均值AVE"}, {"B7_均方差RM"}, {"B7_有效值RMS"},{"B7_方差VAR"}, {"B7_标准差STDEV"},{"B7_偏度SKEW"},{"B7_峭度QURT"},{"B7_最大幅值AMPMAX"},{"B7_平均幅值AMPVAR"},{"B7_方根幅值AQMAX"},{"B7_偏态Cs"},{"B7_峰态Ce"},{"B7_波形K"},{"B7_脉冲I"},{"B7_峰值C"},{"B7_裕度L"},{"B7_FFT"},{"B7_1xFFT"},{"B7_2xFFT"},{"B7_3xFFT"},{"B7_1xFA"},{"B7_2xFA"},{"B7_3xFA"},{"B7_1xF"},{"B7_2xF"},{"B7_3xF"},{"B7_1xFRMS"},{"B7_2xFRMS"},{"B7_3xFRMS"}},\
									 {{"B8_Tnum"},{"B8_ALLnum"},{"B8_DATA"},{"B8_平均值AVE"}, {"B8_均方差RM"}, {"B8_有效值RMS"},{"B8_方差VAR"}, {"B8_标准差STDEV"},{"B8_偏度SKEW"},{"B8_峭度QURT"},{"B8_最大幅值AMPMAX"},{"B8_平均幅值AMPVAR"},{"B8_方根幅值AQMAX"},{"B8_偏态Cs"},{"B8_峰态Ce"},{"B8_波形K"},{"B8_脉冲I"},{"B8_峰值C"},{"B8_裕度L"},{"B8_FFT"},{"B8_1xFFT"},{"B8_2xFFT"},{"B8_3xFFT"},{"B8_1xFA"},{"B8_2xFA"},{"B8_3xFA"},{"B8_1xF"},{"B8_2xF"},{"B8_3xF"},{"B8_1xFRMS"},{"B8_2xFRMS"},{"B8_3xFRMS"}},\
										//0           //1           //2          //3          //4          //5          //6          //7          //8          //9            //10        //11          //12            //13       //14    //15       //16      //17     //18        //19        //20         //21              //22     //23         //24           //25        //26       //27         //28          //29        //30            //31            

};

CVCppPluginImpl::~CVCppPluginImpl()
{
	
}
void  CVCppPluginImpl::CleanData()
{
	memset(oldBuffPos, 0, sizeof(oldBuffPos));
	memset(samplesSoFar, 0, sizeof(samplesSoFar));
	memset(m_allSamples, 0, sizeof(m_allSamples));
	memset(m_SingleSum, 0, sizeof(m_SingleSum));
	memset(m_SqSum, 0, sizeof(m_SqSum));
	memset(m_CubeSum, 0, sizeof(m_CubeSum));
	memset(m_QuadSum, 0, sizeof(m_QuadSum));
	memset(m_abxSum, 0, sizeof(m_abxSum));
	memset(m_sqabSum, 0, sizeof(m_sqabSum));
	memset(m_Amax, 0, sizeof(m_Amax));
	memset(samplesSoFar, 0, sizeof(samplesSoFar));
	memset(xreal, 0, sizeof(xreal));
	memset(ximag, 0, sizeof(ximag));
	memset(wreal, 0, sizeof(wreal));
	memset(wimag, 0, sizeof(wimag));
	memset(numfftsample, 0, sizeof(numfftsample));
	memset(m_bClear,FALSE, sizeof(m_bClear));
	memset(m_bStart,FALSE, sizeof(m_bStart));
	memset(m_FFTsum,0,sizeof(m_FFTsum));
	memset(m_numTtrig,0,sizeof(m_numTtrig));
	memset(m_numALLtrig,0,sizeof(m_numALLtrig));
	memset(m_lNowNum,0,sizeof(m_lNowNum));//
	memset(m_StoreCountEx,0,sizeof(m_StoreCountEx));
	memset(m_bNret,FALSE,sizeof(m_bNret));
	memset(m_bStop,FALSE,sizeof(m_bStop));
	m_bFirst=FALSE;
	m_bAmple=FALSE;
	m_bClearEnter=FALSE;
	m_bCnt=TRUE;
	m_CntSum=0;
	m_StoreCount=0;	
	m_ave_fval=0;
	m_CntValue=0;
	m_fBasefre=0;
	DN=0;
}
void  CVCppPluginImpl::FFTInit()
{
	float arg = - 2 * PI / N;
	float treal = cos (arg);
	float timag = sin (arg);
	wreal [0] = 1.0;
	wimag [0] = 0.0;
	for (int j = 1; j < N/ 2; j ++)
	{
		wreal [j] = wreal [j - 1] * treal - wimag [j - 1] * timag;
		wimag [j] = wreal [j - 1] * timag + wimag [j - 1] * treal;
	}
}
void  CVCppPluginImpl::FFTInit50()
{
	float arg = - 2 * PI / N0;
	float treal = cos (arg);
	float timag = sin (arg);
	wreal [0] = 1.0;
	wimag [0] = 0.0;
	for (int j = 1; j < N0/ 2; j ++)
	{
		wreal [j] = wreal [j - 1] * treal - wimag [j - 1] * timag;
		wimag [j] = wreal [j - 1] * timag + wimag [j - 1] * treal;
	}
}
HRESULT CVCppPluginImpl::Initiate(IApp * DeweApp)
{
	app=DeweApp;
	return S_OK;
}
HRESULT CVCppPluginImpl::get_Used(VARIANT_BOOL * Value)
{
	*Value = used;
	return S_OK;
}
HRESULT CVCppPluginImpl::put_Used(VARIANT_BOOL Value)
{
	used = Value;
	return S_OK;
}
HRESULT CVCppPluginImpl::Configure()
{
	return S_FALSE;
}
HRESULT CVCppPluginImpl::ShowFrame(long Parent, VARIANT_BOOL * Value)
{
	setupUserControl = gcnew SetupUserControl();
	setupUserControl->BackColor = System::Drawing::Color::FromArgb(0xD1, 0xD7, 0xE2);
	SetParent(static_cast<HWND>(setupUserControl->Handle.ToPointer()), HWND(Parent));
	setupUserControl->plugin = const_cast<CVCppPluginImpl*>(this);
	setupUserControl->Initiate();
	setupUserControl->Show();
	setupUserControl->Location.X = 100;
	setupUserControl->Location.Y = 100;

	*Value = TRUE;
	return S_OK;
}
HRESULT CVCppPluginImpl::HideFrame()
{
	try
	{
	setupUserControl->Visible = false;
	setupUserControl = NULL;
	}
	catch(...)
	{
	}
	
	return S_OK;
}
HRESULT CVCppPluginImpl::UpdateFrame()
{
	try
	{
		setupUserControl->Initiate();
	}
	catch (...)
	{
	}
    
	return S_OK;
}
HRESULT CVCppPluginImpl::LoadSetup(VARIANT Data)
{
	MountChannels();
	MountChannelExs();
	return S_OK;
}
HRESULT CVCppPluginImpl::NewSetup()
{
	MountChannels();
	MountChannelExs();
	return S_OK;
}
VARIANT CVCppPluginImpl::AddIndexName(int *ind,long level)
{
	VARIANT Index;
	Index.vt=VT_ARRAY|VT_INT;
	SAFEARRAYBOUND rgsabound[1];
	rgsabound[0].cElements=level;
	rgsabound[0].lLbound = 0;
	Index.parray = SafeArrayCreate(VT_INT,1,rgsabound);

	void *pArrayData = NULL;    
	SafeArrayAccessData(Index.parray,&pArrayData);
	memcpy(pArrayData,ind,level*sizeof(int)); //每一个Level 数组元素个数为level个;
	SafeArrayUnaccessData(Index.parray);
	//SafeArrayDestroy(rgsabound);  
	return Index;

}
void CVCppPluginImpl::MountChannels()
{
	IData* data;
	IChannelGroups* groups;
	IChannelGroup* group;
	IPluginGroup* pluginGroup;

	app->get_Data(&data);
	data->get_Groups(&groups);
	groups->get_Item(8, &group);
	group->QueryInterface(IID_IPluginGroup, (void **) &pluginGroup);

	OLECHAR* tmp;
	StringFromCLSID(CLSID_VCppPluginImpl, &tmp);
	BSTR bstrGuid = SysAllocString(tmp);
	int  ind[4]={0};
	for(int i=0;i<CHANNELNUM;i++)
	{
		ind[0]=i;
		VARIANT Index1;
		Index1.vt=VT_ARRAY|VT_INT;
		Index1=AddIndexName(ind,1);
		BSTR s = _com_util::ConvertStringToBSTR(g_strName[i]);
		pluginGroup->AddIndexNameEx(bstrGuid,1,Index1,s);
		for(int j=0;j<20;j++)
		{
			ind[1]=j; 
			VARIANT Index2; 
			Index2.vt=VT_ARRAY|VT_INT; 
			Index2=AddIndexName(ind,2); 
			BSTR ss = _com_util::ConvertStringToBSTR(s_strName[i][j]);
			pluginGroup->AddIndexNameEx(bstrGuid,2,Index2,ss);
			if(j==19)
			{
					ind[2]=0;
					VARIANT Index3; 
					Index3.vt=VT_ARRAY|VT_INT; 
					Index3=AddIndexName(ind,3);
					BSTR ss = _com_util::ConvertStringToBSTR(s_strName[i][j+1]);
					pluginGroup->AddIndexNameEx(bstrGuid,3,Index3,ss);
					for(int m=0;m<3;m++)
					{
						ind[3]=m;
						VARIANT Index4; 
						Index4.vt=VT_ARRAY|VT_INT; 
						Index4=AddIndexName(ind,4);
						BSTR ss = _com_util::ConvertStringToBSTR(s_strName[i][23+m*3]);
						pluginGroup->AddIndexNameEx(bstrGuid,4,Index4,ss);
						pluginGroup->MountChannelEx(bstrGuid,4,Index4,&m_pCh[i][19+m]);
						m_pCh[i][19+m]->put_Used(used);
						m_pCh[i][19+m]->put_Name(ss);
						m_pCh[i][19+m]->SetDataType(5);
						m_pCh[i][19+m]->SetAsync(TRUE);
						m_pCh[i][19+m]->put_ExpectedAsyncRate(1000);
						SysFreeString(ss);
					}
				SysFreeString(ss);
				continue;
			}
			pluginGroup->MountChannelEx(bstrGuid,2,Index2,&m_pCh[i][j]);
			
			m_pCh[i][j]->put_Name(ss);
			m_pCh[i][j]->SetDataType(5);		
			if(j==2)
			{
				m_pCh[i][j]->SetAsync(TRUE);
				m_pCh[i][j]->put_Used(used);
				m_pCh[i][j]->put_ExpectedAsyncRate(5000);
			}
			else
			{
				m_pCh[i][j]->put_Used(used);
				m_pCh[i][j]->SetAsync(TRUE);
				m_pCh[i][j]->put_ExpectedAsyncRate(1000);
			}
			SysFreeString(s);
		}
	}
	CoTaskMemFree(tmp);
	SysFreeString(bstrGuid);
}
void CVCppPluginImpl::MountChannelExs()
{
	IData* data;
	IChannelGroups* groups;
	IChannelGroup* group;
	IPluginGroup* pluginGroup;
	app->get_Data(&data);
	data->get_Groups(&groups);
	groups->get_Item(8, &group);
	group->QueryInterface(IID_IPluginGroup, (void **) &pluginGroup);
	OLECHAR* tmp;
	StringFromCLSID(CLSID_VCppPluginImpl, &tmp);
	BSTR bstrGuid = SysAllocString(tmp);

	int  ind[4]={0};
	for(int i=0;i<16;i++)
	{
		ind[0]=i;
		ind[1]=19; 
		for(int k=1;k<ChAllNum[i]+1;k++)
		{
			ind[2]=k;
			VARIANT Index3; 
			Index3.vt=VT_ARRAY|VT_INT; 
			Index3=AddIndexName(ind,3);
			//BSTR ss = _com_util::ConvertStringToBSTR(m_bstr[i][k-1]);
			CComBSTR ss=m_bstr[i][k-1];
			pluginGroup->AddIndexNameEx(bstrGuid,3,Index3,ss);
			for(int m=0;m<3;m++)
			{
				ind[3]=m;
				VARIANT Index4; 
				Index4.vt=VT_ARRAY|VT_INT; 
				Index4=AddIndexName(ind,4);
				//BSTR bstr = _com_util::ConvertStringToBSTR(m_bstr[i][k-1]);
				CComBSTR bstr=m_bstr[i][k-1];
				switch(m)
				{
				case 0:bstr+="FA";break;
				case 1:bstr+="F";break;
				case 2:bstr+="FRMS";break;
				}
				pluginGroup->AddIndexNameEx(bstrGuid,4,Index4,bstr);
				pluginGroup->MountChannelEx(bstrGuid,4,Index4,&m_pCh[i][22+m+(k-1)*3]);
				m_pCh[i][22+m+(k-1)*3]->put_Used(used);
				m_pCh[i][22+m+(k-1)*3]->put_Name(bstr);
				m_pCh[i][22+m+(k-1)*3]->SetDataType(5);
				m_pCh[i][22+m+(k-1)*3]->SetAsync(TRUE);
				m_pCh[i][22+m+(k-1)*3]->put_ExpectedAsyncRate(1000);
				SysFreeString(bstr);
			}
			SysFreeString(ss);
		}
	}

	CoTaskMemFree(tmp);
	SysFreeString(bstrGuid);
}
void CVCppPluginImpl::MountAutoChannels(int chId,int idex)
{
	IData* data;
	IChannelGroups* groups;
	IChannelGroup* group;
	IPluginGroup* pluginGroup;

	app->get_Data(&data);
	data->get_Groups(&groups);
	groups->get_Item(8, &group);
	group->QueryInterface(IID_IPluginGroup, (void **) &pluginGroup);
	OLECHAR* tmp;
	StringFromCLSID(CLSID_VCppPluginImpl, &tmp);
	BSTR bstrGuid = SysAllocString(tmp);
	int  ind[4]={0};
	ind[0]=chId;
	ind[1]=19; 
	ind[2]=idex+1;
	VARIANT Index3; 
	Index3.vt=VT_ARRAY|VT_INT; 
	Index3=AddIndexName(ind,3);
	//BSTR bstr = _com_util::ConvertStringToBSTR(m_bstr[chId][idex]);
	CComBSTR bstr=m_bstr[chId][idex];
	pluginGroup->AddIndexNameEx(bstrGuid,3,Index3,bstr);
	SysFreeString(bstr);
	CoTaskMemFree(tmp);
	SysFreeString(bstrGuid);
}
void CVCppPluginImpl::DeleMountChannels()
{
	IData* data;
	IChannelGroups* groups;
	IChannelGroup* group;
	IPluginGroup* pluginGroup;

	app->get_Data(&data);
	data->get_Groups(&groups);
	groups->get_Item(8, &group);
	group->QueryInterface(IID_IPluginGroup, (void **) &pluginGroup);
	OLECHAR* tmp;
	StringFromCLSID(CLSID_VCppPluginImpl, &tmp);
	BSTR bstrGuid = SysAllocString(tmp);
	pluginGroup->ClearAllChannels();
	CoTaskMemFree(tmp);
	SysFreeString(bstrGuid);
}
bool CVCppPluginImpl::GetCNTChannel(IData* pData)
{
	if(pData == NULL) return false;

	IChannelList* pList;
	pData->BuildChannelList();
	pData->get_UsedChannels(&pList);

	pData->get_SampleRate(&m_sampleRate);


	long numUsed = 0;
	pList->get_Count(&numUsed);

	for(int i = 0;i<numUsed; ++i)
	{
		IChannel* tmpch;
		pList->get_Item(i,&tmpch);

		BSTR bstr;
		tmpch->get_Name(&bstr);
		CString strName = bstr;
		if(strName=="Counter")
		{
			pList->get_Item(i,&m_pCntCh);
			SysFreeString(bstr);
			return true;
		}
		SysFreeString(bstr);
	}
	return false;
}
int CVCppPluginImpl ::GetAllCounterChannel()
{
	//获取Counter通道，并返回Counter通道的数量;
	IData         * data;
	IChannelList  * pList;
	long          numUsed = 0,cnt=0;
	app->get_Data(&data);
	data->BuildChannelList();
	data->get_UsedChannels(&pList);
	data->get_SampleRate(&m_sampleRate);
	pList->get_Count(&numUsed);
	for(int i=0;i<numUsed;++i)
	{
		IChannel* tmpch;
		BSTR bstr;		
		pList->get_Item(i,&tmpch);
		tmpch->get_Name(&bstr);
		CString strName = bstr;
		if(strName.Find(L"CNT")!=-1)
		{
			pList->get_Item(i,&m_pChCounter[cnt++]);
		}
		SysFreeString(bstr);
	}
	return cnt;
}
bool CVCppPluginImpl::GetPsTrigChannel(IData* pData)
{
	if(pData == NULL) return false;

	IChannelList* pList;
	pData->BuildChannelList();
	pData->get_UsedChannels(&pList);
	long numUsed = 0;
	pList->get_Count(&numUsed);

	for(int i = numUsed - 1;i >= 0; --i)
	{
		IChannel* tmpch;
		pList->get_Item(i,&tmpch);

		BSTR bstr;
		tmpch->get_Name(&bstr);
		CString strName = bstr;
		if(strName=="PsTrig")
		{
			pList->get_Item(i,&m_pPsTrig);
			SysFreeString(bstr);
			return true;
		}
		SysFreeString(bstr);
	}
	return false;
}
bool CVCppPluginImpl::GetTrigChannel(IData* pData)
{
	if(pData == NULL) return false;

	IChannelList* pList;
	pData->BuildChannelList();
	pData->get_UsedChannels(&pList);
	long numUsed = 0;
	pList->get_Count(&numUsed);

	for(int i = numUsed - 1;i >= 0; --i)
	{
		IChannel* tmpch;
		pList->get_Item(i,&tmpch);

		BSTR bstr;
		tmpch->get_Name(&bstr);
		CString strName = bstr;
		if(strName=="trig")
		{
			pList->get_Item(i,&m_pTrig);
			SysFreeString(bstr);
			return true;
		}
		SysFreeString(bstr);
	}
	return false;
}
bool CVCppPluginImpl::IsPsTrig()
{
	if(m_pPsTrig == NULL) return false;
	float fValue=0.0; 
	long  lPos;
	m_pPsTrig->get_DBPos(&lPos);
	if(lPos==0)
	{
		long DBbuffSize=0;
		m_pPsTrig->get_DBBufSize(&DBbuffSize);
		lPos=DBbuffSize;
	}
	m_pPsTrig->get_DBValues(lPos-1, &fValue);
	if(0.9999<= fValue && fValue <=1.0001)
	{ 
		if(m_bCnt&&!m_bFirst)
		{
			 m_bClearEnter=TRUE;
		}
		m_bFirst=TRUE;
		return TRUE;
	}
	else
	{
		 m_bFirst=FALSE;
		return FALSE;
	}
}
bool CVCppPluginImpl::IsTrig()
{
	    if(m_pTrig == NULL) return false;
	    float fValue=0.0; 
        long  lPos;
	    m_pTrig->get_DBPos(&lPos);
		if(lPos==0)
		   {
			   long DBbuffSize=0;
				m_pTrig->get_DBBufSize(&DBbuffSize);
				lPos=DBbuffSize;
		    }
	    m_pTrig->get_DBValues(lPos-1, &fValue);
		if(0.9999<= fValue && fValue <=1.0001)
		{ 
			if(!m_bCnt)
			{
				m_bCnt=TRUE;
				++m_StoreCount;
			}
			return TRUE;
		}
		else
		{
			m_bCnt=FALSE;
			if(m_StoreCount>=m_iSignalOutPoint)m_StoreCount=0;
			return FALSE;
		}
}

void CVCppPluginImpl::StoreValue(int chId, float val)
{       
	    double ts =(samplesSoFar[chId]-1)/(double)m_sampleRate;
        bool bPstrig=IsPsTrig();//峰值触发
        if(bPstrig)
		{	
			if(m_bClearEnter&&!m_bClear[chId])           //进入峰值触发时在取数周期内 ，先结算之前的数据;
			{
				m_bClear[chId]=TRUE;
				OnPutData(chId);
			    MyFFT(xreal[chId],ximag,numfftsample[chId],chId);
			}
			    Calculate(chId ,val);
				float fval=0.0;
				{
					long lPos;
					m_pChCounter[m_CounterIndex[chId]]->get_DBPos(&lPos);
					if(lPos==0)
					{ long DBBuffSize;
					m_pChCounter[m_CounterIndex[chId]]->get_DBBufSize(&DBBuffSize);
					lPos=DBBuffSize;
					}
					m_pChCounter[m_CounterIndex[chId]]->get_DBValues(lPos-1,&fval);
				}
				if(!m_bNret[chId])
				{
					m_bNret[chId]=TRUE;
					if(fval<=100.0)
						DN=N1;
					if(100.0<fval&&fval<=1300.0)
						DN=N2;
					if(1300.0<fval)
						DN=N3;
				}
				if(numfftsample[chId]<DN)
				{
					xreal[chId][numfftsample[chId]++]=val;
					if(!m_bStop[chId])
						m_bStart[chId]=TRUE;					
					if(numfftsample[chId]>=DN)
					{
						m_CntValue=fval;
						m_bStop[chId]=TRUE; //开始峰值触发计算标志;
					}
					m_pCh[chId][2]->AddAsyncSingleSample(val,ts);
				}
		 }
		 else 
		  {
			  m_bClear[chId]=FALSE;
			  m_bClearEnter=FALSE;
		  }
	    if(!bPstrig&&IsTrig())
		{
			 Calculate(chId ,val);
			 float fval=0.0;
			 if(!m_bNret[chId])
			 {		//读取转速;		
					  {
						  long lPos;
						  m_pChCounter[m_CounterIndex[chId]]->get_DBPos(&lPos);
						  if(lPos==0)
						  { 
							  long DBBuffSize;
							  m_pChCounter[m_CounterIndex[chId]]->get_DBBufSize(&DBBuffSize);
							  lPos=DBBuffSize;
						  }
						  m_pChCounter[m_CounterIndex[chId]]->get_DBValues(lPos-1,&fval);
						  m_CntValue=(double)fval;
					  }
				      m_bNret[chId]=TRUE;
					  if(fval<=100.0)
						  DN=N1;
					  if(100.0<fval&&fval<=1300.0)
					      DN=N2;
					  if(1300.0<fval)
					      DN=N3;
			}
		    if(numfftsample[chId]<DN)
			{
			  if(!m_bStop[chId])  //
					m_bStart[chId]=TRUE;
			  xreal[chId][numfftsample[chId]++]=val;			 
			}
			if(m_StoreCount==m_iSignalOutPoint)
				m_pCh[chId][2]->AddAsyncSingleSample(val,ts);
		}
}
void CVCppPluginImpl::StoreValue_Ex(int chId,float val)
{
	double ts =(samplesSoFar[chId]-1)/(double)m_sampleRate;
	Calculate(chId ,val);
	float fval=0.0;
	if(!m_bNret[chId]) //每个通道都得记录;
	{	
		m_bNret[chId]=TRUE;
		{
			long lPos;
			m_pChCounter[m_CounterIndex[chId]]->get_DBPos(&lPos);
			if(lPos==0)
			{ long DBBuffSize;
			   m_pChCounter[m_CounterIndex[chId]]->get_DBBufSize(&DBBuffSize);
			   lPos=DBBuffSize;
			}
			m_pChCounter[m_CounterIndex[chId]]->get_DBValues(lPos-1,&fval);
		}		
		if(fval<=100.0)
			DN=N1;
		if(100.0<fval&&fval<=1300.0)
			DN=N2;
		if(1300.0<fval)
			DN=N3;	
		m_CntValue=(double)fval;
	}

	if((m_lNowNum[chId]++)<m_lPointNum)
	{					
		if(numfftsample[chId]<DN)
		{
			xreal[chId][numfftsample[chId]++]=val;
			//if(numfftsample[chId]>=DN)
			//m_CntValue=(double)fval/60;
		}
		if(m_lNowNum[chId]>=m_lPointNum)
		{
			m_bStart[chId]=TRUE;
			m_lNowNum[chId]=0;
		}
	}	
	if(m_StoreCountEx[chId]==m_iSignalOutPoint-1)
	{
		m_pCh[chId][2]->AddAsyncSingleSample(val,ts);
	}
}
HRESULT CVCppPluginImpl::OnGetData()
{
	for(int i = 0; i < numAIChannels; i++)
	{
		if (m_pAi[i] == NULL)
			continue;
		float val;
		long newBuffPos, buffSize;
		m_pAi[i]->get_DBPos(&newBuffPos);
		m_pAi[i]->get_DBBufSize(&buffSize);
		
		if (newBuffPos < oldBuffPos[i]) //ring buffer turn
		{
	    	//oldPos to end of buffer
			for (int pos = oldBuffPos[i]; pos < buffSize; pos++)
			{
				m_pAi[i]->get_DBValues(pos, &val);
				samplesSoFar[i]++;
				if(m_CountType==连续计算)
                StoreValue_Ex(i,val);
				else if(m_CountType==间隔计算)
				StoreValue(i,val);
				else StoreValue(i,val);
			}	
			// 0 to newPos
			for (int pos = 0; pos < newBuffPos; pos++)
			{
				m_pAi[i]->get_DBValues(pos, &val);
				samplesSoFar[i]++;
				if(m_CountType==连续计算)
					StoreValue_Ex(i,val);
				else if(m_CountType==间隔计算)
					StoreValue(i,val);
				else StoreValue(i,val);
			}
		}
		else
		{
			for (int pos = oldBuffPos[i]; pos < newBuffPos; pos++)
			{
				m_pAi[i]->get_DBValues(pos, &val);
				samplesSoFar[i]++;
				if(m_CountType==连续计算)
					StoreValue_Ex(i,val);
				else if(m_CountType==间隔计算)
					StoreValue(i,val);
				else StoreValue(i,val);
			}
		}	
		oldBuffPos[i] = newBuffPos;
		if(m_CountType==连续计算)
		{
			if(m_bStart[i])
			{	
				++m_numALLtrig[i];
				m_bStart[i]=FALSE;
			    if(++m_StoreCountEx[i]==m_iSignalOutPoint)m_StoreCountEx[i]=0;
				OnPutData(i);
				MyFFT(xreal[i],ximag,numfftsample[i],i);
			}
			else  m_bNret[i]=FALSE;						
			continue;
		}
		if(m_CountType==间隔计算)
		{
			if(m_bStop[i])//峰值触发计算;
			{
				if(m_bStart[i])
				{
					++m_numALLtrig[i];
					m_bStart[i]=FALSE;
					OnPutData(i);
					MyFFT(xreal[i],ximag,numfftsample[i],i);
				}
				else m_bNret[i]=FALSE;
				m_bStop[i]=FALSE;
				continue; //IsPsTrig()变为0，!IsTrig()&&!IsPsTrig()为真 会多输出一次数值，直接跳出本次循环。
			}			
			if(!IsTrig()&&!IsPsTrig())//时间触发计算;
			{
				if(m_bStart[i])
				{
					++m_numTtrig[i];
					++m_numALLtrig[i];
					m_bStart[i]=FALSE;
					OnPutData(i);
					MyFFT(xreal[i],ximag,numfftsample[i],i);		
				}
				else m_bNret[i]=FALSE;
			}
		}	
	}
	return S_OK;
}
HRESULT CVCppPluginImpl::ClearChannelsInstance()
{
	memset(m_pAi, NULL, sizeof(m_pAi));
	memset(m_pCh, NULL, sizeof(m_pCh));	
	m_pTrig = NULL;
	m_pPsTrig= NULL;
	for(int i=0;i<4;i++)
	m_pChCounter[i] =NULL;
	return S_OK;
}
void CVCppPluginImpl::Time_Calculate()
{
	//根据采样率计算限定时间m_fPointTime 采集的样本数量;
	m_lPointNum=m_sampleRate*m_fPointTime;
	if(m_lPointNum<=N1)
	{
		m_lPointNum=N1;
		m_fPointTime=(double) m_lPointNum/m_sampleRate;
	}
}
void CVCppPluginImpl::Calculate(int chId ,float val)
{
	//记录新的样本进入运算公式;
	++m_allSamples[chId];
	float tmax=0.0;
	tmax=abs(val);
	m_abxSum[chId]+=tmax; 
	m_sqabSum[chId]+=sqrt(tmax);
	if(tmax>m_Amax[chId]) 
		m_Amax[chId]=tmax;
	m_SingleSum[chId]=m_SingleSum[chId]+val;
	m_SqSum[chId]+=val*val;
	m_CubeSum[chId]+=val*val*val;
	m_QuadSum[chId]+=val*val*val*val;
}
void CVCppPluginImpl::OnPutData(int chId)
{
	//根据已存储得数据计算最后结果 并输出到通道中去;
	if(m_allSamples[chId]<1)
		return;
	double ts =(samplesSoFar[chId]-1)/(double)m_sampleRate;
	m_pCh[chId][0]->AddAsyncSingleSample(m_numTtrig[chId],ts);
	m_pCh[chId][1]->AddAsyncSingleSample(m_numALLtrig[chId],ts);

	float ave_fval=0.0;
	ave_fval=m_SingleSum[chId]/m_allSamples[chId];//pingjunzhi;
	m_ave_fval=ave_fval;
	m_pCh[chId][3]->AddAsyncSingleSample(m_ave_fval,ts);

	float rm_val=0.0;
	rm_val=m_SqSum[chId]/m_allSamples[chId];//junfangcha;
	m_pCh[chId][4]->AddAsyncSingleSample(rm_val,ts);

	float RMS_fval=0.0;
	RMS_fval=sqrt(rm_val);             //youxiaozhi;
	m_pCh[chId][5]->AddAsyncSingleSample(RMS_fval,ts);

	float var_fval=0.0;
	var_fval=rm_val-ave_fval*ave_fval;//fancha;
	m_pCh[chId][6]->AddAsyncSingleSample(var_fval,ts);

	float Std_fval=0.0;
	if(var_fval>0.0001)
		Std_fval=sqrt(var_fval);            //biaozhuncha;
	m_pCh[chId][7]->AddAsyncSingleSample(Std_fval,ts);

	float cube_val=0.0;
	cube_val=m_CubeSum[chId]/m_allSamples[chId];

	float ske_fval=0.0;
	ske_fval=cube_val-3*rm_val*ave_fval+2*ave_fval*ave_fval*ave_fval;
	m_pCh[chId][8]->AddAsyncSingleSample(ske_fval,ts);//piandu;

	float qu_fval=0.0;
	qu_fval=m_QuadSum[chId]/m_allSamples[chId]-4*ave_fval*cube_val+2*ave_fval*rm_val-3*ave_fval;
	m_pCh[chId][9]->AddAsyncSingleSample(qu_fval,ts);//qiaodu;

	float A_fval=0.0;
	A_fval=m_Amax[chId];
	m_pCh[chId][10]->AddAsyncSingleSample(A_fval,ts);//AMAX;

	float Xp_fval=0.0;
	Xp_fval=m_abxSum[chId]/m_allSamples[chId];
	m_pCh[chId][11]->AddAsyncSingleSample(Xp_fval,ts);//ABS pingjunfuzhi;

	float fval=0.0;
	fval=m_sqabSum[chId]/m_allSamples[chId];

	float Xr_fval=0.0;
	Xr_fval=fval*fval;
	m_pCh[chId][12]->AddAsyncSingleSample(Xr_fval,ts);//AQRTABS;

	float Cs_fval=0.0;
	if(Std_fval>0.0001)
		Cs_fval=ske_fval/(Std_fval*Std_fval*Std_fval);
	m_pCh[chId][13]->AddAsyncSingleSample(Cs_fval,ts);//Cspiantaiyinshu;

	float  Co_fval=0.0;
	if(var_fval>0.0001)
		Co_fval=qu_fval/(var_fval*var_fval)-3;
	m_pCh[chId][14]->AddAsyncSingleSample(Co_fval,ts);//fengtaiyinshu;

	float  K_fval=0.0;
	if(Xp_fval>0.0001)
		K_fval=RMS_fval/Xp_fval;
	m_pCh[chId][15]->AddAsyncSingleSample(K_fval,ts);//boxingyinshu;

	float  I_fval=0.0;
	if(Xp_fval>0.0001)
		I_fval=A_fval/Xp_fval;
	m_pCh[chId][16]->AddAsyncSingleSample(I_fval,ts);//maichong

	float  C_fval=0.0;
	if(RMS_fval>0.0001)
		C_fval=A_fval/RMS_fval;
	m_pCh[chId][17]->AddAsyncSingleSample(C_fval,ts);

	float  L_fval=0.0;
	if(Xr_fval>0.0001)
		L_fval=A_fval/Xr_fval;
	m_pCh[chId][18]->AddAsyncSingleSample(L_fval,ts);

	m_SingleSum[chId]=0;
	m_SqSum[chId]=0;
	m_CubeSum[chId]=0;
	m_QuadSum[chId]=0;
	m_sqabSum[chId]=0;
	m_Amax[chId]=0;
	m_abxSum[chId]=0;
	m_allSamples[chId]=0;
}
void CVCppPluginImpl::MyFFT(float *data1,float *data2,int n,int chId)
{
	// 快速傅立叶变换，将复数 x 变换后仍保存在 x 中，xreal, ximag 分别是 x 的实部和虚部
	if(n < 1) return;
	float treal = 0.0, timag = 0.0, ureal = 0.0, uimag = 0.0;
	long m, k, j, t=0, index1=0, index2=0;
	long LN=0,LN0=0;;

	//if(n<N1)                       //取数小于N1个需要重新计算，n需为2的整次幂。
	//{
	//	int nCount = 0;
	//	while (n > 1)
	//	{
	//		n=n >> 1;
	//		nCount++;
	//	}
	//	n = 1 << nCount;  //n要为2的整数幂
	//}
	if(m_CntValue<0.01)m_CntValue=0;
	if(m_CntValue<=50.0)
	{
		FFTInit50();
		LN=N0;
	}
	else 
	{
		FFTInit();
		LN=N;
	}
	m_fBasefre=m_sampleRate/(double)LN;
	float fnum=(float)(m_CntValue)/(double)m_fBasefre;
	MySwap (data1,data2,LN,chId);
	 //计算 1 的前 n / 2 个 n 次方根的共轭复数 W'j = hData1 [j] + i * hData2 [j] , j = 0, 1, , n / 2 - 1
	for (m = 2; m <= LN; m *= 2)
	{	
		for (k = 0; k <LN; k += m)
		{
			for (j = 0; j < m / 2; j ++)
			{
				index1 = k + j;
				index2 = index1 + m / 2;
				t = LN * j / m; // 旋转因子 w 的实部在 hData1 [] 中的下标为 t
				treal =  wreal [t] * data1[index2]- wimag [t] * data2 [index2];
				timag =  wreal [t] * data2 [index2] + wimag [t] * data1 [index2];
				ureal = data1[index1];
				uimag = data2[index1];
				data1 [index1] = ureal + treal;
				data2 [index1] = uimag + timag;
				data1 [index2] = ureal - treal;
				data2 [index2] = uimag - timag;
			}
		}		
	}

	   {//得到需要的数值
		    double ts =(samplesSoFar[chId]-1)/(double)m_sampleRate;
		    
			{//yibeipin;
				float val=0.0;
				int ind=0;
				long indexnum=(long)(fnum+0.5);
				if(indexnum<0)indexnum=0;
				long lindex=0;
				lindex=indexnum;
				val=sqrt(data1[indexnum]*data1[indexnum]+data2 [indexnum]*data2 [indexnum]);
				float fval=val/(n/2);
				m_pCh[chId][19+(ind++)]->AddAsyncSingleSample(fval,ts);
				float ffvalue=0.0;
			    ffvalue=lindex*m_fBasefre;
				m_pCh[chId][19+(ind++)]->AddAsyncSingleSample(ffvalue,ts);
				float ValRMS=fval/(double)sqrt(2.0);
				m_pCh[chId][19+(ind++)]->AddAsyncSingleSample(ValRMS,ts);
		   }
			if(ChAllNum[chId]>0)
			{   				
				for(int i=0;i<ChAllNum[chId];i++)
				{   
					long MaxNum=0;float val=0.0;
					int iCreat=0;float ValRMS=0.0;
					//if(signalType[chId][i]==固有频率)
					{  
						if(m_Exfremult[chId][i]>0)//在被动范围内，寻找最大值；
						{
						   long fMultStart=0;long fMultStop=0;
						   fMultStart=(long)(m_freqmult[chId][i]-m_Exfremult[chId][i])/(double)m_fBasefre;
						   fMultStop=(long)(m_freqmult[chId][i]+m_Exfremult[chId][i])/(double)m_fBasefre;
						   for(int j=fMultStart;j<=fMultStop;j++)
						   {   
							   float tempval=sqrt(data1[j]*data1[j]+data2 [j]*data2 [j]);
							   if(tempval>val) {val=tempval;MaxNum=j;}
						   }
						}
						else 
						{   
							MaxNum=(long)m_freqmult[chId][i]/(double)m_fBasefre;
							val=sqrt(data1[MaxNum]*data1[MaxNum]+data2 [MaxNum]*data2 [MaxNum]);
						}
					}
					//else if(signalType[chId][i]==倍数频率)
					{
						MaxNum=long(m_freqmult[chId][i]*fnum+0.5);
						val=sqrt(data1[MaxNum]*data1[MaxNum]+data2 [MaxNum]*data2 [MaxNum]);
					}
					 m_pCh[chId][22+i*3+(iCreat++)]->AddAsyncSingleSample(val/(n/2),ts);
					 float ffval=0.0;
					 ffval=MaxNum*m_fBasefre;	
					 m_pCh[chId][22+i*3+(iCreat++)]->AddAsyncSingleSample(ffval,ts);
					 ValRMS=val/(n/2)/(double)sqrt(2.0);
                     m_pCh[chId][22+i*3+(iCreat++)]->AddAsyncSingleSample(ValRMS,ts);
				}
			}
		}	  
	numfftsample[chId]=0;	
	memset(xreal[chId],0, sizeof(xreal[chId]));
	memset(ximag, 0, sizeof(ximag));
	memset(wreal, 0, sizeof(wreal));
	memset(wimag, 0, sizeof(wimag));
}
void CVCppPluginImpl::MySwap(float *dat1, float *dat2,int n,int chId)
{
	// 位反转置换 Bit-reversal Permutation；	
	int i, j, a, b, p;
	for (i = 1, p = 0; i < n; i *= 2)
	{
		p++;
	}
	for (i = 0; i < n; i ++)
	{
		a = i;
		b = 0;
		for (j = 0; j < p; j ++)
		{
			b = (b << 1) + (a & 1); 
			a >>= 1;
		}
		if ( b > i)
		{
			swap (dat1 [i], dat1 [b]);
			swap (dat2 [i], dat2 [b]);
		}
	}
}

