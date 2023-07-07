#include "singleNumber.h"

#include <stdio.h>
#include <gtest/gtest.h>

TEST(TEST_SwordOfferII_Interview04_FindSingleNumber, Test1)
{
    int nums[] = {2, 2, 3, 2};
    int numsSize = sizeof(nums) / sizeof(*nums);

    EXPECT_EQ(singleNumber(nums, numsSize), 3);
}

TEST(TEST_SwordOfferII_Interview04_FindSingleNumber, Test2)
{
    int nums[] = {0, 1, 0, 1, 0, 1, 100};
    int numsSize = sizeof(nums) / sizeof(*nums);

    EXPECT_EQ(singleNumber(nums, numsSize), 100);
}
