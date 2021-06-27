// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the COMMONAPPLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// COMMONAPPLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef COMMONAPPLIBRARY_EXPORTS
#define COMMONAPPLIBRARY_API __declspec(dllexport)
#else
#define COMMONAPPLIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class COMMONAPPLIBRARY_API CCommonAppLibrary {
public:
	CCommonAppLibrary(void);
	// TODO: add your methods here.
};

extern COMMONAPPLIBRARY_API int nCommonAppLibrary;

COMMONAPPLIBRARY_API int fnCommonAppLibrary(void);
