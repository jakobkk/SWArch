// LoggingLibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "LoggingLibrary.h"


// This is an example of an exported variable
LOGGINGLIBRARY_API int nLoggingLibrary=0;

// This is an example of an exported function.
LOGGINGLIBRARY_API int fnLoggingLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CLoggingLibrary::CLoggingLibrary()
{
    return;
}

Logging::Logging() {

}

void Logging::log_event(std::string str) {
    std::cout << "[*] Event '" << str << "' triggered" << std::endl;
    generator gen;
    gen.add_messages_path(".");
    gen.add_messages_domain("messages");
    std::locale::global(gen("de_DE.UTF - 8"));
    std::cout.imbue(std::locale());
    std::cout << translate("Translation in logging libraries ") << std::endl;
    std::locale::global(gen(""));
    std::cout.imbue(std::locale());
    std::cout << translate("Translation in logging libraries ") << std::endl;
}
