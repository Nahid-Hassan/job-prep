#include<iostream>
#define MX 16
using namespace std;

int mx = 0;
int arr[MX][MX];

void flip(int n, int m, int j)
{
    for(int i=0; i<n; i++)
    {
        arr[i][j] = 1 - arr[i][j];
    }
}

void solve(int n, int m, int k)
{
    if(k == 0)
    {
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            int cnt = 0;
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]==1)
                    cnt++;
            }
            //cout<<cnt<<endl;
            if(cnt==m)
               ans++;
        }
        //cout<<ans<<endl;
        mx = max(mx, ans);
        return;
    }

    for(int i=0; i<m; i++)
    {
        flip(n, m, i);
        //cout<<k<<endl;
        solve(n, m, k-1);
        flip(n, m, i);
    }
}

int main()
{
    int n, m, k;
    cin>>n>>m>>k;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    solve(n, m, k);
    cout<<mx<<endl;
    return 0;
}
