#include <bits/stdc++.h>
using namespace std;


int dx[] = {-1, 0, +1, 0};  // up, right, down, left
int dy[] = {0, +1, 0, -1};

queue<pair<int, int>> q;
bool vis[1001][1001] = {0};
int dist[1001][1001] = {0};

int N, M;

bool isValid(int x, int y) {
    if (x < 1 or y < 1 or x > N or y > M) return false;
    if (vis[x][y] == 1) return false;
    return true;
}

void bfs_grid(int x, int y) {
    q.push({x, y});
    vis[x][y] = 1;
    dist[x][y] = 0;

    while (!q.empty()) {
        int curx = q.front().first;
        int cury = q.front().second;

        q.pop();

        for (int i = 0; i <= 3; i++) {
            if (isValid(curx + dx[i], cury + dy[i])) {
                int newx = curx + dx[i];
                int newy = cury + dy[i];

                dist[newx][newy] = dist[curx][cury] + 1;
                vis[newx][newy] = 1;

                q.push({newx, newy});
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cout << dist[i][j] << " ";
        } cout << endl;
    }
}



int main() {
    int x, y;
    cin >> N >> M;
    cin >> x >> y;

    bfs_grid(x, y); // src = {x, y}
}