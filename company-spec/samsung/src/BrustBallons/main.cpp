#include <iostream>
using namespace std;

int solve(int arr[], int l, int r, int n) {
    int mx = 0;

    for (int i = l + 1; i < r; i++) {
        int cs = solve(arr, l, i, n) + solve(arr, i, r, n);
        if (l == 0 and r == n) cs += arr[i];  // addition
        else cs += (arr[l] * arr[r]);  // multiply
        if (cs > mx) mx = cs;
    }
    return mx;
}

int main() {
    freopen("in.txt", "r", stdin);

    int n;
    cin >> n;

    int arr[n+2];
    
    arr[0] = 1;
    arr[n+1] = 1;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    cout << solve(arr, 0, n + 1, n + 1) << endl;
}