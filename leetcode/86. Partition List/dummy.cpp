/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* dummy_less = new ListNode(0);
        ListNode* dummy_greater = new ListNode(0);
    
        ListNode* dummy = head;
        ListNode* dummy_less_head = dummy_less;
        ListNode* dummy_greater_head = dummy_greater;
        while(dummy != NULL) {
            if (dummy->val < x) {
                dummy_less->next = new ListNode(dummy->val);
                dummy_less = dummy_less->next;
            } else {
                dummy_greater->next = new ListNode(dummy->val);
                dummy_greater = dummy_greater->next;
            }
            dummy = dummy->next;
        }
        dummy_less->next = dummy_greater_head->next;
        return dummy_less_head->next;
    }
};