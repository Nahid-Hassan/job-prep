#include<bits/stdc++.h>
#define pii pair<int, int>
#define MX 30
using namespace std;

int n, m;
int vis[MX][MX], level[MX][MX];

int dx[] = {-1, 1, -1, 1, -2, -2, 2, 2};
int dy[] = {-2, -2, 2, 2, -1, 1, -1, 1};

bool isValid(int x, int y)
{
    if(x>=0 && x<n && y>=0 && y<m)
        return 1;
    return 0;
}

int bfs(int sx, int sy, int ex, int ey)
{
    queue<pii>q;
    q.push({sx, sy});
    vis[sx][sy] = 1;
    level[sx][sy] = 1;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x==ex && y==ey)
            return level[x][y];

        for(int i=0; i<8; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];

            if(isValid(xx, yy) && vis[xx][yy]==0)
            {
                q.push({xx, yy});
                vis[xx][yy] = 1;
                level[xx][yy] = level[x][y] + 1;
            }
        }
    }
    return -1;
}


int main()
{
    int t, cas = 0;
    cin>>t;

    while(t--)
    {
        int c, s, r, k;
        cin>>n>>m>>r>>c>>s>>k;

        memset(vis, 0, sizeof(vis));
        int ans = bfs(r, c, s, k);
        cout<<"Case #"<< ++cas <<"\n"<<ans<<"\n";
    }
    return 0;
}

