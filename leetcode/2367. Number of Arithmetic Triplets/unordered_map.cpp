class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        unordered_map<int, int> mp;
        for (auto num : nums) mp[num] = 1;
        for (auto num : nums) {
            if (mp[num-diff] and mp[num+diff]) {
                count++;
            }
        }
        
        return count;
    }
};