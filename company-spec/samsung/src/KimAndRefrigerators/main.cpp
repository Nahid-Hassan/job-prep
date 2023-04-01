#include <bits/stdc++.h>
using namespace std;

int x[100], y[100];
int N, ans, mask[100];

int dist(int i, int j) {
    return abs(x[i] - x[j]) + abs(y[i] - y[j]);
}

void solve(int i, int node, int cost) {
    if (node == N) {
        ans = min(ans, cost + dist(i, N + 1));
        return;
    }

    for (int j = 1; j <= N; j++) {
        if (!mask[j]) {
            mask[j] = 1;
            solve(j, node + 1, cost + dist(i, j));
            mask[j] = 0;
        }
    }
}

int main() {
    freopen("in.txt", "r", stdin);
    for (int i = 1; i <= 10; i++) {
        cin >> N;
        cin >> x[0] >> y[0] >> x[N + 1] >> y[N + 1];
        for (int j = 1; j <= N; j++) {
            cin >> x[j] >> y[j];
        }
        memset(mask, 0, sizeof mask);
        ans = INT_MAX;
        solve(0, 0, 0);
        cout << "#" << i << " " << ans << endl;
    }
}
