#include "leetcode15_threesum.h"

#include <gtest/gtest.h>

#include <stdio.h>
#include <stdlib.h>

TEST(Test_LeetCode15_ThreeSum, Test1)
{
    int nums[] = {-1, 0, 1, 2, -1, -4};
    int returnSize = 0;
    int *returnColumnSize = NULL;
    int **returnArray = NULL;
    returnArray = threeSum(nums, sizeof(nums) / sizeof(*nums), &returnSize, &returnColumnSize);

    int expectArr1[] = {-1, -1, 2};
    int expectArr2[] = {-1, 0, 1};
    int *expectArr[] = {expectArr1, expectArr2};
    int expectArrSize[] = {3, 3};

    EXPECT_EQ(returnSize, sizeof(expectArr) / sizeof(*expectArr));
    for (int i = 0; i < returnSize; i++) {
        EXPECT_EQ(returnColumnSize[i], expectArrSize[i]);
        for (int j = 0; j < returnColumnSize[i]; j++) {
            EXPECT_EQ(expectArr[i][j], returnArray[i][j]);
        }
    }
}

TEST(Test_LeetCode15_ThreeSum, Test2)
{
    int nums[] = {0, 0, 0, 0, 0};
    int returnSize = 0;
    int *returnColumnSize = NULL;
    int **returnArray = NULL;

    returnArray = threeSum(nums, sizeof(nums) / sizeof(*nums), &returnSize, &returnColumnSize);

    int expectArr1[] = {0, 0, 0};
    int *expectArr[] = {expectArr1};
    int expectArrSize[] = {3};

    EXPECT_EQ(returnSize, sizeof(expectArr) / sizeof(*expectArr));
    for (int i = 0; i < returnSize; i++) {
        EXPECT_EQ(returnColumnSize[i], expectArrSize[i]);
        for (int j = 0; j < returnColumnSize[i]; j++) {
            EXPECT_EQ(expectArr[i][j], returnArray[i][j]);
        }
    }
}
