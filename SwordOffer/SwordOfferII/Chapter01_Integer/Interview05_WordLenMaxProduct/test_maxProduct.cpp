#include "maxProduct.h"

#include <stdio.h>
#include <gtest/gtest.h>

TEST(TEST_SwordOfferII_Interview05_WordLenMaxProduct, Test1)
{
    char word1[] = "a";
    char word2[] = "ab";
    char word3[] = "abc";
    char word4[] = "d";
    char word5[] = "cd";
    char word6[] = "bcd";
    char word7[] = "abcd";

    char *words[] = {word1, word2, word3, word4, word5, word6, word7};
    int wordsSize = sizeof(words) / sizeof(*words);

    EXPECT_EQ(maxProduct(words, wordsSize), 4);
}

TEST(TEST_SwordOfferII_Interview05_WordLenMaxProduct, Test2)
{
    char word1[] = "a";
    char word2[] = "aa";
    char word3[] = "aaa";
    char word4[] = "aaaa";

    char *words[] = {word1, word2, word3, word4};
    int wordsSize = sizeof(words) / sizeof(*words);

    EXPECT_EQ(maxProduct(words, wordsSize), 0);
}
