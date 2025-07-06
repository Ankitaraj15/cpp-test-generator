#include <gtest/gtest.h>
#include "functions.h"  // Use your actual file containing add()

TEST(AddTest, SimpleAddition) {
    int result = add(2, 3);
    EXPECT_EQ(result, 5);
}

TEST(AddTest, ZeroPlusZero) {
    int result = add(0, 0);
    EXPECT_EQ(result, 0);
}

TEST(AddTest, NegativeNumbers) {
    int result = add(-1, -2);
    EXPECT_EQ(result, -3);
}

TEST(AddTest, MixedSigns) {
    int result = add(-1, 2);
    EXPECT_EQ(result, 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
