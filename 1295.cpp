class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int num: nums) {
            if (to_string(num).size() % 2 == 0) {       // 将整型数组转换成字符串,再求其长度
                count++;
            }
        }
        return count;
    }
};
