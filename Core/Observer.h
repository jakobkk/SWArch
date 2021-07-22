#pragma once
#include "Core.h"

/**
 * Observe user behavior to monitor and audit.
 * This will be used for keeping track of every "out of bounds" thing a user may do
 * - Things may include:
 *	-# Valid actions not part of normal workflow
 *	-# Invalid actions
 *	-# Suspecious actions
 *	-# Blatantly illegal actions
 *	 
 * The subject of the observer will be going at once, with overlap: operation time, user session, and user lifetime session
 * This should only be viewable by an auditor or the highest level admin
 * 
 */
class CORE_API Observer {
public:
	enum ObserverTypes
	{
		InvalidAction,
		SuspesciousAction,
		IllegalAction,
		Create,
	};

};

