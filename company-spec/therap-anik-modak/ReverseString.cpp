#include<bits/stdc++.h>
using namespace std;

void Reverse(string str, int k)
{
    if(k==str.size())
        return;
    Reverse(str, k+1);
    cout<<str[k];
}

int main()
{
    string str;
    cin>>str;

    Reverse(str, 0);
    cout<<endl;
    return 0;
}
