#include "soii_interview08_minsubarraylen.h"

#include <limits.h>
#include <math.h>

int minSubArrayLen(int target, int* nums, int numsSize)
{
    int sum = 0;
    int minLength = INT_MAX;
    int left = 0;
    for (int right = 0; right < numsSize; right++) {
        sum += nums[right];
        while (left <= right && sum >= target) {
            minLength = fmin(minLength, right - left + 1);
            sum -= nums[left++];
        }
    }

    return minLength == INT_MAX ? 0 : minLength;
}