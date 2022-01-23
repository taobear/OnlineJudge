#include "subarraySum.h"

#include <stdio.h>

void test1()
{
    vector<int> nums = {1, 1, 1};
    int k = 2;

    printf("test1(): %d\n", Solution().subarraySum(nums, k));
}

void test2()
{
    vector<int> nums = {1, 2, 3};
    int k = 3;
    
    printf("test2(): %d\n", Solution().subarraySum(nums, k));
}

void test3()
{
    vector<int> nums = {1, 2, 1, 2, 1};
    int k = 3;

    printf("test3(): %d\n", Solution().subarraySum(nums, k));
}

int main(int argc, char **argv)
{
    test1();

    test2();

    test3();

    return 0;
}