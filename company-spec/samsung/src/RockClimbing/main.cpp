#include <cstring>
#include <iostream>
using namespace std;

#define len 20
int cell[len][len];
int viz[len][len];
int m, n;
int k;
bool flag;

bool isValid(int x, int y) {
    return (x >= 0 and y >= 0 and x < m and y < n and cell[x][y] != 0 and !viz[x][y]);
}

void solve(int x, int y) {
    viz[x][y] = 1;

    if (cell[x][y] == 3) {
        flag = true;
        return;
    }

    if (isValid(x, y + 1)) {
        solve(x, y + 1);
    }

    if (isValid(x, y - 1)) {
        solve(x, y - 1);
    }

    for (int i = 1; i <= k; i++) {
        if (isValid(x - i, y)) {
            solve(x - i, y);
        }
    }

    for (int i = 1; i <= k; i++) {
        if (isValid(x + i, y)) {
            solve(x + i, y);
        }
    }
}

int main() {
    // freopen("in.txt", "r", stdin);

    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cell[i][j];
        }
    }

    flag = false;
    for (k = 0; k <= m; k++) {
        memset(viz, 0, sizeof viz);
        solve(m - 1, 0);
        if (flag) {
            cout << k << endl;
            break;
        }
    }
}