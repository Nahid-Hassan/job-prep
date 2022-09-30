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
    int numComponents(ListNode* head, vector<int>& nums) {
        int count = 0;
        
        sort(nums.begin(), nums.end());
        ListNode* dummy = head;
        
        int c = 0;
        while (dummy) {
            if (binary_search(nums.begin(), nums.end(), dummy->val)) {
                c++;
            } else if (c > 0){
                count++;
                c = 0;
            } else {
                c = 0;
            }
            dummy = dummy->next;
        }
        
        return c > 0 ? ++count : count;
    }
};