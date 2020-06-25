/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除排序数组中的重复项 II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if (len < 2)
            return len;
        else
        {
            int sp = 1, fp = 2;
            for (fp =2; fp < len; fp++)
            {
                if (nums[fp] != nums[sp - 1])
                {
                    nums[++sp] = nums[fp];
                }
            }
            len = len - (fp - sp) + 1;
        }
        return len ;
    }
};
// @lc code=end

