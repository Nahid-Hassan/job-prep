#include<iostream>
#include<string.h>
#define MX 10000005
using namespace std;

bool vis[MX];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, a;
        cin>>n;

        memset(vis, 0, sizeof(vis));
        for(int i=0; i<n; i++)
        {
            cin>>a;
            vis[a] = 1;
        }

        int ans = n+1;
        for(int i=1; i<=n; i++)
        {
            if(!vis[i])
            {
                ans = i; // ans array use for all missing
                break;// this code for smallest positive
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
