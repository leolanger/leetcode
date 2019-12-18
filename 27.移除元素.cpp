/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        vector<int>::iterator pr;
        for (pr = nums.begin(); *pr < nums.size(); pr++)
        {
            if(nums[*pr] == val)
            {
                nums.erase(pr, pr + 1);
            }
        }
        return nums.size();
    }
};
// @lc code=end

