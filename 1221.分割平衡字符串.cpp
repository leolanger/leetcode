/*
 * @lc app=leetcode.cn id=1221 lang=cpp
 *
 * [1221] 分割平衡字符串
 */

// @lc code=start
class Solution {
public:
    int balancedStringSplit(string s) {
        int len = s.size();
        int count = 0, sum = 0;
        vector<int> a(len);
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'R')
                a[i] = 1;
            else
                a[i] = -1;
            sum += a[i];
            if (sum == 0)
                count++;
        }
        return count;
    }
};
// @lc code=end

