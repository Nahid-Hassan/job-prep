#include <bits/stdc++.h>
using namespace std;

int row, col;
bool viz[1001][1001];


bool isValid(int x, int y) {
    if (x < 1 || x > row || y < 1 || y > col) return false;
    if (viz[x][y]) return false;

    return true;
}

/*
void dfs1(int x, int y) {
    viz[x][y] = 1;

    cout << x << " " << y << endl;

    // below four conditions is for if side is consider as edges
    if (isValid(x-1, y)) dfs(x-1,y);
    if (isValid(x, y+1)) dfs(x,y+1);
    if (isValid(x+1, y)) dfs(x+1,y);
    if (isValid(x, y-1)) dfs(x,y-1);

    // if corner is consider for edges then add two more conditions

}
*/

// using dx and dy array
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(int x, int y) {
    viz[x][y] = 1;

    cout << x << " " << y << endl;
    for (int i = 0; i <= 3; i++) {
        if (isValid(x + dx[i], y + dy[i])) dfs(x+dx[i], y+dy[i]);
    }
}

int main() {
    cin >> row >> col;

    dfs(1,1);
}