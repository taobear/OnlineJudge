#include "threeSum.h"

#include <gtest/gtest.h>

TEST(Test_SwordOfferII_Interview07_ThreeSum, Test1)
{
    vector<int> nums{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ret = Solution().threeSum(nums);
    vector<vector<int>> expect = {{-1, -1, 2}, {-1, 0, 1}};
    EXPECT_EQ(ret, expect);
}

TEST(Test_SwordOfferII_Interview07_ThreeSum, Test2)
{
    vector<int> nums{};
    vector<vector<int>> ret = Solution().threeSum(nums);
    vector<vector<int>> expect = {};
    EXPECT_EQ(ret, expect);
}
