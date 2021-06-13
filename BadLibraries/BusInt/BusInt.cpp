// BusInt.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "BusInt.h"

#include <string>
#include <iostream>

static BusinessIntelligence* theBusinessIntelligence = nullptr;

BusinessIntelligence::BusinessIntelligence()
{

}

void BusinessIntelligence::LogSomething(std::string something)
{
	std::cout << something << std::endl;
}

BusinessIntelligence* GetBusinessIntelligence()
{
	return theBusinessIntelligence;
}
