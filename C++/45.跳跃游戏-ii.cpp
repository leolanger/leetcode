/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int len = nums.size(), count = 0, n = 0, i = 0,end = 0;
        if (len == 1)
            return 0;
        do
        {
            n = max(n, i + nums[i]);
            if (i == end)
            {
                end = n;
                count++;
            }
            i++;
        }while(i < len - 1);
        return count;
    }
};
// @lc code=end

