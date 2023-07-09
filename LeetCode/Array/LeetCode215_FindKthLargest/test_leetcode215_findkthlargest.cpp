#include "leetcode215_findkthlargest.h"

#include <gtest/gtest.h>
#include <stdio.h>

TEST(Test_LeetCode215_FindKthLargest, Test1)
{
    int nums[] = {3, 2, 1, 5, 6, 4};
    int numsSize = sizeof(nums) /sizeof(*nums);
    int k = 2;

    EXPECT_EQ(findKthLargest(nums, numsSize, k), 5);
}

TEST(Test_LeetCode215_FindKthLargest, Test2)
{
    int nums[] = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int k = 4;

    EXPECT_EQ(findKthLargest(nums, numsSize, k), 4);
}
