#include "GameFactory.h"
#include <gtest/gtest.h>

TEST(GameFactoryTest, CreateAgent) {
    GameFactory factory;
    GameAgent* agent = factory.createGameAgents();
    ASSERT_NE(agent, nullptr);
    delete agent;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
