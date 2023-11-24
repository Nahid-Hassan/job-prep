#include<iostream>
#include<algorithm>
#define MX 105
#define INF 99999999
using namespace std;

int dp[MX][MX], a[MX];
int solve(int n, int z)
{
    for(int i=1; i<=n; i++)
        dp[i][1] = a[i] * (n-i+1);

    for(int i=n; i>0; i--)
    {
        for(int j=2; j<=z; j++)
        {
            for(int k=i+1; k<=n; k++)
            {
                dp[i][j] = min(dp[i][j], dp[k][j-1]+(k-i)*a[i]);
                cout<<i<<j<<" "<<dp[k][j-1]+(k-i)*a[i]0<<endl;
            }
        }
    }

    int ans = INF;
    for(int i=1; i<=n; i++)
        ans = min(dp[i][z], ans);
    return ans;
}

void init(int n)
{
    for(int i = 0; i<=n; i++)
        for(int j =0; j<=n; j++)
            dp[i][j] = INF;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        for(int i =1; i<=n; i++)
            cin>>a[i];

        init(n);
        sort(a+1, a+n+1);
        int ans = solve(n, k);
        cout<<ans<<"\n";
    }
    return 0;
}
