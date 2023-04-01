#include <cstring>
#include <iostream>
using namespace std;

#define len 12
int dis[len][len];
int n;
int all_visited;
// dp state: mask: 1 << 12 = 4096, pos = n = 12
int dp[4096][12];

int tsm(int mask, int pos) {
    // base case: if all visited then return pos to start = 0
    if (all_visited == mask) return dis[pos][0];

    if (dp[mask][pos] != -1) {  // that means already calculated
        return dp[mask][pos];
    }

    int min_cost = INT32_MAX;
    for (int city = 0; city < n; city++) {
        int cost = 0;
        if ((mask & (1 << city)) == 0) {  // not visited
            cost = dis[pos][city] + tsm((mask | (1 << city)), city);
            min_cost = min(min_cost, cost);
        }
    }
    dp[mask][pos] = min_cost;
    return min_cost;
}

int main() {
    freopen("in.txt", "r", stdin);
    int testCase;
    cin >> testCase;

    while (testCase--) {
        cin >> n;

        // set dp
        memset(dp, -1, sizeof dp);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> dis[i][j];
            }
        }

        all_visited = (1 << n) - 1;  // 1111
        cout << tsm(1, 0) << endl;   // mask = 0001, pos = 0
    }
}