class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
            if (mp[num]>1) return num;
        }
        return 10;
    }
};
