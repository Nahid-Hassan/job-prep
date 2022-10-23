class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0;
        int i;
        for (i = 1; i <= nums.size(); i++) {
            ans ^= i;
            ans ^= nums[i-1];
        }
        
        return ans ^ (--i);
    }
};
