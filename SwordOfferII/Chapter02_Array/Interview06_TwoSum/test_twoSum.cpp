#include "twoSum.h"

#include <util/print.h>
#include <stdio.h>

void test1()
{
    int numbers[] = {1, 2, 4, 6, 10};
    int numbersSize = sizeof(numbers) / sizeof(*numbers);
    int target = 8;

    int returnSize = 0;
    int *ret = twoSum(numbers, numbersSize, target, &returnSize);

    printf("test1: ");
    print_1d_nums(ret, returnSize);
}

void test2()
{
    int numbers[] = {2, 3, 4};
    int numbersSize = sizeof(numbers) / sizeof(*numbers);
    int target = 6;

    int returnSize = 0;
    int *ret = twoSum(numbers, numbersSize, target, &returnSize);

    printf("test2: ");
    print_1d_nums(ret, returnSize);
}

void test3()
{
    int numbers[] = {-1, 0};
    int numbersSize = sizeof(numbers) / sizeof(*numbers);
    int target = -1;

    int returnSize = 0;
    int *ret = twoSum(numbers, numbersSize, target, &returnSize);

    printf("test3: ");
    print_1d_nums(ret, returnSize);
}

int main(int argc, char **argv)
{
    test1();

    test2();

    test3();

    return 0;
}