/**
 * @file hashmap.cpp
 * @author nahidmdh18@gmail.com
 * @brief Change all the zero to -1 and calculate the sum and store it on 
 * hash map(for easy finding). if sum == 0 ans is i + 1 else max(sum, i - mp[sum])
 * @version 0.1
 * @date 2022-09-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> mp;
        int sum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) sum += 1;
            if (nums[i] == 0) sum -= 1;
            
            if (sum == 0) ans = i + 1;
            if (mp.find(sum) != mp.end()) {
                ans = max(ans, i - mp[sum]);
            } else {
                mp[sum] = i;
            }
        }
        
        return ans;
    }
};