#include "leetcode152_maxproduct.h"

#include <gtest/gtest.h>

TEST(Test_LeetCode152_MaxProduct, Test1)
{
    int nums[] = {2, 3, -2, 4};
    int numsSize = 4;

    EXPECT_EQ(maxProduct(nums, numsSize), 6);
}

TEST(Test_LeetCode152_MaxProduct, Test2)
{
    int nums[] = {-2, 0, -1};
    int numsSize = 3;

    EXPECT_EQ(maxProduct(nums, numsSize), 0);
}

TEST(Test_LeetCode152_MaxProduct, Test3)
{
    int nums[] = {-4, -3, -2};
    int numsSize = sizeof(nums) / sizeof(*nums);

    EXPECT_EQ(maxProduct(nums, numsSize), 12);
}
