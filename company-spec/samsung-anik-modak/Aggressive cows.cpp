#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int c)
{
    int low = 0, high = a[n-1], best = 0;
    while(low <= high)
    {
        int mid = (low + high + 1)/2;
        int cnt = 1, pre = 0;
        for(int i=0; i<n && cnt < c; i++)
        {
            if(a[i]-a[pre] >= mid)
            {
                pre = i;
                cnt++;
            }
        }

        if(cnt >= c)
        {
            best = mid;
            low = mid + 1;
        }
        else
            high = mid -1;
    }
    return best;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;

    while(t--)
    {
        int n, c;
        cin>>n>>c;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a, a+n);
        int ans = binarySearch(a, n, c);
        cout<<ans<<"\n";
    }
    return 0;
}
