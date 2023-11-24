#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000][100],arr[100],n;
int solve(int p1,int p2,int i,int limit){
    if(p1>limit || p2>limit || i>n) return -1;
    if(dp[p1][p2][i]!=-1) return dp[p1][p2][i];
    if(p1==p2) dp[p1][p2][i]=max(p1,dp[p1][p2][i]);
    dp[p1][p2][i]=max(dp[p1][p2][i],solve(p1,p2,i+1,limit));
    dp[p1][p2][i]=max(dp[p1][p2][i],solve(p1+arr[i],p2,i+1,limit));
    dp[p1][p2][i]=max(dp[p1][p2][i],solve(p1,p2+arr[i],i+1,limit));
    return dp[p1][p2][i];
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        memset(dp,-1,sizeof dp);
        int ans=solve(0,0,0,sum/2);
        printf("#%d\n",ans);
    }
    return 0;
}
