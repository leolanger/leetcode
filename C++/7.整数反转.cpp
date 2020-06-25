/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long b = 0, a = fabs(x);
        do
        {
            b = b * 10 + a % 10;
            a /= 10;
        }while(a > 0);
        if (b < pow(2,31) - 1 && b > pow(-2,31))
            {
                if (x > 0)
                    return b;
                else
                    return (-1) * b;}
        else 
            return 0;
    }
};
// @lc code=end

