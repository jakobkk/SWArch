#pragma once
#include "gmock/gmock.h"
#include "../CommonAppLibrary/NetworkBuilder.h"

class MockNetworkBuilder : public Network {
public:
	MockNetworkBuilder();
	MOCK_METHOD1(SetType, void(NetworkBuilder type));
	MOCK_METHOD0(GetType, NetworkBuilder());
	MOCK_METHOD1(SetHostCount, void(int count));
	MOCK_METHOD0(GetHostCount, int());
	MOCK_METHOD1(SetRouterCount, void(int count));
	MOCK_METHOD0(GetRouterCount, int());
	MOCK_METHOD0(IncrementHostCount, void());
	MOCK_METHOD1(SetUserCount, void(int count));
	MOCK_METHOD0(GetUserCount, int());
	MOCK_METHOD1(SetNotes, void(std::string notes));
	MOCK_METHOD0(GetNotes, std::string());
};
