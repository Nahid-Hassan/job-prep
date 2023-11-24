#include<iostream>
#include<string.h>
#include<stdio.h>
#define MX 105
#define INF 1000000

using namespace std;

int cost[MX], time[MX];
int dp[4040][1010][5];

int solve(int h, int d, int n)
{
    if(h < 0 || n==0)
        return INF;

    if(d==0)
        return 0;

    if (dp[h][d][n] != -1)
        return dp[h][d][n];

    return dp[h][d][n] = min(solve(h, d, n-1), time[n-1] + solve(h-cost[n-1], d-1, n));
}

int main()
{
    freopen("input.txt","r",stdin);
    int n, h, d;
    cin>>n>>h>>d;

    for(int i=0; i<n; i++)
    {
        int c, t;
        cin>>c>>t;
        cost[i] = c, time[i] = t;
    }

    memset(dp, -1, sizeof(dp));
    int ans = solve(h, d, n);
    cout<<ans<<"\n";
    return 0;
}

/*
you are a marathoner. you want to break previous record.
you have given 5 speed and corresponding stamina loss (ex: Speed1: 3 min 20 sec per unit, stamina loss1: 15).
it is possible switch between speed after one unit interval.
your total stamina H(1<=H<=160), you have to run distance D(1<=D<=40).
find minimum time to finish marathon within your stamina(you can't run with stamina<=0).*/
