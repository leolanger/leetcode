/*
 * @lc app=leetcode.cn id=1108 lang=cpp
 *
 * [1108] IP 地址无效化
 */

// @lc code=start
class Solution {
public:
    string defangIPaddr(string address) {
        for (int i = 0; address[i] != '\0'; i++)
        {
            if (address[i] == '.')
            {
                address.replace(i, 1, "[.]");
                i += 2;     // 跳过新增的字符.
            }
        }
        return address;
    }
};
// @lc code=end

