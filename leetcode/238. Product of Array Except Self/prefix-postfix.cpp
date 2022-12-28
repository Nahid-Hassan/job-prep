class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(), 1);
        vector<int> pro(nums.size(), 1);
        
        pre[0] = nums[0];
        pro[nums.size() - 1] = nums[nums.size() - 1];
        for (int i = 1; i < nums.size(); i++) {
            pre[i] = nums[i] * pre[i-1]; 
        }
        
        for (int i = nums.size() - 2; i >= 0; i--) {
            pro[i] = nums[i] * pro[i+1];
        }
        
        
        vector<int> sol(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                sol[i] = pro[i+1];
            } 
            else if (i == nums.size() - 1) {
                sol[i] = pre[nums.size() - 2];
            } else {
                sol[i] = pro[i+1] * pre[i-1];
            }
            
        }
        
        return sol;
    }
};