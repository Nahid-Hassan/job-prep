class Solution {
public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b) {
        if (a.second < b.second) return true;
        if (a.second == b.second) return a.first >= b.first;
        return false;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto num : nums) mp[num]++;
        
        vector<pair<int, int>> temp(mp.begin(), mp.end());
        sort(temp.begin(), temp.end(), cmp);
        
        vector <int> ans;
        for (auto it : temp) {
            while(it.second--) {
                ans.push_back(it.first);
            }
        }
        
        
        return ans;
    }
};