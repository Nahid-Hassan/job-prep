class Solution {
public:
    bool dfs(int x, int y, vector<vector<char>>& grid) {
        if (x < 0 or y < 0 or x >= grid.size() or y >= grid[0].size() or grid[x][y] == '0') 
            return false;
        grid[x][y] = '0'; 
        return dfs(x + 1, y, grid) + dfs(x - 1, y, grid) + dfs(x, y + 1, grid) + dfs(x, y - 1, grid);        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    count++;
                    dfs(i, j, grid);
                }
            }
        }
        
        return count;
    }
};