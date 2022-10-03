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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* dummy = head;
        int ln = 0;
        
        if (head == NULL || head->next == NULL) return head;
        
        while (dummy != NULL) {
            ln++;
            dummy = dummy->next;
        }
        
        
        k = ln - (k % ln);
        if (k == 0 || k == ln) return head;
    
        dummy = head;
        while(--k) {
            dummy = dummy->next;
        }
        ListNode* extra = dummy->next;
        dummy->next = NULL;
        
        ListNode* ans = extra;
        while(extra != NULL && extra->next != NULL) extra = extra->next;
        if (extra != NULL) extra->next = head;
        
        return ans;
    }
};