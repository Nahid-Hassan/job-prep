class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        
        while (binary_search(nums.begin(), nums.end(), original)) {
            original *= 2;
        }
        
        return original;
    }
};