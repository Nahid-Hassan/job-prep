auto fast = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ret = 0;
        int n(size(grid));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int count = 0;
                
                for (int k = 0; k < n; k++) {
                    if (grid[i][k] == grid[k][j]) {
                        count++;
                    }
                }
                ret += count == n;
            }
        }
        
        return ret;
    }
};