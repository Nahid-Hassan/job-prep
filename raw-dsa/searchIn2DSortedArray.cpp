#include <bits/stdc++.h>
using namespace std;

vector<int> search2DSortedArrayNaive(vector<vector<int>> mat, int target) {
    /**
     * Time Complexity O(n*n)
     * Space Complexity O(1)
     */
    for (int i = 0; i < size(mat); i++) {
        for (int j = 0; j < size(mat[0]); j++) {
            if (mat[i][j] == target) {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

vector<int> search2DSortedArrayEfficient(vector<vector<int>> mat, int target) {
    /**
     * Time Complexity: O(row + col)
     */
    int row = 0;
    int col = mat[0].size() - 1;

    while (row < size(mat) and col >= 0) {
        if (mat[row][col] == target) {
            return {row, col};
        } else if (mat[row][col] < target) {
            row++;
        } else {
            col--;
        }
    }

    return {-1, -1};
}

vector<int> search2DSortedArrayEfficient2(vector<vector<int>> mat, int target) {
    return {-1, -1};
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int target = 8;
    vector<int> sol = search2DSortedArrayNaive(mat, target);
    cout << "{" << sol[0] << "," << sol[1] << "}" << endl;

    sol = search2DSortedArrayEfficient(mat, target);
    cout << "{" << sol[0] << "," << sol[1] << "}" << endl;

    // if sorted row and column wise it also works....
    // dmn.... HaHa...!
    vector<vector<int>> mat1 = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    target = 35;
    sol = search2DSortedArrayNaive(mat1, target);
    cout << "{" << sol[0] << "," << sol[1] << "}" << endl;

    sol = search2DSortedArrayEfficient(mat1, target);
    cout << "{" << sol[0] << "," << sol[1] << "}" << endl;
}