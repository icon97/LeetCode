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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p = l1;
        int tmp = 0;
        while(l2 || tmp) {
            tmp += l1->val + (l2 ? l2->val:0);
            l1->val = tmp%10;
            tmp /= 10;
            l2 = l2 ? l2->next : l2;
            if(!l1->next && (l2 || tmp)) l1->next = new ListNode(0);
            l1 = l1->next;
        }
        return p;
    }
};
