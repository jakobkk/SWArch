#pragma once
#include "Core.h"

class CORE_API Observer {
public:
	enum ObserverTypes
	{
		Save,
		Open,
		Close,
		Create
	};
};

