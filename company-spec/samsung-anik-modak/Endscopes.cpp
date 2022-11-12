#include<iostream>
#include<string.h>
#include<stdio.h>
#define MX 1005

using namespace std;

int n, m, frnt = - 1, rear = -1;
int vis[MX][MX], level[MX][MX], arr[MX][MX];

struct node
{
    bool up, down, left, right;
} pipes[MX][MX];

struct point
{
    int x, y;
} que[1000005];

void push(int a, int b)
{
    if(frnt==-1)
        frnt = 0;
    rear++;
    rear = rear % 1000005;

    que[rear].x = a;
    que[rear].y = b;
    //cout<<level[a][b]<<endl;
}

void pop()
{
    frnt++;
    frnt = frnt % 1000005;
}

bool isEmpty()
{
    if(frnt==-1 || rear < frnt)
        return 1;
    return 0;
}

void init()
{
    memset(arr, 0, sizeof(arr));
    memset(vis, 0, sizeof(vis));
    memset(level, 0, sizeof(level));
}

bool isValid(int x, int y)
{
    if(x < n && y < m && x >= 0 && y >= 0)
        return 1;
    return 0;
}

int bfs(int r, int c, int l)
{
    if(arr[r][c]==0)
        return 0;

    push(r, c);
    vis[r][c] = 1;
    level[r][c] = 1;

    int ans = 1;
    while(!isEmpty())
    {
        int p = que[frnt].x;
        int q = que[frnt].y;
        pop();

        if(level[p][q] < l)
        {
            /* Row Up */
            if(isValid(p-1, q) && vis[p-1][q]==0 && pipes[p-1][q].down && pipes[p][q].up)
            {
                vis[p-1][q] = 1;
                level[p-1][q] = level[p][q] + 1;
                ans++;
                push(p-1, q);
            }
            /* Row down */
            if(isValid(p+1, q) && vis[p+1][q]==0 && pipes[p+1][q].up && pipes[p][q].down)
            {
                vis[p+1][q] = 1;
                level[p+1][q] = level[p][q] + 1;
                ans++;
                push(p+1, q);
            }
            /* Row left */
            if(isValid(p, q-1) && vis[p][q-1]==0 && pipes[p][q-1].right && pipes[p][q].left)
            {
                vis[p][q-1] = 1;
                level[p][q-1] = level[p][q] + 1;
                ans++;
                push(p, q-1);
            }
            if(isValid(p, q+1) && vis[p][q+1]==0 && pipes[p][q+1].left && pipes[p][q].right)
            {
                vis[p][q+1] = 1;
                level[p][q+1] = level[p][q] + 1;
                ans++;
                push(p, q+1);
            }
        }
    }
    return ans;
}

int main()
{
    //freopen("input.txt", "r", stdin);

    int t;
    cin>>t;

    while(t--)
    {
        int r, c, l;
        cin>>n>>m>>r>>c>>l;

        init();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];

                if( arr[i][j] == 1 )
                {
                    pipes[i][j].left = true;
                    pipes[i][j].right = true;
                    pipes[i][j].up = true;
                    pipes[i][j].down = true;
                }
                else if( arr[i][j] == 2 )
                {
                    pipes[i][j].left = false;
                    pipes[i][j].right = false;
                    pipes[i][j].up = true;
                    pipes[i][j].down = true;
                }
                else if( arr[i][j] == 3 )
                {
                    pipes[i][j].left = true;
                    pipes[i][j].right = true;
                    pipes[i][j].up = false;
                    pipes[i][j].down = false;
                }
                else if( arr[i][j] == 4 )
                {
                    pipes[i][j].left = false;
                    pipes[i][j].right = true;
                    pipes[i][j].up = true;
                    pipes[i][j].down = false;
                }
                else if( arr[i][j] == 5 )
                {
                    pipes[i][j].left = false;
                    pipes[i][j].right = true;
                    pipes[i][j].up = false;
                    pipes[i][j].down = true;
                }
                else if( arr[i][j] == 6 )
                {
                    pipes[i][j].left = true;
                    pipes[i][j].right = false;
                    pipes[i][j].up = false;
                    pipes[i][j].down = true;
                }
                else if( arr[i][j] == 7 )
                {
                    pipes[i][j].left = true;
                    pipes[i][j].right = false;
                    pipes[i][j].up = true;
                    pipes[i][j].down = false;
                }
                else
                {
                    pipes[i][j].left = false;
                    pipes[i][j].right = false;
                    pipes[i][j].up = false;
                    pipes[i][j].down = false;
                }
            }
        }

        int ans = bfs(r, c, l);
        cout<<ans<<"\n";
    }
    return 0;
}
