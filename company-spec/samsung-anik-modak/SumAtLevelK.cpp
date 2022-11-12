#include<iostream>
#include<stdio.h>
using namespace std;

int solve(char str[], int k)
{
    int i = 0, l = -1, ans = 0;
    while(str[i] != '\0')
    {
        if(str[i]=='(')
            l++;
        else if(str[i]==')')
            l--;
        else if(l==k)
            ans += (str[i]-'0');
        i++;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char str[1005];
        cin>>str;

        int n;
        cin>>n;

        int ans = solve(str, n);
        cout<<ans<<"\n";
    }
    return 0;
}
