// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the APILIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// APILIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.

#pragma once

#ifdef APILIBRARY_EXPORTS
#define APILIBRARY_API __declspec(dllexport)
#else
#define APILIBRARY_API __declspec(dllimport)
#endif

#include "../CommonAppLibrary/Operation.h"
#include <string>
#include "../LoggingLibrary/Logging.h"
#include "../PermissionsLibrary/PermissionsLibrary.h"


//// This class is exported from the dll
//class APILIBRARY_API CAPILibrary {
//public:
//	CAPILibrary(void);
//	// TODO: add your methods here.
//};
//
//extern APILIBRARY_/*API int nAPILibrary;
//
//APILIBRARY_API int f*/nAPILibrary(void);

class APILIBRARY_API APIHandler {
public:
	PermissionObject* per;
	Logging* log;

	APIHandler();
	int HandleArgs(std::string str);
	int call_object(std::string type);
	void create_node(Operation* op);
};

