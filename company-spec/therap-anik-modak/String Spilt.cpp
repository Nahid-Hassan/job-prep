#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    vector<string>word;
    stringstream ss(str);

    string s;
    while (getline(ss, s, '-')) {
        word.push_back(s);
        cout<<s<<endl;
    }
    return 0;
}
