// SystemsLibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "SystemsLibrary.h"


// This is an example of an exported variable
SYSTEMSLIBRARY_API int nSystemsLibrary=0;

// This is an example of an exported function.
SYSTEMSLIBRARY_API int fnSystemsLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CSystemsLibrary::CSystemsLibrary()
{
    return;
}

FakeDb::FakeDb() {

}

void FakeDb::write_to_db(void* obj) {
    generator gen;
    gen.add_messages_path(".");
    gen.add_messages_domain("messages");
    std::locale::global(gen("de_DE.UTF - 8"));
    std::cout.imbue(std::locale());
    std::cout << translate("Translation in system libraries ") << std::endl;
    std::locale::global(gen(""));
    std::cout.imbue(std::locale());
    std::cout << translate("Translation in system libraries ") << std::endl;

    std::cout << "Write to db not implemented" << std::endl;
}

std::string FakeDb::read_from_db() {
    std::cout << "Read from db not implemented" << std::endl;
    return "NIY";
}
