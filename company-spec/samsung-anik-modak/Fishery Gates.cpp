#include<iostream>
#include<string.h>
#include <stdlib.h>
#include<stdio.h>
#define MX 1005
#define INF 99999999
using namespace std;

int n, val[4], pos[4];
int vis[MX], ans;

int posLeft(int id)
{
    for(int i=id-1; i>0; i--)
        if(vis[i]==0)
            return i;
    return INF;
}

int posRight(int id)
{
    for(int i=id; i<=n; i++)
        if(vis[i]==0)
            return i;
    return INF;
}

void solve(int x, int y, int z, int curr, int cost)
{
    if(cost > ans)
        return;

    if(val[curr]==0)
    {
        if(curr==x)
            curr = y;
        else if(curr==y)
            curr = z;
        else{
            ans = min(ans, cost);
            return;
        }
    }

    int l = posLeft(pos[curr]);
    int r = posRight(pos[curr]);
    int ll = abs(pos[curr] - l + 1), rr = abs(r - pos[curr] + 1);

    int dist, tmp = min(ll, rr);
    if(ll > rr)
        dist = r;
    else
        dist = l;

    if(val[curr]==1 && rr==ll)
    {
        vis[l] = 1;
        val[curr]--;
        solve(x, y, z, curr, cost+ll);
        val[curr]++;
        vis[l] = 0;

        vis[r] = 1;
        val[curr]--;
        solve(x, y, z, curr, cost+rr);
        val[curr]++;
        vis[r] = 0;
    }
    else
    {
        vis[dist] = 1;
        val[curr]--;
        solve(x, y, z, curr, cost+tmp);
        val[curr]++;
        vis[dist] = 0;
    }
}

int main()
{
    int t=1;
   // cin>>t;

    while(t--)
    {
        cin>>n;
        for(int i=1; i<4; i++)
            cin>>pos[i];
        for(int i=1; i<4; i++)
            cin>>val[i];

        ans = INF;
        memset(vis, 0, sizeof(vis));
        solve(1, 2, 3, 1, 0);
        memset(vis, 0, sizeof(vis));
        solve(1, 3, 2, 1, 0);
        memset(vis, 0, sizeof(vis));
        solve(2, 1, 3, 2, 0);
        memset(vis, 0, sizeof(vis));
        solve(2, 3, 1, 2, 0);
        memset(vis, 0, sizeof(vis));
        solve(3, 1, 2, 3, 0);
        memset(vis, 0, sizeof(vis));
        solve(3, 2, 1, 3, 0);
        cout<<ans<<"\n";
    }
    return 0;
}

/*
inputs
5
10
4 5
6 2
10 2
10
8 5
9 1
10 2
24
15 3
20 4
23 7
39
17 8
30 5
31 9
60
57 12
31 19
38 16
outputs
18
25
57
86
339
*/

