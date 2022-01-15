#include "singleNumber.h"

int singleNumber(int* nums, int numsSize)
{
    int bitSums[32] = {0};
    for (int i = 0; i < numsSize; i++) {
        for (int j = 0; j < 32; j++) {
            bitSums[j] += (nums[i] >> j) & 0x1;
        }
    }

    int result = 0;
    for (int i = 0; i < 32; i++) {
        result |= (bitSums[i] % 3) ? (1u << i) : 0;
    }

    return result;
}