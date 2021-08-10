#pragma once
#include "gmock/gmock.h"
#include "../CommonAppLibrary/Network.h"

class MockNetwork : public Network {
public:
	MOCK_METHOD3(ConnectHosts, int(int hostOneId, int hostTwoId, int connectionId));
	MOCK_METHOD0(MarkOperational, int());
	MOCK_METHOD0(NetworkScan, int());
private:
};
