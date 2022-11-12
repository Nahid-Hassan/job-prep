#include<iostream>
#include<string.h>
#define MX 10005
#define INF 999999
using namespace std;

int n, arr[MX];
int vis[MX], ans;

void solve(int lor, int cost, int cnt)
{
    if(cost > ans)
        return;

    if(cnt==n)
    {
        ans = min(ans, cost);
        return;
    }

    if(lor)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(vis[i]==0 && vis[j]==0)
                {
                    vis[i] = vis[j] = 1;
                    int tmp = max(arr[i], arr[j]);
                    solve(1-lor, cost+tmp, cnt+2);
                    vis[i] = vis[j] = 0;
                }
            }
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(vis[i])
            {
                vis[i] = 0;
                solve(1-lor, cost+arr[i], cnt-1);
                vis[i] = 1;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>arr[i];

        ans = INF;
        memset(vis, 0, sizeof(vis));
        solve(1, 0, 0);
        cout<<ans<<"\n";
    }
    return 0;
}
