#include "Tank.h"
#include <gtest/gtest.h>

TEST(TankTest, GotShot) {
    Tank tank(5, 0);
    EXPECT_TRUE(tank.gotShot(5));
    EXPECT_FALSE(tank.gotShot(3));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
