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

#include "../LoggingLibrary/LoggingLibrary.h"
#include "../PermissionsLibrary/PermissionsLibrary.h"
#include "../Core/Core.h"

enum COMMONAPPLIBRARY_API op_types { 
	defensive, 
	offensive, 
	incident_response, 
	data_collection,
	none
};

class COMMONAPPLIBRARY_API Operation
{
public:
	PermissionObject* per;
	Logging* log;

	Operation();
	Operation(std::string op);
	Operation(op_types op);
	op_types get_op_type();
	void set_op_type(std::string op);
	void set_op_type(op_types op);
	op_types str_to_op_type(std::string op);
	std::string op_type_to_string();
	void set_notes(std::string incoming_notes);
	std::string get_notes();
	void set_adversary(std::string incoming_adversary);
	std::string get_adversary();
	void print_info();

private:
	op_types op_type;
	std::string adversary;
	std::string notes;
};
