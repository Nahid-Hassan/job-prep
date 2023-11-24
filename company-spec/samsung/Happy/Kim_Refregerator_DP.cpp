//https://ideone.com/SlO2P5
#include<bits/stdc++.h>
#define inf 9999999
using namespace std;
int x[12],y[12];
int N,ans,mask[102];
int dp[(1<<11)][12];
int visAll;
int dist(int i,int j){
    return abs(x[i]-x[j])+abs(y[i]-y[j]);
}
int solve(int mask,int pos){
    if(pos==0 && mask==0) return 0;
    else if(pos==0) return inf;
    dp[mask][pos]=inf;
    for(int i=N;i>=0;i--){
        int bit=(1<<i);
        if((mask&bit)){
            dp[mask][pos]=min(dp[mask][pos],solve((mask^bit),i)+dist(pos,i));
        }
    }
    return dp[mask][pos];
}
int main(){
    for(int i=1;i<=10;i++){
        cin>>N;
        cin>>x[0]>>y[0]>>x[N+1]>>y[N+1];
        for(int j=1;j<=N;j++){
            cin>>x[j]>>y[j];
        }
        memset(dp,inf,sizeof dp);
        visAll=(1<<N+1)-1;
        int ans=solve(visAll,N+1);
        cout<<"#"<<i<<" "<<ans<<endl;
    }
}

