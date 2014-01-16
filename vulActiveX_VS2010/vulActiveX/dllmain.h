// dllmain.h : Declaration of module class.

class CvulActiveXModule : public ATL::CAtlDllModuleT< CvulActiveXModule >
{
public :
	DECLARE_LIBID(LIBID_vulActiveXLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VULACTIVEX, "{7BD6CD56-1D55-40A6-AF0B-457871A4D1E3}")
};

extern class CvulActiveXModule _AtlModule;
