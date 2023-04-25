#include <bits/stdc++.h>
using namespace std;

#define len 20
int cell[len][len];
bool viz[len][len]; 
int k, m, n;
bool flag;


int main() {
    freopen("in.txt", "r", stdin);

    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cell[i][j];
        }
    }
    flag = false;
    for (int k = 0; k <= m; k++) {
        memset(viz, 0, sizeof viz);
        // solve(m-1, 0);
    }
}