// APILibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "APILibrary.h"


// This is an example of an exported variable
APILIBRARY_API int nAPILibrary=0;

// This is an example of an exported function.
APILIBRARY_API int fnAPILibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CAPILibrary::CAPILibrary()
{
    return;
}

APIHandler::APIHandler() {
    *log = Logging();
    *per = PermissionObject();
    per->Init();
}

int APIHandler::HandleArgs(std::string str) {
    log->log_event("Handle args");
    if (!per->has_permission(1)) {
        log->log_event("Does not have correct permissions for handle args");
        return 1;
    }
    return 0;
}

int APIHandler::call_object(std::string type, std::string adversary) {
    log->log_event("call object");
    if (!per->has_permission(1)) {
        log->log_event("Does not have correct permissions for call object");
        return 1;
    }
    Operation* op = new Operation(type);
    op->set_adversary(adversary);
    //op->set_notes("Why is it the Russians just have to brute force passwords to gain access???");
    op->print_info();
    create_node(op);
    return 0;
}

void APIHandler::create_node(Operation* op) {
    log->log_event("create node from op");
    if (!per->has_permission(1)) {
        log->log_event("Does not have correct permissions for create node from op");
        return;
    }
    Node node = op->create_operation_node();
    node.write_to_fake_db();
    generator gen;
    gen.add_messages_path(".");
    gen.add_messages_domain("messages");
    std::locale::global(gen("de_DE.UTF - 8"));
    std::cout.imbue(std::locale());
    std::cout << translate("Translation in api (actually batch) libraries ") << std::endl;
    std::locale::global(gen(""));
    std::cout.imbue(std::locale());
    std::cout << translate("Translation in api (actually batch) libraries ") << std::endl;
}
