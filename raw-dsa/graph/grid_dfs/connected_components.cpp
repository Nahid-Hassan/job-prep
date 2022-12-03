#include <bits/stdc++.h>
using namespace std;

int row, col;
int ar[1001][1001];
bool vis[1001][1001];

bool isValid(int x, int y) {
    if (x < 1 || x > row || y < 1 || y > col) return false;
    if (vis[x][y] == true || ar[x][y] == 0)   return false;
    return true;
}

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int global_count = 0;
void dfs(int x, int y) {
    vis[x][y] = 1;

    for (int i = 0; i <= 3; i++) {
        if (isValid(x + dx[i], y + dy[i])) {
            global_count++;
            dfs(x + dx[i], y + dy[i]);
        }
    }
}

int main() {
    freopen("connected_components.txt", "r", stdin);

    cin >> row >> col;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            cin >> ar[i][j];
        }
    }
    
    int count = 0;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            if (vis[i][j] == 0 and ar[i][j] == 1) {
                count++;
                global_count = 0;
                dfs(i, j);
                cout << global_count << endl;
            }
        }
    }

    cout << count << endl;

}