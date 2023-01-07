class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> mp;
        int count = 0;
        
        for (auto task : tasks) mp[task]++;
        
        for (auto it : mp) {
            if (it.second == 1) return -1;
            if (it.second % 3 == 0) count += it.second / 3;
            else count += it.second / 3 + 1;
        }
        
        return count;
    }
};