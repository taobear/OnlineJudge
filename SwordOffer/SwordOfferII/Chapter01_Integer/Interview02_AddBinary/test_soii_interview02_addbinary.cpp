#include "soii_interview02_addbinary.h"

#include <stdio.h>
#include <string.h>

#include <gtest/gtest.h>

TEST(Test_SwordOfferII_Interview02_AddBinary, Test1)
{
    char a[] = "11";
    char b[] = "10";

    EXPECT_STREQ(addBinary(a, b), "101");
}

TEST(Test_SwordOfferII_Interview02_AddBinary, Test2)
{
    char a[] = "1010";
    char b[] = "1011";

    EXPECT_STREQ(addBinary(a, b), "10101");
}
