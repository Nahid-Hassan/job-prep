#include<iostream>
#include <cstdio>
#include<string.h>
#define MX 1005
using namespace std;

int dp[MX][35];
int p[MX], w[MX], mw[MX];
int n, g;

int solve(int i, int sum, int cost)
{
    int left, right;
    if(dp[i][sum] >= 0 )
       return dp[i][sum];

    if(i==n)
        return 0;

    left = solve(i+1, sum,  cost);

    if(sum+w[i] <= cost)
        right = p[i] + solve(i+1, sum+w[i], cost);
    else
        right = 0;
    return dp[i][sum] =  max(left, right);
}

int main()
{
    freopen("input.txt", "r", stdin);

    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>p[i]>>w[i];
        }
        cin>>g;

        long long ans = 0;
        for(int i=0; i<g; i++)
        {
            cin>>mw[i];
            memset(dp, -1, sizeof(dp));
            ans += solve(0, 0,  mw[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
