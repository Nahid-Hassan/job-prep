class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = size(nums);
        vector<int> ans(n, -1);
        
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (nums[i] < nums[(i + j) % n]) {
                    ans[i] = nums[(i + j) % n];
                    break;
                }
            }
        }
        
        return ans;
    }
};