class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = size(matrix), c = size(matrix[0]);
        vector<int> row(r, 1), col(c, 1);
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (row[i] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < r; j++) {
                if (col[i] == 0) {
                    matrix[j][i] = 0;
                }
            }
        }        
    }
};