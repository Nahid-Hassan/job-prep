#include<bits/stdc++.h>
using namespace std;

bool valid(string s)
{
    if(s.size()==10)
    {
        for(int i=0; i<s.size(); i++)
            if(!isdigit(s[i]))
                return 0;
        return 1;
    }
    else if(s.size()==12)
    {
        for(int i=0; i<s.size(); i++)
        {
           if(i==3 || i==8)
           {
               if(s[i] != '-')
                  return 0;
           }
           else if(!isdigit(s[i]))
                return 0;
        }
        return 1;
    }
    else
        return 1;
}

int main()
{
    string str;
    cin>>str;

    if(valid(str))
        cout<<"Valid Number\n";
    else
        cout<<"Invalid Number\n";
    return 0;
}
