#include<iostream>
#include<string.h>
#include<stdio.h>
#define MX 1005
using namespace std;

int row, col, element;
int frnt = 0, rear = 0;
int vis[MX][MX], adj[MX][MX], level[MX][MX];

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

struct point
{
	int x, y;
} que[MX], loc[MX];

void init()
{
    frnt = rear = 0;
    memset(vis, 0, sizeof(vis));
}

void push(int a, int b)
{
	que[rear].x = a;
	que[rear].y = b;
	rear++;
}

void pop()
{
	frnt++;
}

bool isEmpty()
{
	return (frnt == rear);
}

bool isValid(int x, int y)
{
	if(x>=0 && x<row && y>=0 && y<col)
    	return 1;
	return 0;
}

int bfs(int sx, int sy, int vx, int vy)
{
	push(sx, sy);
	vis[sx][sy] = 1;
	level[sx][sy] = 0;

	while(!isEmpty())
	{
    	int xx = que[frnt].x;
    	int yy = que[frnt].y;
    	pop();

    	if(xx==vx && yy==vy)
            return level[xx][yy];

    	for(int i=0; i<4; i++)
    	{
        	int ux = xx + dx[i];
        	int uy = yy + dy[i];

        	if(vis[ux][uy]==0 && isValid(ux, uy) && adj[ux][uy]==1)
        	{
            	vis[ux][uy] = 1;
            	push(ux, uy);
            	level[ux][uy] = level[xx][yy] + 1;
        	}
    	}
	}
	return -1;
}


int main()
{
    freopen("input.txt","r",stdin);
	int t;
	cin>>t;

	while(t--)
	{
    	cin>>row>>element;
    	col = row;

    	for(int i=0; i<element; i++)
    	{
        	cin>>loc[i].x>>loc[i].y;
    	}

    	for(int i=0; i<row; i++)
    	{
        	for(int j=0; j<col; j++)
        	{
            	cin>>adj[i][j];
        	}
    	}

    	int mx, ans = 100000;
    	for(int i=0; i<row; i++)
    	{
        	for(int j=0; j<col; j++)
        	{
            	if(adj[i][j]==1)
            	{
            	    mx = 0;
            	    for(int k=0; k<element; k++)
                	{
                	    init();
                        mx = max(mx, bfs(i, j, loc[k].x-1, loc[k].y-1));
                        //cout<<mx<<endl;
                	}
                	ans = min(ans, mx);
            	}
        	}
    	}
    	cout<<ans<<"\n";
	}
	return 0;
}

/*
remember the indexing
5
5 2
4 3
3 4
1 1 0 0 0
1 1 0 0 0
1 1 1 1 1
1 1 1 0 1
1 1 1 1 1
8 2
5 6
6 4
1 1 1 1 1 1 0 0
1 1 1 1 1 1 1 0
1 1 0 1 0 1 1 0
1 1 1 1 0 1 1 0
1 1 1 1 1 1 1 0
1 1 1 1 1 1 1 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
10 3
8 2
5 3
7 1
0 0 0 1 1 1 1 1 1 0
1 1 1 1 1 1 1 1 1 0
1 0 0 1 0 0 0 0 1 0
1 1 1 1 1 1 1 1 1 1
1 1 1 1 0 1 0 0 1 1
1 1 1 1 0 1 0 0 1 1
1 1 1 1 0 1 0 0 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 0 0 1 0 0 1 1
1 1 1 1 1 1 1 1 1 1
15 4
11 15
15 9
1 2
14 3
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 0 1 1 1 1 1 1 1 1 1 1 1 0 1
1 0 1 0 0 0 1 0 0 0 0 1 1 0 1
1 0 1 0 0 0 1 0 0 0 0 1 1 0 1
1 0 1 1 1 1 1 1 1 1 1 1 1 1 1
1 0 1 0 0 0 1 0 0 0 0 1 1 0 1
1 0 1 0 0 0 1 1 1 1 1 1 1 1 1
1 0 1 0 0 0 1 0 0 0 0 1 1 0 1
1 0 1 0 0 0 1 0 0 0 0 1 1 0 1
1 0 1 0 0 0 1 0 0 0 0 1 1 0 1
1 0 1 0 0 0 1 0 0 0 0 1 1 0 1
1 0 1 0 0 0 1 0 0 0 0 1 1 0 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
0 0 1 0 0 0 1 1 1 1 1 1 1 0 1
0 0 1 1 1 1 1 1 1 1 1 1 1 1 1
20 4
13 6
20 4
1 2
17 16
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0
1 0 1 1 1 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0
1 0 1 0 0 0 0 0 0 0 1 0 0 1 1 0 0 0 0 0
1 0 1 0 0 0 0 0 0 0 1 0 0 1 1 0 0 0 0 0
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 0 0 0
1 0 1 0 0 0 0 0 0 0 1 0 0 1 1 1 0 0 0 0
1 0 1 0 0 0 0 0 0 0 1 0 0 1 1 1 0 0 0 0
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 0 1 0 0 0 0 0 0 0 1 0 0 1 1 1 0 0 1 1
1 0 1 0 0 0 0 0 0 0 1 0 0 1 1 1 0 0 1 1
1 0 1 0 0 0 0 0 0 0 1 0 0 1 1 1 0 0 1 1
1 0 1 0 0 0 0 0 0 0 1 0 0 1 1 1 0 0 1 1
1 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 0 1 1
1 0 1 0 0 0 0 0 0 0 1 0 0 0 1 1 0 0 1 1
1 0 1 0 0 0 0 0 0 0 1 0 0 0 1 1 0 0 1 1
1 0 1 0 0 0 0 0 0 0 1 0 0 0 1 1 0 0 1 1
1 0 1 0 0 0 0 0 0 0 1 0 0 0 1 1 0 0 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0

Output
#1 1
#2 2
#3 2
#4 12
#5 15


*/
