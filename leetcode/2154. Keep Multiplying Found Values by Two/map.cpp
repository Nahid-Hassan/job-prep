class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int, int> mp;
        for (auto num : nums) mp[num] = 1;
        
        while (mp.find(original) != mp.end()) {
            original *= 2;
        }
        
        return original;
    }
};