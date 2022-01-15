#include "countBits.h"

#include <stdio.h>

#include <util/print.h>

void test1()
{
    int returnSize = 0;
    int *ret = countBits(2, &returnSize);

    printf("test1: ");
    print_1d_nums(ret, returnSize);
}

void test2()
{
    int returnSize = 0;
    int *ret = countBits(5, &returnSize);

    printf("test2: ");
    print_1d_nums(ret, returnSize);
}

int main(int argc, char **argv)
{
    test1();

    test2();

    return 0;
}