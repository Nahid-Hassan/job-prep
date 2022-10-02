/**
 * Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

    Example 1:

    Input: nums = [1,2,3,1], k = 3
    Output: true
*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        ios::sync_with_stdio(NULL);
        cin.tie(NULL); cout.tie(NULL);
        
        unordered_map<int, int> mp;
        
        for (int i = 0, j = 0; i < nums.size(); i++) {
            if (mp.count(nums[i]) && abs(i - j) <= k) return true;
            mp[nums[i]] = i;
            
            if (mp.size() > k) {
                mp.erase(nums[j]);
                j++;
            }
        }
        
        return false;
    }
};