#include "maxProduct.h"

#include <stdio.h>

void test1()
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

    printf("test1(): %d\n", maxProduct(words, wordsSize));
}

void test2()
{
    char word1[] = "a";
    char word2[] = "aa";
    char word3[] = "aaa";
    char word4[] = "aaaa";

    char *words[] = {word1, word2, word3, word4};
    int wordsSize = sizeof(words) / sizeof(*words);

    printf("test2(): %d\n", maxProduct(words, wordsSize));
}

int main(int argc, char **argv)
{
    test1();

    test2();

    return 0;
}