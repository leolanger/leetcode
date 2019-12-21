/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num = 0;
        while (head != NULL)
        {
            num = (num << 1)+ head -> val;      // 左移一位代表乘2,采用数学方法化简,每取一位之前的每一位乘2.
            head = head -> next;
        }
        return num;
    }
};
