#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("in.txt", "r", stdin);
    int r, c, k;
    cin >> r >> c >> k;

    int mat[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }

    map<string, int> mp;

    for (int i = 0; i < r; i++) {
        string s = "";
        for (int j = 0; j < c; j++) {
            s += to_string(mat[i][j]);
        }
        mp[s]++;
    }

    int ans = INT_MIN;
    for (auto it : mp) {
        int count_zero = 0;
        for (char c : it.first) {
            if (c == '0') {
                count_zero++;
            }
        }

        // count zero in a row is less then k and k - count_zero is even 
        // then ans is the frequency of this type row

        if (count_zero <= k and (k - count_zero) % 2 == 0) {
            ans = max(ans, it.second);
        }
    }

    cout << ans << endl;
}