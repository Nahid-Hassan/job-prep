class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        unordered_map<int, int> mp;
        int count = 0;
        
        for (auto task : tasks) mp[task]++;
        
        for (auto it : mp) {
            int n = it.second;
            if (n == 1) return -1;
            count += (n / 3) + (n % 3 != 0);
        }
        
        return count;
    }
};