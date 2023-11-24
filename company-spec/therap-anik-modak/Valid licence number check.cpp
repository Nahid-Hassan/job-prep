#include <bits/stdc++.h>
using namespace std;

map<string, bool> mp;

bool valid(string s)
{
    int cnt = 0;
    mp["Ka"] = mp["Kha"] = mp["Ga"] = mp["Gha"] = mp["UMA"] = 1;
    string tmp = "";
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='-')
        {
            cnt++;
            if(cnt==1 && !mp[tmp])
                return 0;
            if(cnt==2)
            {
                int num = 0;
                for(int j=0; j<tmp.size(); j++)
                {
                    if(isdigit(tmp[j]))
                        num = num * 10 + (tmp[j]-'0');
                    else
                        return 0;
                }
                if(num < 11 || num > 99)
                    return 0;
            }
            tmp = "";
        }
        else
            tmp.push_back(s[i]);
    }

    int num = 0;
    for(int j=0; j<tmp.size(); j++)
    {
        if(isdigit(tmp[j]))
            num = num * 10 + (tmp[j]-'0');
        else
            return 0;
    }
    if(cnt != 2 || num > 9999)
        return 0;

    return 1;
}

int main()
{
    cout<<"Enter Licence number: ";
    string str;
    cin>>str;

    if(valid(str))
        cout<<"Valid Number\n";
    else
        cout<<"Invalid Number\n";
    return 0;
}

