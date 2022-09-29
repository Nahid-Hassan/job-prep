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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *prev = l1, *current = l1;
        int carry = 0;
        
        while (l1 || l2 || carry) {
            if (l1) {
                carry += l1->val;
                l1 = l1->next;
            }
            
            if (l2) {
                carry += l2->val;
                l2 = l2->next;
            }
            
            ListNode *temp = new ListNode(carry % 10);
            // temp->val = carry % 10;
            // temp->next = NULL;
            
            prev->next = temp;
            prev = prev->next;
            carry /= 10;
        }
        
        return current->next;
    }
};