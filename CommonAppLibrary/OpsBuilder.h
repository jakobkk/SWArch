#pragma once

#include "CommonAppLibrary.h"
#include "IBuilder.h"

class COMMONAPPLIBRARY_API OpsBuilder : public IBuilder
{
	class Operation;
	class Node;

public:
	enum OpsBuilderTypes
	{
		/** Operation created by providing adversary*/
		TypesByAdversary,
		/** Operation created by providing the operation type*/
		TypesByOpType 
	};

	void SetType(OpsBuilder type);
	OpsBuilderTypes GetType();

	void SetAdversary(std::string adversary);
	std::string GetAdversary();

	void SetOpType(op_types type);
	void SetOpType(std::string type);
	op_types GetOpType();

	void SetNotes(std::string notes);
	std::string GetNotes();

	Operation* BuildOperation() override; 
	Node* BuildNode() override; 

private:

};
