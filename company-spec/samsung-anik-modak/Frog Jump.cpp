#include<iostream>
#include<string.h>
#include<queue>
#define pii pair<int, int>
#define MX 105
using namespace std;

int row, col;
int vis[MX][MX], adj[MX][MX], level[MX][MX];

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

bool isValid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<col)
        return 1;
    return 0;
}

int bfs(int sx, int sy, int ex, int ey)
{
    queue<pii>q;
    q.push({sx, sy});
    vis[sx][sy] = 1;
    level[sx][sy] = 0;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x==ex && y==ey)
            return level[x][y];

        for(int i=0; i<4; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];

            if(isValid(xx, yy) && vis[xx][yy]==0)
            {
                q.push({xx, yy});
                vis[xx][yy] = 1;

                if(yy==y)
                    level[xx][yy] = level[x][y] + 1;
                else
                    level[xx][yy] = level[x][y];
            }
        }
    }
    return -1;
}


int main()
{
    cin>>row>>col;
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            cin>>adj[i][j];

    int sx, sy, ex, ey;
    cin>>sx>>sy>>ex>>ey;

    int ans = bfs(sx, sy, ex, ey);
    cout<<ans<<endl;
    return 0;
}


