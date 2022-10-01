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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return head;
        
        ListNode* root = new ListNode(0);
        ListNode* dummy = root;
        
        ListNode* temp = head;
        map<int, int> mp;
        while(temp != NULL) {
            mp[temp->val]++;
            temp = temp->next;
        }
        
        for (auto it : mp) {
            if (it.second == 1) {
                dummy->next = new ListNode(it.first);
                dummy = dummy->next;
            }
        }
        return root->next;       
    }
};