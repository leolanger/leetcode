/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int p = x;
        long long sum = 0;
        while(x)
        {
            sum = sum * 10+ x % 10;;
            x /= 10;
        }
        if(sum == p)
        return true;
        return false;
    }
};
// @lc code=end

