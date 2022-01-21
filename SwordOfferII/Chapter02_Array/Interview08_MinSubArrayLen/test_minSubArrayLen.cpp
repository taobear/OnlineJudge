#include "minSubArrayLen.h"

#include <stdio.h>

void test1()
{
    int nums[] = {2, 3, 1, 2, 4, 3};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int target = 7;
    printf("test1(): %d\n", minSubArrayLen(target, nums, numsSize));
}

void test2()
{
    int nums[] = {1, 4, 4};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int target = 4;
    printf("test2(): %d\n", minSubArrayLen(target, nums, numsSize));
}

void test3()
{
    int nums[] = {1, 1, 1, 1, 1, 1, 1, 1};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int target = 11;
    printf("test3(): %d\n", minSubArrayLen(target, nums, numsSize));
}

int main(int argc, char **argv)
{
    test1();

    test2();

    test3();

    return 0;
}