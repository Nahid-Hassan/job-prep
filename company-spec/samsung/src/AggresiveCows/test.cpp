#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("01-in.txt", "r", stdin);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int n, c;

        cin >> n >> c;
        vector<int> pos(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> pos[i];
        }

        sort(pos.begin(), pos.end());
        int low = pos[0];
        int high = pos[n-1];

        int best = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            int count = 1, left = 0;
            for (int i = 1; i < n and count < c; i++) {
                if (pos[i] - pos[left] >= mid) {
                    count++;
                    left = i;
                }
            }

            if (count >= c) {
                best = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << best << endl;
    }
}