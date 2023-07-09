#include "leetcode215_findkthlargest.h"

void swap(int *nums, int i, int j)
{
    if (i == j) {
        return;
    }

    int tmp = nums[i];
    nums[i] = nums[j];
    nums[j] = tmp;
}

int partition(int *nums, int l, int r)
{
    int pivot = nums[r];
    // nums at   l...  j  < pivot
    // nums at j+1...i-1 >= pivot
    // nums at   i...r-1    to be determin
    int j = l - 1;
    for (int i = l; i < r; i++) {
        if (nums[i] < pivot) {
            // std::swap(nums[++j], nums[i]);
            swap(nums, ++j, i);
        }
    }

    // std::swap(nums[j + 1], nums[r]);
    swap(nums, j + 1, r);
    return j + 1;
}

/* k从1开始 */
int findKthLargest(int *nums, int numsSize, int k)
{
    if (numsSize == 0) {
        return -1;
    }

    if (k < 0 || k > numsSize) {
        return -1;
    }

    int p = partition(nums, 0, numsSize - 1);
    if (p == numsSize - k) {
        return nums[p];
    }

    // 将数组分为了两块，左侧分段大小为p, 右侧分段大小为 numsSize - p - 1
    if (p < numsSize - k) { // partition的位置在要查找位置的左侧，则需要在分段的右侧继续寻找第k大的元素
        return findKthLargest(nums + p + 1, numsSize - p - 1, k);
    } else { // 继续在分段的左侧寻找，分段右侧大小为 numsSize - (p + 1)
        return findKthLargest(nums, p, k - (numsSize - p));
    }
}