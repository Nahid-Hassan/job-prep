#include<bits/stdc++.h>
using namespace std;

string binary(int n)
{
    string str = "";
    while(n)
    {
        char ch = (n%2)+'0';
        n = n/2;
        str.push_back(ch);
    }
    reverse(str.begin(), str.end());
    return str;
}

int main()
{
    int n;
    cin>>n;

    string ans = binary(n);
    cout<<ans<<"\n";
    return 0;
}
