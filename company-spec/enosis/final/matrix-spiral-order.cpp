#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    int m = matrix.size();
    if (m == 0) return result;
    int n = matrix[0].size();
    int rowBegin = 0, rowEnd = m - 1, colBegin = 0, colEnd = n - 1;

    while (rowBegin <= rowEnd && colBegin <= colEnd) {
        // Traverse Right
        for (int j = colBegin; j <= colEnd; j++)
            result.push_back(matrix[rowBegin][j]);
        rowBegin++;

        // Traverse Down
        for (int j = rowBegin; j <= rowEnd; j++)
            result.push_back(matrix[j][colEnd]);
        colEnd--;

        // Traverse Left
        if (rowBegin <= rowEnd) {
            for (int j = colEnd; j >= colBegin; j--)
                result.push_back(matrix[rowEnd][j]);
            rowEnd--;
        }

        // Traverse Up
        if (colBegin <= colEnd) {
            for (int j = rowEnd; j >= rowBegin; j--)
                result.push_back(matrix[j][colBegin]);
            colBegin++;
        }
    }
    return result;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> result = spiralOrder(matrix);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
