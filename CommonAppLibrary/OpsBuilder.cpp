#pragma once
#include "OpsBuilder.h"

void OpsBuilder::SetAdversary(std::string adversary) {

}

std::string OpsBuilder::GetAdversary() {
	return "";
}

void OpsBuilder::SetOpType(op_types type) {

}

void OpsBuilder::SetOpType(std::string type) {

}

void OpsBuilder::SetNotes(std::string notes)
{
}

std::string OpsBuilder::GetNotes() {
	return "";
}

Network* OpsBuilder::GetNetwork() {
	Network network = Network();
	return &network;
}

void OpsBuilder::SetNetwork(Network* network) {

}

OpsBuilder::OpsBuilder() {

}
