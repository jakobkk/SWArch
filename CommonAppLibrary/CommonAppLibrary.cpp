// CommonAppLibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "CommonAppLibrary.h"


// This is an example of an exported variable
COMMONAPPLIBRARY_API int nCommonAppLibrary=0;

// This is an example of an exported function.
COMMONAPPLIBRARY_API int fnCommonAppLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCommonAppLibrary::CCommonAppLibrary()
{
    return;
}

Operation::Operation() {
	*per = PermissionObject();
	*log = Logging();
}

Operation::Operation(std::string op) {
	Operation();
	op_type = str_to_op_type(op);
	std::cout << "Creating operation: " << op << std::endl;
}

Operation::Operation(op_types op) {
	Operation();
	op_type = op;
}

op_types Operation::str_to_op_type(std::string op) {
	op_types tmp;

	if (op.compare("defensive")) {
		tmp = op_types::defensive;
	}
	else if (op.compare("offensive")) {
		tmp = op_types::offensive;
	}
	else if (op.compare("incident_response")) {
		tmp = op_types::incident_response;
	}
	else if (op.compare("data_collection")) {
		tmp = op_types::data_collection;
	}
	else {
		std::cout << "Error, incorrect operation type " << op << std::endl;
	}

	return tmp;
}

op_types Operation::get_op_type() {
	return op_type;
}

void Operation::set_op_type(std::string op) {
	op_type = str_to_op_type(op);
}

void Operation::set_op_type(op_types op) {
	op_type = op;
}

