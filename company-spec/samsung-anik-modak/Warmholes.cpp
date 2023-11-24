#include<iostream>
#include<stdlib.h>
#include<string.h>
#define MX 50
using namespace std;

int dist[MX], vis[MX];

struct point{
    int sx, sy, dx, dy, t;
}holes[MX];

int distance(int x1, int y1, int x2, int y2)
{
    int diff = abs(x1-x2) + abs(y1-y2);
    return diff;
}

int findMin(int n)
{
    int mn = 99999999, id = 0;
    for(int i=1; i<=n; i++)
    {
        if(!vis[i] && dist[i] < mn)
        {
            mn = dist[i];
            id = i;
        }
    }
    return id;
}

int solve(int n)
{
    for(int i=1; i<=n; i++)
    {
        int u = findMin(n);
        //cout<<u<<" "<<dist[u]<<endl;
        vis[u] = 1;

        for(int v=1; v<=n; v++)
        {
            if(v==u)
                continue;

            int tmp1 = dist[u] + distance(holes[u].dx, holes[u].dy, holes[v].sx, holes[v].sy) + holes[v].t;
            int tmp2 = dist[u] + distance(holes[u].dx, holes[u].dy, holes[v].dx, holes[v].dy);
            //cout<<v<<" "<<min(tmp1, tmp2)<<endl;

            if(!vis[v] && dist[v] > min(tmp1, tmp2))
                dist[v] = min(tmp1, tmp2);
        }
    }
    return dist[n];
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, m;
        cin>>n;

        int x0, y0, xn, yn;
        cin>>x0>>y0>>xn>>yn;

        m = 2 * n + 1;
        for(int i=1; i<m; i++)
        {
            int a, b, c, d, e;
            cin>>a>>b>>c>>d>>e;

            holes[i].sx = a, holes[i].sy = b, holes[i].dx = c, holes[i].dy = d, holes[i].t = e;
            i++;
            holes[i].sx = c, holes[i].sy = d, holes[i].dx = a, holes[i].dy = b, holes[i].t = e;
        }

        for(int i=1; i<m; i++)
        {
            int tmp1 = distance(x0, y0, holes[i].sx, holes[i].sy) + holes[i].t;
            int tmp2 = distance(x0, y0, holes[i].dx, holes[i].dy);
            dist[i] = min(tmp1, tmp2);
        }
        holes[m].sx = xn, holes[m].sy = yn, holes[m].dx = xn, holes[m].dy = yn, holes[m].t = 0;
        dist[m] = distance(x0, y0, xn, yn);

        memset(vis, 0, sizeof(vis));
        int ans = solve(m);
        cout<<ans<<"\n";
    }
    return 0;
}
