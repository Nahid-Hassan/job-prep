#include<bits/stdc++.h>
using namespace std;

void reverse(string &s, int k)
{
    static int i = 0;
    if(s.size()==k)
        return;
    reverse(s, k+1);
    if(i<=k)
        swap(s[i++], s[k]);
}

int main()
{
    string str;
    cin>>str;
    reverse(str, 0);
    cout<<str<<endl;
    return 0;
}
