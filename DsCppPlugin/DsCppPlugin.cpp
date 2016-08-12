// DsCppPlugin.cpp : DLL 导出的实现。
#include "stdafx.h"
#include "resource.h"
#include "DsCppPlugin_i.h"
#include "dllmain.h"



#define PLUGIN_KEY "SOFTWARE\\Dewesoft\\Plugins\\DsCppPlugin"//\\Wow6432Node
using namespace ATL;
void WriteDewesoftReg()
{
		HKEY hKey;
		DWORD disposition;
		RegCreateKeyEx(HKEY_LOCAL_MACHINE, TEXT(PLUGIN_KEY), 0, NULL, REG_OPTION_NON_VOLATILE,
		KEY_ALL_ACCESS, NULL, &hKey, &disposition);
		LPCTSTR RegName = TEXT("USER");
		LPCTSTR RegVendor = TEXT("Dewesoft");
		LPCTSTR RegVersion = TEXT("1.0.0");
		LPCTSTR RegDescription = TEXT("16通道USER");
		LPOLESTR lpoleGuid;
		
		StringFromCLSID(CLSID_VCppPluginImpl, &lpoleGuid);
		DWORD supportsAnalyse = 1;
		DWORD tlb = 7;
		RegSetValueEx(hKey, TEXT("Name"), 0, REG_SZ, (LPBYTE)RegName, _tcslen(RegName) * sizeof
		(TCHAR)); 
		RegSetValueEx(hKey, TEXT("Vendor"), 0, REG_SZ, (BYTE* )RegVendor, _tcslen(RegVendor) *
			sizeof(TCHAR)); 
		RegSetValueEx(hKey, TEXT("Version"), 0, REG_SZ, (BYTE*)RegVersion, _tcslen(RegVersion) *
			sizeof(TCHAR)); 
		RegSetValueEx(hKey, TEXT("Description"), 0, REG_SZ, (BYTE*)RegDescription, _tcslen
		(RegDescription) * sizeof(TCHAR)); 
		RegSetValueEx(hKey, TEXT("GUID"), 0, REG_SZ, (BYTE*)lpoleGuid, _tcslen(lpoleGuid) *
		sizeof(TCHAR)); 
		RegSetValueEx(hKey, TEXT("SupportsAnalyse"), 0, REG_DWORD, (const BYTE*)&supportsAnalyse, sizeof(supportsAnalyse));
		RegSetValueEx(hKey, TEXT("TLB"), 0, REG_DWORD, (const BYTE*)&tlb, sizeof(tlb));
		RegCloseKey(hKey); 
}

// 用于确定 DLL 是否可由 OLE 卸载。
STDAPI DllCanUnloadNow(void)
{
	return _AtlModule.DllCanUnloadNow();
}

// 返回一个类工厂以创建所请求类型的对象。
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
	return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}
// DllRegisterServer - 在系统注册表中添加项。
STDAPI DllRegisterServer(void)
{
WriteDewesoftReg();
// registers object, typelib and all interfaces in typelib
HRESULT hr = _AtlModule.DllRegisterServer();
return hr;
}
// DllUnregisterServer - Removes entries from the system registry.
STDAPI DllUnregisterServer(void)
{
RegDeleteKey(HKEY_LOCAL_MACHINE, TEXT(PLUGIN_KEY));
HRESULT hr = _AtlModule.DllUnregisterServer();
return hr;
}


// DllInstall - 按用户和计算机在系统注册表中逐一添加/移除项。
STDAPI DllInstall(BOOL bInstall, LPCWSTR pszCmdLine)
{
	HRESULT hr = E_FAIL;
	static const wchar_t szUserSwitch[] = L"user";

	if (pszCmdLine != NULL)
	{
		if (_wcsnicmp(pszCmdLine, szUserSwitch, _countof(szUserSwitch)) == 0)
		{
			ATL::AtlSetPerUserRegistration(true);
		}
	}

	if (bInstall)
	{	
		hr = DllRegisterServer();
		if (FAILED(hr))
		{
			DllUnregisterServer();
		}
	}
	else
	{
		hr = DllUnregisterServer();
	}

	return hr;
}


