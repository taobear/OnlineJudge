#include "numSubarrayProductLessThanK.h"

int numSubarrayProductLessThanK(int* nums, int numsSize, int k)
{
    long long product = 1;
    int left = 0;
    int count = 0;
    for (int right = 0; right < numsSize; right++) {
        product *= nums[right];
        while (left <= right && product >= k) {
            product /= nums[left++];
        }

        count += left <= right ? right - left + 1 : 0;
    }

    return count;
}