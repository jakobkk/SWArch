// PermissionsLibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "PermissionsLibrary.h"
#include <iostream>


// This is an example of an exported variable
PERMISSIONSLIBRARY_API int nPermissionsLibrary=0;

// This is an example of an exported function.
PERMISSIONSLIBRARY_API int fnPermissionsLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CPermissionsLibrary::CPermissionsLibrary()
{
    return;
}

PermissionObject::PermissionObject() {

}

void PermissionObject::Init() {

}

bool PermissionObject::has_permission(int permission) {
    bool res = true;
    if (permission > 0) {
        std::cout << "User has permission" << std::endl;
    }
    else {
        std::cout << "Not implemented yet" << std::endl;
        res = false;
    }
    return res;
}
