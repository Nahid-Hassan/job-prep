class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int count = 0;
        for (int i = 0; i < nums.size();) {
            if (i + 1 < nums.size() and nums[i] == nums[i+1]) {
                count++;
                i += 2;
            } else {
                i++;
            }
        }
        return {count, ((int) nums.size() - count * 2)};
    }
};