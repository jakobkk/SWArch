#pragma once

#include "CommonAppLibrary.h"

class COMMONAPPLIBRARY_API IBuilder
{
	/**
	 * Object is finished, so build the object.
	 */
	virtual void* Build();

	/**
	 * Object is finished, so build the object @see Node.
	 */
	virtual Node* BuildNode() = 0;
};
