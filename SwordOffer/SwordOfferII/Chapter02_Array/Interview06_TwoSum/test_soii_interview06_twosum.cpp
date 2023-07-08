#include "soii_interview06_twosum.h"

#include <gtest/gtest.h>
#include <stdio.h>

TEST(Test_SwordOfferII_Interview06_TwoSum, Test1)
{
    int numbers[] = {1, 2, 4, 6, 10};
    int numbersSize = sizeof(numbers) / sizeof(*numbers);
    int target = 8;

    int returnSize = 0;
    int *ret = twoSum(numbers, numbersSize, target, &returnSize);

    EXPECT_EQ(returnSize, 2);
    EXPECT_EQ(ret[0], 1);
    EXPECT_EQ(ret[1], 3);
}

TEST(Test_SwordOfferII_Interview06_TwoSum, Test2)
{
    int numbers[] = {2, 3, 4};
    int numbersSize = sizeof(numbers) / sizeof(*numbers);
    int target = 6;

    int returnSize = 0;
    int *ret = twoSum(numbers, numbersSize, target, &returnSize);

    EXPECT_EQ(returnSize, 2);
    EXPECT_EQ(ret[0], 0);
    EXPECT_EQ(ret[1], 2);
}

TEST(Test_SwordOfferII_Interview06_TwoSum, Test3)
{
    int numbers[] = {-1, 0};
    int numbersSize = sizeof(numbers) / sizeof(*numbers);
    int target = -1;

    int returnSize = 0;
    int *ret = twoSum(numbers, numbersSize, target, &returnSize);

    EXPECT_EQ(returnSize, 2);
    EXPECT_EQ(ret[0], 0);
    EXPECT_EQ(ret[1], 1);
}