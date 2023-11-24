#include<iostream>
#include<string.h>
#define MX 105
using namespace std;

int n, arr[MX];
int dp[999][999][MX];

int solve(int p1, int p2, int i, int mx_p)
{
    if(p1 > mx_p || p2 > mx_p || i > n)
        return -1;

    if(dp[p1][p2][i] != -1)
        return dp[p1][p2][i];

    if(p1==p2)
        dp[p1][p2][i] = max(dp[p1][p2][i], p1);

    dp[p1][p2][i] = max(dp[p1][p2][i], solve(p1, p2, i+1, mx_p));
    dp[p1][p2][i] = max(dp[p1][p2][i], solve(p1+arr[i], p2, i+1, mx_p));
    dp[p1][p2][i] = max(dp[p1][p2][i], solve(p1, p2+arr[i], i+1, mx_p));
    return dp[p1][p2][i];
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }

        memset(dp, -1, sizeof(dp));
        int ans = solve(0, 0, 0, sum/2);
        cout<<ans<<"\n";
    }
    return 0;
}
