/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26, 0);
        vector<int> b(26, 0);
        if (s.size() != t.size())
            return 0;
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                a[(int)s[i] - 97]++;        // 哈析表打表.
                b[(int)t[i] - 97]++;
            }
            if (a == b)
                return 1;
            else 
                return 0;
        }
    }
};
// @lc code=end

