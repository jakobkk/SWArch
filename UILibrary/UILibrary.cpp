// UILibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "UILibrary.h"
#include <iostream>


// This is an example of an exported variable
UILIBRARY_API int nUILibrary=0;

// This is an example of an exported function.
UILIBRARY_API int fnUILibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CUILibrary::CUILibrary()
{
    return;
}

UIObject::UIObject() {
	*per = PermissionObject();
	*log = Logging();
}

void UIObject::Init() {
	log->log_event("Init UIObject");
	per->Init();
}

void UIObject::StartGUI() {
	log->log_event("Start GUI");
	if (!per->has_permission(1)) {
		log->log_event("Does not have correct permissions for Start GUI");
		return;
	}
	std::cout << "Hello from start gui" << std::endl;
	generator gen;
	gen.add_messages_path(".");
	gen.add_messages_domain("messages");
	std::locale::global(gen("de_DE.UTF - 8"));
	std::cout.imbue(std::locale());
	std::cout << translate("Translation in UI libraries ") << std::endl;
	std::locale::global(gen(""));
	std::cout.imbue(std::locale());
	std::cout << translate("Translation in UI libraries ") << std::endl;
}
