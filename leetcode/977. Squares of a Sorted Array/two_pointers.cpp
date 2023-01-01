// https://leetcode.com/problems/squares-of-a-sorted-array/discuss/495394/C%2B%2B%3A-Simplest-one-pass-two-pointers

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        vector<int> sol(nums.size(), 0);
        
        for (int i = r; i >= 0; i--) {
            if (abs(nums[l]) > abs(nums[r])) sol[i] = nums[l] * nums[l++];
            else sol[i] = nums[r] * nums[r--];
        }
        
        return sol;
    }
};