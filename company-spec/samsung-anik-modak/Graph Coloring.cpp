#include<iostream>
#include<stdio.h>
#include<string.h>
#define MX 105

using namespace std;

int n, m;
int frnt, rear;
int que[MX], adj[MX][MX], vis[MX];

void init()
{
    frnt = rear = 0;
    memset(vis, -1, sizeof(vis));
}

void push(int data)
{
    que[rear++] = data;
}

int pop()
{
    return que[frnt++];
}

bool isempty()
{
    return (frnt==rear);
}

int bfs(int s)
{
    push(s);
    vis[s] = 1;

    while(!isempty())
    {
        int u = pop();
        for(int i=0; i<n; i++)
        {
            if(vis[i]==-1 && adj[u][i]==1)
            {
                vis[i] = 1 - vis[u];
                push(i);
            }
            else if(adj[u][i]==1)
            {
                if(vis[i]==vis[u])
                    return 0;
            }
        }
    }
    return 1;
}

int main()
{
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a, b;
        scanf("%d%d",&a,&b);
        adj[a][b] = 1;
        adj[b][a] = 1;
    }

    init();
    if(bfs(0))
    {
        cout<<"YES\n";
        for(int i=0; i<n; i++)
        {
            if(vis[i] != -1)
                cout<<i<<" ";
        }
        cout<<"\n";
    }
    else
        cout<<"-1\n";
    return 0;
}
