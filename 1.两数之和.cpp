/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        for (i = 0; i < nums.size(); i++)
        {
            for (j = 0; j < nums.size(); j++)
            {
                if((nums[j] == target - nums [i]) && i != j)
                {
                    return {i,j};  
                }
            }
        }
        return {i,j};
    }
};
// @lc code=end

