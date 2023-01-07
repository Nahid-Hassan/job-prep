class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size(), idx, mx = 0;
        
        for (auto num : nums) mx = max(mx, num);
        
        for (int i = 0; i < n; i++) {
            if (mx == nums[i]) {
                idx = i;
                continue;
            } 
            
            if (nums[i] * 2 > mx) return -1;
        }
        
        return idx;
    }
};