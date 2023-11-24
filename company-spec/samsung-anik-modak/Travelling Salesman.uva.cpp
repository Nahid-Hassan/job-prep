#include<iostream>
#include<string.h>
#define MX 103
#define INF 9999999
using namespace std;

int c, s, e, t;
int arr[MX][MX], vis[MX];
int dp[MX][MX*10];

int solve(int pos, int rem)
{
    if(rem==0)
    {
        if(vis[pos]==1)
            return 0;
        else
            return -INF;
    }

    if(dp[pos][rem] != -1)
        return dp[pos][rem];

    int ans = -INF;
    for(int i=0; i<c; i++)
    {
        if(i==pos)
            continue;
        ans = max(ans, arr[pos][i] + solve(i, rem-1));
    }
    //cout<<pos<<" "<<rem<<" "<<ans<<endl;
    return dp[pos][rem] = ans;
}


int main()
{
    while(cin>>c>>s>>e>>t)
    {
        if(c==0 && s==0 && e==0 && t==0)
            break;

        for(int i=0; i<c; i++)
            for(int j=0; j<c; j++)
                cin>>arr[i][j];

        memset(vis, 0, sizeof(vis));
        for(int i=0; i<e; i++)
        {
            int tmp;
            cin>>tmp;
            vis[--tmp] = 1;
        }

        memset(dp, -1, sizeof(dp));
        int ans = solve(s-1, t);
        cout<<ans<<"\n";
    }
    return 0;
}
