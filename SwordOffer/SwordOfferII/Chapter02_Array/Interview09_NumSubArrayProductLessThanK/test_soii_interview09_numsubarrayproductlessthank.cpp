#include "soii_interview09_numsubarrayproductlessthank.h"

#include <gtest/gtest.h>
#include <stdio.h>

TEST(Test_SwordOfferII_Interview09_NumSubArrayProductLessThanK, Test1)
{
    int nums[] = {10, 5, 2, 6};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int k = 100;

    EXPECT_EQ(numSubarrayProductLessThanK(nums, numsSize, k), 8);
}

TEST(Test_SwordOfferII_Interview09_NumSubArrayProductLessThanK, Test2)
{
    int nums[] = {1, 2, 3};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int k = 0;

    EXPECT_EQ(numSubarrayProductLessThanK(nums, numsSize, k), 0);
}
