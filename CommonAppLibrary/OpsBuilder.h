#pragma once

#include "CommonAppLibrary.h"
#include "IBuilder.h"
#include "Operation.h"

/**
 * <summary>Build up an [Operation](@ref Operation) by seperately adding adversary, operation type and notes</summary>
 */
class COMMONAPPLIBRARY_API OpsBuilder : public IBuilder
{

public:

	/** Set the adversary to be the target of the operation */
	void SetAdversary(std::string adversary);
	/** Get the adversary of the operation */
	std::string GetAdversary();

	/** Set the operation type based on the [operation types](@ref Operation.op_types) */
	void SetOpType(op_types type);
	/** Set the operation type based on the [operation types](@ref Operation.op_types) */
	void SetOpType(std::string type);
	/** Get the opeartion type */
	op_types GetOpType();

	/** Set detailed notes for the operation */
	void SetNotes(std::string notes);
	/** Keep track of detailed notes of the operation */
	std::string GetNotes();

	Operation* Build() override; 
	Node* BuildNode() override; 

private:

};
