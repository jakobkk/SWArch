// LoggingLibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Logging.h"

//
//// This is an example of an exported variable
//LOGGINGLIBRARY_API int nLoggingLibrary=0;
//
//// This is an example of an exported function.
//LOGGINGLIBRARY_API int fnLoggingLibrary(void)
//{
//    return 0;
//}
//
//// This is the constructor of a class that has been exported.
//CLoggingLibrary::CLoggingLibrary()
//{
//    return;
//}

Logging::Logging() {

}

void Logging::log_event(std::string str) {
    std::string outStr = "[*] Event '" + str + "' triggered";
    std::cout << outStr << std::endl;
}
