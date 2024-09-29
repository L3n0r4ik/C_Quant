#include <gtest/gtest.h>
int sum(int a, int b) {
    return a + b;
}

// Unit_test
TEST(SumTest, HandlesPositiveNumbers) {
    EXPECT_EQ(sum(2, 2), 4);
    EXPECT_EQ(sum(1, 2), 3);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
