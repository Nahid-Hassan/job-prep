class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> sol;
        map<int, int> mp;
        
        for (auto item : items1) mp[item[0]] += item[1];
        for (auto item : items2) mp[item[0]] += item[1];
    
        for (auto it : mp) {
            sol.push_back({it.first, it.second});
        }
        
        return sol;
    }
};