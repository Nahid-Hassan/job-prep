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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> dummy;
        
        while(head) {dummy.push_back(head->val); head = head->next;}
        
        vector<int> ans(dummy.size());
        stack<int> st; 
        
        for (int i = dummy.size() - 1; i >= 0; i--) {
            while(!st.empty() && st.top() <= dummy[i]) st.pop();
            ans[i] = st.empty() ? 0 : st.top();
            st.push(dummy[i]);
        }
        
        return ans;
    }
};