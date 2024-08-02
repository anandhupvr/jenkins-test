#include <iostream>

#include "gtest/gtest.h"
#include "../src/add.h"
#include "io.cpp"

TEST(sample_test_case, sample_test)
{
    EXPECT_EQ(1, 1);
}

TEST(AdditionTest, SimpleAddition) {
    EXPECT_EQ(add(3, 4), 7);
    EXPECT_EQ(add(5, 5), 10);
    //EXPECT_EQ(add(5, 5), 6); // force fail
}

// TEST(AdditionTest, TestFromFile) {
//     std::vector<std::pair<int, int>> inputNumbers = readInputNumbers("/home/user1/Documents/works/jenkins-test/jenkins-test/app1/tests/test_numbers.txt");
//     for (const auto& nums : inputNumbers) {
//         int result = add(nums.first, nums.second);
//         EXPECT_EQ(result, 0);
//     }
// }

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
