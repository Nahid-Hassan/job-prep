#include<iostream>
#include<string.h>
#include<queue>
#define pii pair<int, int>
#define MX 1005
using namespace std;

int n, m;
int arr[MX][MX], vis[MX][MX], lev[MX][MX];

struct point{
    int up, down, left, right;
}pipe[MX][MX];

bool isValid(int x, int y)
{
    if(x < n && y < m && x >= 0 && y >= 0 && !vis[x][y])
        return 1;
    return 0;
}

int bfs(int x, int y, int l)
{
    int ans = 1;
    queue<pii> q;
    q.push({x, y});
    vis[x][y] = 1;
    lev[x][y] = 1;

    while(!q.empty())
    {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        if(lev[r][c] < l)
        {
            if(isValid(r+1, c) && pipe[r+1][c].up && pipe[r][c].down)
            {
                q.push({r+1, c});
                vis[r+1][c] = 1;
                lev[r+1][c] = lev[r][c] + 1;
                ans++;
            }
            if(isValid(r-1, c) && pipe[r-1][c].down && pipe[r][c].up)
            {
                q.push({r-1, c});
                vis[r-1][c] = 1;
                lev[r-1][c] = lev[r][c] + 1;
                ans++;
            }
            if(isValid(r, c+1) && pipe[r][c+1].left && pipe[r][c].right)
            {
                q.push({r, c+1});
                vis[r][c+1] = 1;
                lev[r][c+1] = lev[r][c] + 1;
                ans++;
            }
            if(isValid(r, c-1) && pipe[r][c-1].right && pipe[r][c].left)
            {
                q.push({r, c-1});
                vis[r][c-1] = 1;
                lev[r][c-1] = lev[r][c] + 1;
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x, y, l;
        cin>>n>>m>>x>>y>>l;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];

                if( arr[i][j] == 1 )
                {
                    pipe[i][j].left = true;
                    pipe[i][j].right = true;
                    pipe[i][j].up = true;
                    pipe[i][j].down = true;
                }
                else if( arr[i][j] == 2 )
                {
                    pipe[i][j].left = false;
                    pipe[i][j].right = false;
                    pipe[i][j].up = true;
                    pipe[i][j].down = true;
                }
                else if( arr[i][j] == 3 )
                {
                    pipe[i][j].left = true;
                    pipe[i][j].right = true;
                    pipe[i][j].up = false;
                    pipe[i][j].down = false;
                }
                else if( arr[i][j] == 4 )
                {
                    pipe[i][j].left = false;
                    pipe[i][j].right = true;
                    pipe[i][j].up = true;
                    pipe[i][j].down = false;
                }
                else if( arr[i][j] == 5 )
                {
                    pipe[i][j].left = false;
                    pipe[i][j].right = true;
                    pipe[i][j].up = false;
                    pipe[i][j].down = true;
                }
                else if( arr[i][j] == 6 )
                {
                    pipe[i][j].left = true;
                    pipe[i][j].right = false;
                    pipe[i][j].up = false;
                    pipe[i][j].down = true;
                }
                else if( arr[i][j] == 7 )
                {
                    pipe[i][j].left = true;
                    pipe[i][j].right = false;
                    pipe[i][j].up = true;
                    pipe[i][j].down = false;
                }
                else
                {
                    pipe[i][j].left = false;
                    pipe[i][j].right = false;
                    pipe[i][j].up = false;
                    pipe[i][j].down = false;
                }
            }
        }

        memset(vis, 0, sizeof(vis));
        int ans = bfs(x, y, l);
        cout<<ans<<"\n";
    }
    return 0;
}

