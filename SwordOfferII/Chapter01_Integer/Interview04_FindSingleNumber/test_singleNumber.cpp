#include "singleNumber.h"

#include <stdio.h>

void test1()
{
    int nums[] = {2, 2, 3, 2};
    int numsSize = sizeof(nums) / sizeof(*nums);

    printf("test1(): %d\n", singleNumber(nums, numsSize));
}

void test2()
{
    int nums[] = {0, 1, 0, 1, 0, 1, 100};
    int numsSize = sizeof(nums) / sizeof(*nums);

    printf("test2(): %d\n", singleNumber(nums, numsSize));
}

int main(int argc, char **argv)
{
    test1();

    test2();

    return 0;
}