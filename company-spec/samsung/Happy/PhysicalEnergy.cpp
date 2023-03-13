#include<bits/stdc++.h>
#define inf 9999999
using namespace std;
int dp[4010][1010][10];
int solve(int H,int D,int k,int cost[],int time[]){
    if(H<0 || k<0) return inf;
    if(D==0) return 0;
    if(dp[H][D][k]!=-1) return dp[H][D][k];
    dp[H][D][k]=min(solve(H,D,k-1,cost,time),time[k]+solve(H-cost[k],D-1,k,cost,time));
    return dp[H][D][k];
}
int main(){
    int H=14;
    int cost[]={4,5,2,3,6};
    int time[]={200,210,230,235,215};
    memset(dp,-1,sizeof dp);
    int ans=solve(H,5,4,cost,time);
    cout<<ans<<endl;

}
