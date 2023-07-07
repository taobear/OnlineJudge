#ifndef __THREE_SUM_H_
#define __THREE_SUM_H_

#include <vector>
#include <algorithm>

using namespace std;


/*
给定一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a ，b ，c ，使得 a + b + c = 0 ？请找出所有和为 0 且 不重复 的三元组。

示例 1：

输入：nums = [-1,0,1,2,-1,-4]
输出：[[-1,-1,2],[-1,0,1]]
示例 2：

输入：nums = []
输出：[]
示例 3：

输入：nums = [0]
输出：[]
 

提示：

0 <= nums.length <= 3000
-105 <= nums[i] <= 105
 
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (size_t i = 0; i < nums.size(); i++) {
            if (i != 0 && nums[i - 1] == nums[i]) {
                continue;
            }

            size_t j = i + 1;
            size_t k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    result.push_back(vector<int>{nums[i], nums[j], nums[k]});
                    j++; k--;
                    while (j < k && nums[j - 1] == nums[j]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                } else if (sum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }

        return result;
    }
};

#endif