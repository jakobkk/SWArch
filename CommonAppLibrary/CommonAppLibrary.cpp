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
