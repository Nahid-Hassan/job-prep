/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int left = 0;
    int right = 0;
    
    for (int i = 0;  i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) left += arr[i][j];
            if (i + j == n - 1) right += arr[i][j];        
        }
    }
    
    return left > right ? abs(left - right) : abs(right - left)
}