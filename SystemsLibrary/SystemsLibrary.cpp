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
