#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define len 1000
vector<int> adj[len];
bool visited[len];

bool dfs(int node, int parent) {
    visited[node] = true;

    for (auto child : adj[node]) {
        if (visited[child] == false) {
            if (dfs(child, node) == true) return true;
        } else {
            if (child != parent) return true;
        }
    }
    return false;
}

int main() {
    int n, m;

    cin >> n >> m;  // vertices, edges

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(visited, false, sizeof visited);
    int isCycle = dfs(1, -1);  // dfs(node, parent)

    isCycle ? cout << "Cycle Detected\n" : cout << "Cycle not found\n"; 

    return 0;
}