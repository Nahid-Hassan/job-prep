#include <bits/stdc++.h>
using namespace std;

queue<int> q;
bool vis[1000] = {0};
int dist[1000] = {0};

vector<vector<int>> adj;

void bfs(int src) {
    q.push(src);
    vis[src] = 1;
    dist[src] = 0;

    while(!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int v : adj[curr]) {
            if (vis[v] == 0) {
                vis[v] = 1;
                dist[v] = dist[curr] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    // take input graph
    // graph can be directed or undirected....
}