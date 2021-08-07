#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "MockNetwork.h"
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
    MockNetwork network = MockNetwork();
    EXPECT_CALL(network, ConnectHosts(_,_,_)).Times(5).WillRepeatedly(Return(0));

    EXPECT_EQ(network.ConnectHosts(0, 0, 0), 0);
    EXPECT_EQ(network.ConnectHosts(1, 2, 3), 0);
    EXPECT_EQ(network.ConnectHosts(100, 200, 300), 0);
    EXPECT_EQ(network.ConnectHosts(-1, -2, -3), 0);
    EXPECT_EQ(network.ConnectHosts(999999, 9999999, 9999999), 0);

}

TEST(NetworkTest, NetworkScanTest) {
    MockNetwork network = MockNetwork();
    EXPECT_CALL(network, NetworkScan()).Times(5).WillOnce(Return(1)).WillOnce(Return(2)).WillRepeatedly(Return(0));

    EXPECT_EQ(network.NetworkScan(), 1);

    ON_CALL(network, ConnectHosts(_, _, _)).WillByDefault(Return(0));

    EXPECT_EQ(network.NetworkScan(), 2);

    ON_CALL(network, MarkOperational()).WillByDefault(Return(0));

    EXPECT_EQ(network.NetworkScan(), 0);
    EXPECT_EQ(network.NetworkScan(), 0);
    EXPECT_EQ(network.NetworkScan(), 0);

}
