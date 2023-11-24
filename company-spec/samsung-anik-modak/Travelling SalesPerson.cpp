#include<iostream>
#include<string.h>
#define MX 12
using namespace std;

int n, arr[MX][MX];
int dp[MX][1<<MX];

int turnOn(int x, int pos)
{
    return x | (1<<pos);
}

bool isOn(int x, int pos)
{
    return bool (x & (1<<pos));
}

int solve(int i, int mask)
{
    if(mask == (1<<n)-1)
        return arr[i][0];

    if(dp[i][mask] != -1)
        return dp[i][mask];

    int ans = 99999999;
    for(int j=0; j<n; j++)
    {
         if(isOn(mask, j)==0)
         {
            int tmp = solve(j, turnOn(mask, j)) + arr[i][j];
            ans = min(ans, tmp);
         }
    }
    return dp[i][mask] = ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }

        memset(dp, -1, sizeof(dp));
        int ans = solve(0, 1);
        cout<<ans<<"\n";
    }
    return 0;
}
