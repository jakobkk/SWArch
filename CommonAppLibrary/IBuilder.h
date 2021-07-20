#pragma once

#include "CommonAppLibrary.h"
#include "../Core/Node.h"

class COMMONAPPLIBRARY_API IBuilder
{
	/**
	 * Commit and build the object as an Operation.
	 */
	virtual Operation* BuildOperation();

	/**
	 * Commit and build the object as a Node.
	 */
	virtual Node* BuildNode() = 0;
};
