#include "twoSum.h"

#include <stdlib.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
    int *ret = (int *)malloc(sizeof(int) * 2);
    int lo = 0, hi = numbersSize - 1;
    while (lo < hi) {
        int sum = numbers[lo] + numbers[hi];
        if (sum < target) {
            lo ++;
        } else if (sum > target) {
            hi --;
        } else {
            break;
        }
    }

    ret[0] = lo;
    ret[1] = hi;
    *returnSize = 2;
    return ret;
}