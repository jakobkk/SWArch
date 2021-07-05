// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the SYSTEMSLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// SYSTEMSLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SYSTEMSLIBRARY_EXPORTS
#define SYSTEMSLIBRARY_API __declspec(dllexport)
#else
#define SYSTEMSLIBRARY_API __declspec(dllimport)
#endif

#include <iostream>
#include <boost/locale.hpp>
using namespace boost::locale;

// This class is exported from the dll
class SYSTEMSLIBRARY_API CSystemsLibrary {
public:
	CSystemsLibrary(void);
	// TODO: add your methods here.
};

extern SYSTEMSLIBRARY_API int nSystemsLibrary;

SYSTEMSLIBRARY_API int fnSystemsLibrary(void);

class SYSTEMSLIBRARY_API FakeDb {
public:
	FakeDb();
	void write_to_db(void* obj);
	std::string read_from_db();
private:
	std::string db_file;
};
