class Solution {
public:
    bool canJump(vector<int>& nums) {
        int l = nums.size();
        int reachable = 0;
        
        for (int i = 0; i < l; i++) {
            if (reachable < i) {
                return false;
            }
            reachable = max(reachable, i + nums[i]);
            if (reachable >= l) {
                return true;
            }
        }
        
        return true;
    }
};