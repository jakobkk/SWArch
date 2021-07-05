#pragma once
// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the PERMISSIONSLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// PERMISSIONSLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef PERMISSIONSLIBRARY_EXPORTS
#define PERMISSIONSLIBRARY_API __declspec(dllexport)
#else
#define PERMISSIONSLIBRARY_API __declspec(dllimport)
#endif
#include <boost/locale.hpp>
using namespace boost::locale;


// This class is exported from the dll
class PERMISSIONSLIBRARY_API CPermissionsLibrary {
public:
	CPermissionsLibrary(void);
	// TODO: add your methods here.
};

extern PERMISSIONSLIBRARY_API int nPermissionsLibrary;

PERMISSIONSLIBRARY_API int fnPermissionsLibrary(void);

class PERMISSIONSLIBRARY_API PermissionObject
{
public:
	PermissionObject();
	void Init();
	bool has_permission(int);
};

