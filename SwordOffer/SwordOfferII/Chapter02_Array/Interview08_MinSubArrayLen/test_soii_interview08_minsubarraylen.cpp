#include "soii_interview08_minsubarraylen.h"

#include <gtest/gtest.h>

TEST(Test_SwordOfferII_Interview08_MinSubArrayLen, Test1)
{
    int nums[] = {2, 3, 1, 2, 4, 3};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int target = 7;
    EXPECT_EQ(minSubArrayLen(target, nums, numsSize), 2);
}

TEST(Test_SwordOfferII_Interview08_MinSubArrayLen, Test2)
{
    int nums[] = {1, 4, 4};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int target = 4;
    EXPECT_EQ(minSubArrayLen(target, nums, numsSize), 1);
}

TEST(Test_SwordOfferII_Interview08_MinSubArrayLen, Test3)
{
    int nums[] = {1, 1, 1, 1, 1, 1, 1, 1};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int target = 11;
    EXPECT_EQ(minSubArrayLen(target, nums, numsSize), 0);
}