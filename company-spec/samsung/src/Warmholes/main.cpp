#include <cstring>
#include <iostream>
using namespace std;

#define len 100
int weights[len][5];
int mask[len];
int n, ans;

int dist(int sx, int sy, int dx, int dy) {
    return abs(sx - dx) + abs(sy - dy);
}

void warmwhole(int sx, int sy, int dx, int dy, int cost) {
    if (cost > ans) return;
    ans = min(ans, cost + dist(sx, sy, dx, dy));

    for (int i = 0; i < n; i++) {
        if (!mask[i]) {
            mask[i] = 1;

            // (sx, sy) to warmwhole source: (weights[i][0], weights[i][1]) + weights[i][4]
            int temp = dist(sx, sy, weights[i][0], weights[i][1]) + weights[i][4];
            warmwhole(weights[i][2], weights[i][3], dx, dy, cost + temp);

            // now if any condition warmwhole weights is greater than normal case
            temp = dist(sx, sy, weights[i][2], weights[i][3]) + weights[i][4];
            warmwhole(weights[i][0], weights[i][1], dx, dy, cost + temp);

            mask[i] = 0;
        }
    }
}

int main() {
    // freopen("in.txt", "r", stdin);
    int testCase;
    cin >> testCase;

    while (testCase--) {
        cin >> n;  // number of warm-wholes

        int sx, sy, dx, dy;  // source (x, y) and destination (x, y)
        cin >> sx >> sy >> dx >> dy;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> weights[i][j];
            }
        }
        memset(mask, 0, sizeof mask);
        ans = dist(sx, sy, dx, dy);  // set initial answer

        warmwhole(sx, sy, dx, dy, 0);
        cout << ans << endl;
    }
}