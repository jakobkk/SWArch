#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "MockNetwork.h"
#include "MockNetworkBuilder.h"
#include "../CommonAppLibrary/OpsBuilder.h"

class MockTest {
public:
	MOCK_METHOD(void, SomeMethod, ());
};

TEST(TestCaseName, TestName) {
    MockTest mock;
    EXPECT_CALL(mock, SomeMethod);
    mock.SomeMethod();
}

TEST(TestCaseName, TestNameTrue) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

using ::testing::Return;
using ::testing::StrictMock;
TEST(OpsBuilderTest, GetSetNetwork) {
    StrictMock<MockNetwork> network;
    OpsBuilder *builder = &OpsBuilder();

    EXPECT_CALL(network, ConnectHosts(1,2,3));
    EXPECT_CALL(network, MarkOperational());

    builder->SetNetwork(&network);
    Network *return_network = builder->GetNetwork();
    EXPECT_EQ(return_network, network);
}

using ::testing::_;
TEST(NetworkTest, ConnectHostsTest) {
    MockNetworkBuilder builder = MockNetworkBuilder();
    int routerCount = 2;

    EXPECT_CALL(builder, SetHostCount(_)).Times(1);
    EXPECT_CALL(builder, SetRouterCount(_)).Times(1);
    EXPECT_CALL(builder, GetRouterCount()).Times(1).WillOnce(Return(routerCount));
    EXPECT_CALL(builder, SetNotes(_)).Times(1);

    builder.SetHostCount(2);
    builder.SetRouterCount(routerCount);
    builder.GetRouterCount();
    builder.SetNotes("Some notes about the op");

    Network network = Network(builder);
    EXPECT_EQ(network.ConnectHosts(0, 0, 0), 0);
    EXPECT_EQ(network.ConnectHosts(1, 2, 3), 0);
    EXPECT_EQ(network.ConnectHosts(100, 200, 300), 0);
    EXPECT_EQ(network.ConnectHosts(-1, -2, -3), 0);
    EXPECT_EQ(network.ConnectHosts(999999, 9999999, 9999999), 0);

}

TEST(NetworkTest, NetworkScanTest) {
    MockNetworkBuilder builder = MockNetworkBuilder();
    int userCount = 5;

    EXPECT_CALL(builder, SetHostCount(_)).Times(1);
    EXPECT_CALL(builder, SetRouterCount(_)).Times(1);
    EXPECT_CALL(builder, SetUserCount(_)).Times(1);
    EXPECT_CALL(builder, GetUserCount()).Times(1).WillOnce(Return(userCount));
    EXPECT_CALL(builder, SetNotes(_)).Times(1);

    builder.SetHostCount(4);
    builder.SetRouterCount(2);
    builder.SetUserCount(userCount);
    builder.GetUserCount();
    builder.SetNotes("Some more notes about this other op");

    Network network = Network(builder);

    EXPECT_EQ(network.NetworkScan(), 0);

}
