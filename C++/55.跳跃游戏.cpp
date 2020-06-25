/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > n)      // 如果跳到0,则nn大小将不变,最后返回错误.
                return 0;
            n = max(n, i + nums[i]);    // 判断在能跳得位置里,最远能跳到哪.
        }
        return 1;
    }
};
// @lc code=end

