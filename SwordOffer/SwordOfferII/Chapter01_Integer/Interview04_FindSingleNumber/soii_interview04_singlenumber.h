#ifndef SOII_INTERVIEW04_SINGLE_NUMBER_H_
#define SOII_INTERVIEW04_SINGLE_NUMBER_H_

/*
给你一个整数数组 nums ，除某个元素仅出现 一次 外，其余每个元素都恰出现 三次 。请你找出并返回那个只出现了一次的元素。

 

示例 1：

输入：nums = [2,2,3,2]
输出：3
示例 2：

输入：nums = [0,1,0,1,0,1,100]
输出：100
 

提示：

1 <= nums.length <= 3 * 104
-231 <= nums[i] <= 231 - 1
nums 中，除某个元素仅出现 一次 外，其余每个元素都恰出现 三次
 

进阶：你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？

*/

int singleNumber(int* nums, int numsSize);

#endif