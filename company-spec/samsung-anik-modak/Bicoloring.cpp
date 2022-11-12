#include<iostream>
#include<stdio.h>
#include<string.h>
#define MX 205

int adj[MX][MX], vis[MX], leb[MX];
int inp_arr[MX];
int Rear, Front;

void init()
{
    memset(vis, 0, sizeof(vis));
    memset(leb, 0, sizeof(vis));
    memset(inp_arr, 0, sizeof(vis));
    Rear = -1, Front = -1;
}

void push(int n)
{
    if (Front == - 1)
        Front = 0;
    Rear = Rear + 1;
    inp_arr[Rear] = n;
}

int pop()
{
    return inp_arr[Front++];
}

bool isempty()
{
    if (Front == - 1 || Front > Rear)
        return 1;
    else
        return 0;
}

int bfs(int n)
{
    vis[0] = 1;
    leb[0] = 1;
    push(0);

    while(!isempty())
    {
        int u = pop();
        //printf("%d\n",u);
        for(int i=0; i<n; i++)
        {
            if(vis[i]==0 && adj[u][i]==1)
            {
                vis[i] = 1;
                leb[i] = 1 - leb[u];
                push(i);
            }
            else if(vis[i]==1 && adj[u][i]==1)
                if(leb[i]==leb[u])
                    return 0;
        }
    }
    return 1;
}

int main()
{
    int n, m;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;

        scanf("%d",&m);
        for(int i=0; i<m; i++)
        {
            int a, b;
            scanf("%d%d",&a,&b);
            adj[a][b] = 1;
            adj[b][a] = 1;
        }

        init();
        if(bfs(n))
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");

        for(int i=0; i<=n; i++)
        {
            memset(adj[i], 0, sizeof(adj[i]));
        }
    }
    return 0;
}
