#include<iostream>
#include<string.h>
#include<stdio.h>
#define MX 105
using namespace std;

int row, col, mx = 0;
int ans[MX][MX], adj[MX][MX];;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

bool isValid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<col)
        return 1;
    return 0;
}

int dfs(int sx, int sy, int cnt)
{
    if(sx==row-1 && sy==row-1)
    {
        if(cnt > mx)
        {
            mx = cnt;
            for(int i=0; i<row; i++)
            {
                for(int j=0; j<col; j++)
                {
                    ans[i][j] = adj[i][j];
                }
            }
        }
    }

    for(int i=0; i<4; i++)
    {
        int ux = sx + dx[i];
        int uy = sy + dy[i];

        if(isValid(ux, uy) && (adj[ux][uy]==2 || adj[ux][uy]==0))
        {
            int check;
            if(adj[ux][uy]==2)
                check = 1;
            else
                check = 0;

            adj[ux][uy] = 3;
            dfs(ux, uy, cnt+check);

            if(check==1)
                adj[ux][uy] = 2;
            else
                adj[ux][uy] = 0;
        }
    }
}


int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;

    while(t--)
    {
        cin>>row;
        col = row;

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin>>adj[i][j];
            }
        }

        mx = 0;
        adj[0][0] = 3;
        dfs(0,0,0);

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<mx<<"\n";
    }
    return 0;
}

/*
remember the fucking indexing
2
5
0 0 0 2 0
2 1 0 1 2
0 0 2 2 0
0 1 0 1 2
2 0 0 0 0
6
0 1 2 1 0 0
0 1 0 0 0 1
0 1 2 1 2 1
0 2 0 1 0 2
0 1 0 1 0 1
2 0 2 1 0 0

output:
Case #1

3 0 3 3 3
3 1 3 1 3
3 0 3 2 3
3 1 3 1 3
3 3 3 0 3
6

Case #2

3 1 2 1 0 0
3 1 3 3 3 1
3 1 3 1 3 1
3 2 3 1 3 2
3 1 3 1 3 1
3 3 3 1 3 3
4
*/
