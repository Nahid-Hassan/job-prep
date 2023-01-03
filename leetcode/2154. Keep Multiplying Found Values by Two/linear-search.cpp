class Solution {
public:
    bool linear_search(vector<int>& nums, int original) {
        for (auto num : nums) {
            if (num == original) return true;
        }
        return false;
    }
    
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        
        while (linear_search(nums, original)) {
            original *= 2;
        }
        
        return original;
    }
};