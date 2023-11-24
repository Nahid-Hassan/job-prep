#include<iostream>
using namespace std;

int solve(string s, int k)
{
    int l = 0, ans = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
            l++;
        else if(s[i]==')')
            l--;
        else if(l==k+1)
        {
            int temp = 0;
            int bit = (s[i] - '0');
            while(bit>=0 && bit<=9)
            {
                temp = temp * 10 + bit;
                i++;
                bit = (s[i] - '0');
            }
            //cout<<temp<<endl;
            ans += temp;
            i--;
        }
    }
    return ans;
}

int main()
{
    int k;
    cin>>k;

    string s;
    cin>>s;

    int ans = solve(s, k);
    cout<<ans<<"\n";
    return 0;
}
