#include "countBits.h"

#include <stdio.h>
#include <gtest/gtest.h>

#include "print.h"

TEST(TEST_SwordOfferII_Interview03_CountBitOne, Test1)
{
    int returnSize = 0;
    int *ret = countBits(2, &returnSize);

    int expectArray[] = {0, 1, 1};
    EXPECT_EQ(returnSize, sizeof(expectArray) / sizeof(*expectArray));
    for (int i = 0; i < returnSize; i++) {
        EXPECT_EQ(ret[i], expectArray[i]);
    }
}

TEST(TEST_SwordOfferII_Interview03_CountBitOne, Test2)
{
    int returnSize = 0;
    int *ret = countBits(5, &returnSize);

    int expectArray[] = {0, 1, 1, 2, 1, 2};
    EXPECT_EQ(returnSize, sizeof(expectArray) / sizeof(*expectArray));
    for (int i = 0; i < returnSize; i++) {
        EXPECT_EQ(ret[i], expectArray[i]);
    }
}