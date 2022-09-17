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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* dummy = head;
        int len = 0;
        while (dummy) {
            len++; 
            dummy = dummy->next;
        }
        int left = k;
        int right = len - k + 1;
        
        ListNode* a, *b;
        
        if (left == right) return head;
        dummy = head;
        int i = 0;
        while(dummy) {
            i++;
            if (left == i) {
                a = dummy;
            }
            if (right == i) {
                b = dummy;
            }
            dummy = dummy->next;
        }
        int c = a->val;
        a->val = b->val;
        b->val = c;
        
        return head;
    }
};