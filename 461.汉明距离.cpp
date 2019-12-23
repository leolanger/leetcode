/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        return bitset<32>(x^y).count();     // 转化为二进制数,再计数.
    }
};


class Solution {
public:
    int hammingDistance(int x, int y) {
        int d = x ^ y;
        int count = 0;
        do
        {
            if (d & 1 == 1)
            {
                count++;
                if (d == 1)
                    break;
            }
            d /= 2;
        }while(d > 0);
        return count;
    }
};
// @lc code=end

