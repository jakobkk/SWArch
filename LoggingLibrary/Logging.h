// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the LOGGINGLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// LOGGINGLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.

#pragma once

#ifdef LOGGINGLIBRARY_EXPORTS
#define LOGGINGLIBRARY_API __declspec(dllexport)
#else
#define LOGGINGLIBRARY_API __declspec(dllimport)
#endif

#include <string>
#include <iostream>

//// This class is exported from the dll
//class LOGGINGLIBRARY_API CLoggingLibrary {
//public:
//	CLoggingLibrary(void);
//	// TODO: add your methods here.
//};
//
//extern LOGGINGLIBRARY_API int nLoggingLibrary;
//
//LOGGINGLIBRARY_API int fnLoggingLibrary(void);

class LOGGINGLIBRARY_API Logging{
public:
	Logging();
	void log_event(std::string str);
};
