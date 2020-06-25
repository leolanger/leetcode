/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        vector<int> num(n + 1);
        if (n == 1)
            return 1;
        else if (n == 2)
            return 2;
        else
        {
            num[0] = 1;
            num[1] = 1;
            num[2] = 2;
            for (int i = 3; i < n + 1; i++)
            {
                num[i] = num[i - 1] + num[i -2];
            }
        }
        return num[n];
    }
};
// @lc code=end

