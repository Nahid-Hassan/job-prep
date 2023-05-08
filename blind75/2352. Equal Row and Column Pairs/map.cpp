class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> mp;
        
        vector<int> temp;
        int n(size(grid));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                temp.push_back(grid[j][i]);
            }
            mp[temp]++;
            temp.clear();
        }
        
        int ret = 0;
        for (auto row : grid) {
            if (mp[row] > 0) {
                ret += mp[row];
            }
        }
        return ret;
    }
};