#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#define MX 15
using namespace std;

vector<int>adj[MX], ans;
int vis[MX], par[MX], mx = 999999;

void dfs(int u, int p)
{
    if(vis[u]==1)
    {
        int sum = u;
        vector<int> cycle;
        cycle.push_back(u);

        for(int v = p; v != u; v = par[v])
        {
            //cout<<v<<endl;
            cycle.push_back(v);
            sum += v;
        }
        if(sum < mx)
        {
            ans = cycle;
            mx = sum;
        }
        return;
    }

    vis[u] = 1;
    par[u] = p;

    for(int i=0; i<adj[u].size(); i++)
    {
        int v = adj[u][i];
        dfs(v, u);
    }
    vis[u] = 0;
}

void findCycle(int n)
{
    memset(vis, 0, sizeof(vis));
    memset(par, -1, sizeof(par));

    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
            dfs(i, -1);
    }

    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
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

    findCycle(n);
    return 0;
}
