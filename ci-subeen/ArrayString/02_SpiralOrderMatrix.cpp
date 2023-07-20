/*
    Currently this code provides wrong output...
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    /**
     * [1,2,3]
     * [4,5,6]
     * [7,8,9]
     */

    int rowStart = 0;
    int rowEnd = matrix.size() - 1;
    int colStart = 0;
    int colEnd = matrix[0].size() - 1;

    vector<int> linearArray;

    while (rowStart <= rowEnd and colStart <= colEnd) {
        // left to right
        for (int i = colStart; i <= colEnd; i++) {
            linearArray.push_back(matrix[rowStart][i]);
        }
        rowStart++;

        // top to bottom
        for (int i = rowStart; i <= rowEnd; i++) {
            linearArray.push_back(matrix[i][colEnd]);
        }
        colEnd--;

        if (rowStart <= rowEnd) {
            // right to left
            for (int i = colEnd; i >= colStart; i--) {
                linearArray.push_back(matrix[rowEnd][i]);
            }
            rowEnd--;
        }

        // bottom to top
        if (colStart <= colEnd) {
            for (int i = rowEnd; i >= rowStart; i--) {
                linearArray.push_back(matrix[i][colStart]);
            }
            colStart++;
        }
    }

    return linearArray;
}

void printArray(const vector<int>& linear) {
    for (int i = 0; i < linear.size(); i++) {
        cout << linear[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> linearArray = spiralOrder(matrix);
    printArray(linearArray);
    matrix.clear();
    matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    linearArray = spiralOrder(matrix);
    printArray(linearArray);
}