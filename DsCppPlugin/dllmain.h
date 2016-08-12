// dllmain.h : 模块类的声明。

class CDsCppPluginModule : public ATL::CAtlDllModuleT< CDsCppPluginModule >
{
public :
	DECLARE_LIBID(LIBID_DsCppPluginLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DSCPPPLUGIN, "{D2122616-4ED1-413D-9984-4330E4E55D13}")
};

extern class CDsCppPluginModule _AtlModule;
