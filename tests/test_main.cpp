#include "functions.h"
#include <gtest/gtest.h>

TEST(MathTest, Add) {
    EXPECT_EQ(add(3, 2), 5);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(MathTest, Subtract) {
    EXPECT_EQ(subtract(5, 3), 2);
    EXPECT_EQ(subtract(0, 4), -4);
}
