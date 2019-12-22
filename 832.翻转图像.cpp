/*
 * @lc app=leetcode.cn id=832 lang=cpp
 *
 * [832] 翻转图像
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int n = A.size(), m = A[0].size();
        vector<vector<int>> B(A);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                B[i][j] = !A[i][m - j - 1];
            }
        }
        return B;
    }
};
// @lc code=end

