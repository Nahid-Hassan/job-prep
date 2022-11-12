#include<iostream>
#include<string.h>
#define MX 1005
using namespace std;

int dp[MX][MX];
int solve(int n, int k)
{
    if(k==0 || n==k)
        return 1;

    if(dp[n][k] >= 0)
        return dp[n][k];

    return dp[n][k] = solve(n-1, k-1) + solve(n-1, k);
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    memset(dp, -1, sizeof(dp));
    int ans = solve(2*n, n)/(n+1);
    cout<<ans<<endl;
}
