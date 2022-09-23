// https://youtu.be/dvMdn0ARtf0 

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = size(nums);
        vector<int> ans(n);
        stack<int> st;
        
        //1 2 3  4  3
        //2 3 4 -1 -1     
        for (int i = n - 1; i >= 0; i--) {
            while(!st.empty() && st.top() <= nums[i]) st.pop();
            ans[i] = st.empty() ? - 1 : st.top();
            st.push(nums[i]);
        }
        
        for (int i = n - 1; i >= 0; i--) {
            if (ans[i] == -1) {
                while(!st.empty() && st.top() <= nums[i]) st.pop();
                ans[i] = st.empty() ? -1 : st.top();
            }
            st.push(nums[i]);
        }
        
        return ans;
    }
};