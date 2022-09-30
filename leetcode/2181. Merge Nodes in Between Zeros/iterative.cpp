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
    ListNode* mergeNodes(ListNode* head) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        ListNode* dummy = head;
        
        ListNode* ans = new ListNode(0);
        dummy = dummy->next;
        head = ans;
        int sum = 0;
        while(dummy->next != NULL) {
            if (dummy->val == 0) {
                ans->next = new ListNode(sum);
                sum = 0;
                ans = ans->next;
            }
            
            sum += dummy->val;
            dummy = dummy->next;
        }
        ans->next = new ListNode(sum);
        return head->next;
    }
};