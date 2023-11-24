#include<bits/stdc++.h>
using namespace std;
int solve(string s, int k){
    int lev=-1,i=0,sum=0;
    int n=s.size();
    while(s[i]!='\0' && i<n){
        //cout<<i<<endl;
        if(s[i]=='(') lev++;
        else if(s[i]==')') lev--;
        else{
            int tmp=0;
            if(lev==k){
                int d=s[i]-'0';
                while(d>=0 && d<=9){
                    tmp=tmp*10+d;
                    i++;
                    d=s[i]-'0';
                }
                i--;
                sum+=tmp;
            }
        }
        i++;
    }
    return sum;
}
int main(){
    int k;
    string s;
    cin>>k;
    cin>>s;
    int ans=solve(s,k);
    cout<<ans<<endl;
}
