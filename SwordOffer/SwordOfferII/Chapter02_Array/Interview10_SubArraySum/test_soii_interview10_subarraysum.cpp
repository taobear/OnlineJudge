#include "soii_interview10_subarraysum.h"

#include <gtest/gtest.h>

TEST(Test_SwordOfferII_Interview10_SubArraySum, Test1)
{
    vector<int> nums = {1, 1, 1};
    int k = 2;

    EXPECT_EQ(Solution().subarraySum(nums, k), 2);
}

TEST(Test_SwordOfferII_Interview10_SubArraySum, Test2)
{
    vector<int> nums = {1, 2, 3};
    int k = 3;
    
    EXPECT_EQ(Solution().subarraySum(nums, k), 2);
}

TEST(Test_SwordOfferII_Interview10_SubArraySum, Test3)
{
    vector<int> nums = {1, 2, 1, 2, 1};
    int k = 3;

    EXPECT_EQ(Solution().subarraySum(nums, k), 4);
}
