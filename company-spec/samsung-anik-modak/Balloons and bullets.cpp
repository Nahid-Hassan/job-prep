//leetode problem solutions
#include <iostream>
#include<vector>
#include<string.h>
#define MX 100
using namespace std;

int dp[305][305];

int solve(int i, int j, vector<int> &a)
{
    if(i > j)
        return 0;
    if(dp[i][j] >= 0)
        return dp[i][j];

    int mx = -1;
    for(int k=i; k<=j; k++)
    {
        int sum = a[i-1] * a[k] * a[j+1] + solve(i, k-1, a) + solve(k+1, j, a);
        //cout<<sum<<endl;
        dp[i][j] = mx = max(sum, mx);
    }
    return dp[i][j] = mx;
}

int maxCoins(vector<int>& nums)
{
    int n = nums.size();
    nums.push_back(1);
    nums.insert(nums.begin(), 1);

    memset(dp, -1, sizeof(dp));
    int ans = solve(1, n, nums);
    return ans;
}

int main()
{
    int n, a;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    int ans = maxCoins(v);
    cout<<ans<<"\n";

    return 0;
}
