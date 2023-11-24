#include<bits/stdc++.h>
using namespace std;
int N,arr[100],dp[999][999][100];
int solve(int p1,int p2,int i,int limit){
    if(p1>limit || p2>limit || i>N) return -1;
    if(dp[p1][p2][i]!=-1) return dp[p1][p2][i];
    if(p1==p2) dp[p1][p2][i]=max(dp[p1][p2][i],p1);
    dp[p1][p2][i]=max(dp[p1][p2][i],solve(p1,p2,i+1,limit));
    dp[p1][p2][i]=max(dp[p1][p2][i],solve(p1+arr[i],p2,i+1,limit));
    dp[p1][p2][i]=max(dp[p1][p2][i],solve(p1,p2+arr[i],i+1,limit));
    return dp[p1][p2][i];
}
int main(){
    int t,sum;
    cin>>t;
    while(t--){
        cin>>N;
        sum=0;
        for(int i=0;i<N;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        memset(dp,-1,sizeof dp);
        int ans=solve(0,0,0,sum/2);
        cout<<ans<<endl;
    }
    return 0;
}
