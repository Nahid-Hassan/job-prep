#include<iostream>
#include<vector>
#define MX 1005
using namespace std;

vector<int> vis, par;
vector<int>adj[MX];

vector<int> vis, cir;
bool dfs(int s, vector<int>adj[])
{
    vis[s] = 1;
    cir[s] = 1;

    for(int i=0; i<adj[s].size(); i++)
    {
        int u = adj[s][i];
        //cout<<u<<endl;
        if(!vis[u] && dfs(u, adj))
            return 1;
        else if(cir[u])
            return 1;
    }
    cir[s] = 0;
    return 0;
}

bool isCyclic(int V, vector<int> adj[])
{
    vis.assign(V, 0);
    cir.assign(V, 0);

    for(int i=0; i<V; i++)
        if(!vis[i] && dfs(i, adj))
            return 1;
    return 0;
}

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
    }

    find_cycle(n);
    return 0;
}
