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
	op_type = op_types::none;
}

Operation::Operation(std::string op) : Operation(){
	op_type = str_to_op_type(op);
	std::cout << "[+] Creating operation: " << op << std::endl;
}

Operation::Operation(op_types op) : Operation(){
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
		tmp = op_types::none;
	}
	return tmp;
}

std::string Operation::op_type_to_string() {
	std::string str = "none";
	if (op_type == op_types::defensive) {
		str = "defensive";
	}
	else if (op_type == op_types::offensive) {
		str = "offensive";
	}
	else if (op_type == op_types::incident_response) {
		str = "incident_response";
	}
	else if (op_type == op_types::data_collection) {
		str = "data_collection";
	}
	std::cout << "[!] op type is " << str << std::endl;
	return str;
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

void Operation::set_notes(std::string incoming_notes) {
	notes = incoming_notes;
}

std::string Operation::get_notes() {
	return notes;
}

void Operation::set_adversary(std::string incoming_adversary) {
	adversary = incoming_adversary;
}

std::string Operation::get_adversary() {
	return adversary;
}

void Operation::print_info() {
	std::cout << "Operation type: " << op_type_to_string() << std::endl;
	std::cout << "Adversary: " << adversary << std::endl;
	std::cout << "Notes: " << notes << std::endl;
	generator gen;
	gen.add_messages_path(".");
	gen.add_messages_domain("example");
	std::locale::global(gen("de_DE.UTF - 8"));
	std::cout.imbue(std::locale());
	std::cout << translate("Translation in common app libraries ") << std::endl;
}

Node Operation::create_operation_node() {
	Node node = Node(this);
	return node;
}
