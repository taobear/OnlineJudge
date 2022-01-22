#include "numSubarrayProductLessThanK.h"

#include <stdio.h>

void test1()
{
    int nums[] = {10, 5, 2, 6};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int k = 100;

    printf("test1(): %d\n", numSubarrayProductLessThanK(nums, numsSize, k));
}

void test2()
{
    int nums[] = {1, 2, 3};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int k = 0;

    printf("test2(): %d\n", numSubarrayProductLessThanK(nums, numsSize, k));
}

int main(int argc, char **argv)
{
    test1();

    test2();

    return 0;
}