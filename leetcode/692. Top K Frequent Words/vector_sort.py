class Solution {
public:
    static bool cmp(pair<string, int> &a, pair<string, int> &b) {
        if (a.second == b.second) return a.first < b.first;
        else return a.second > b.second;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for (auto word: words) mp[word]++;
        
        vector<pair<string, int>> temp(mp.begin(), mp.end());
        sort(temp.begin(), temp.end(), cmp);
        vector<string> ans;
        
        for (auto it : temp) {
            ans.push_back(it.first);
            --k;
            if (k == 0) break;
        }
        
        return ans;
    }
};