class Solution {
public:
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    bool vis[100][100] = {0};
    
    
    bool isValid(int x, int y, vector<vector<int>>& grid) {
        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size()) return false;
        if (vis[x][y] == true || grid[x][y] == 0) return false;
        return true;
    }
    
    int mx_global_count = 0;
    int global_count = 0;
    
    void dfs(int x, int y, vector<vector<int>>& grid) {
        vis[x][y] = 1;
        
        for (int i = 0; i <= 3; i++) {
            if (isValid(x+dx[i], y+dy[i], grid)) {
                ++global_count;
                dfs(x+dx[i], y+dy[i], grid);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (vis[i][j] == 0 and grid[i][j] == 1) {
                    global_count = 0;
                    dfs(i, j, grid);
                    mx_global_count = max(mx_global_count, global_count);
                }
            }
        }
        
        return mx_global_count;
    }
};