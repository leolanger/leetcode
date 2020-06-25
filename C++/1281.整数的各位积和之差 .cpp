/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */
class Solution {
public:
    int subtractProductAndSum(int n) {
        int a[5];
        int sum = 0, mul = 1;
        for (int i = 0; n != 0; i++)
        {
            a[i] = n % 10;
            n /= 10;
            sum += a[i];
            mul *= a[i];
        }
        return mul - sum;
    }
};
// @lc code=end

