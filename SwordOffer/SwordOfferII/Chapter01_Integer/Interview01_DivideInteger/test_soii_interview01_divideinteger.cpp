#include "soii_interview01_divideinteger.h"

#include <stdio.h>
#include <limits.h>

#include <gtest/gtest.h>

TEST(Test_SwordOfferII_Interview01_DivideInteger, Test1)
{
    int dividend = 15, divisor = 2;
    EXPECT_EQ(divide(dividend, divisor), 7);
}

TEST(Test_SwordOfferII_Interview01_DivideInteger, Test2)
{
    int dividend = 7, divisor = -3;
    EXPECT_EQ(divide(dividend, divisor), -2);
}

TEST(Test_SwordOfferII_Interview01_DivideInteger, Test3)
{
    int dividend = 0, divisor = 1;
    EXPECT_EQ(divide(dividend, divisor), 0);
}

TEST(Test_SwordOfferII_Interview01_DivideInteger, Test4)
{
    int dividend = -2147483648, divisor = -1;
    EXPECT_EQ(divide(dividend, divisor), 2147483647);
}

TEST(Test_SwordOfferII_Interview01_DivideInteger, Test5)
{
    int dividend = -2147483648, divisor = 1;
    EXPECT_EQ(divide(dividend, divisor), -2147483648);
}
