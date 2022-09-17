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
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        ListNode* dummy = head;
        ListNode* kth = NULL;
        
        for (int i = 1; i < k; i++) {
            dummy = dummy->next;
        }
        kth = dummy;
        ListNode* slow = head;
        dummy = dummy->next;        
        while(dummy) {
            slow = slow->next;
            dummy = dummy->next;
        }
        swap(slow->val, kth->val);
        
        return head;
    }
};