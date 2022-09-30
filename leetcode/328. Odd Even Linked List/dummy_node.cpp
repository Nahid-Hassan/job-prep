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
    ListNode* oddEvenList(ListNode* head) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        if (head == NULL) return head;
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* even_head = even;
        
        while(even != NULL && even->next != NULL) {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        
        odd->next = even_head;
        return head;
    }
};