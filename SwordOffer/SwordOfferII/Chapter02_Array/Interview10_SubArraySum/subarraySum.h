#ifndef __SUB_ARRAY_SUM_H_
#define __SUB_ARRAY_SUM_H_

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> sumToCount;
        int sum = 0;
        int count = 0;

        sumToCount[0] = 1;
        for (size_t i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sumToCount.find(sum - k) != sumToCount.end()) {
                count += sumToCount[sum - k];
            }
            sumToCount[sum]++;
        }

        return count;
    }
};

#endif