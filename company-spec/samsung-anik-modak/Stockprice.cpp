#include<iostream>
using namespace std;

int main()
{
    int a[10] = {5, 3, 1, 4, 2, 7, 6};

    int mx, mn, ans = 0;
    mx  = 0;
    mn = 999999;
    for(int i=1; i<7; i++)
    {
        if(a[i-1] < a[i])
        {
            mx = max(mx, a[i]);
            mn = min(mn, a[i-1]);
        }
        ans = max(ans, mx-mn);
    }
    cout<<ans<<endl;
    return 0;
}
