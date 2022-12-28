class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> sol(nums.size(), 1);
        
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            sol[i] = prefix;
            prefix *= nums[i];
        }
        
        int postfix = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            sol[i] *= postfix;
            postfix *= nums[i];
        }

        return sol;
    }
};