/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0, high = numbers.size() - 1;
        while (low < high)
        {             
            if (numbers[low] + numbers[high] < target)
                low++;
            else if (numbers[low] + numbers[high] > target)
                high--;
            else
                return {low +1, high +1};
        }
        return {-1,-1};
    }
};
// @lc code=end

