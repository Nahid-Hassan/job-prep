#include<bits/stdc++.h>
#define mx 101
using namespace std;
int n,adj[mx][mx],dp[999][mx];
int visAll;
int TSM(int mask,int pos){
    if(mask==visAll) return adj[pos][0];
    if(dp[mask][pos]!=-1) return dp[mask][pos];
    int ans=INT_MAX;
    for(int city=0;city<n;city++){
        int bit=(1<<city);
        if((mask&bit)==0){
            int newAns=adj[pos][city]+TSM((mask|bit),city);
            ans=min(ans,newAns);
        }
    }
    return dp[mask][pos]=ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>adj[i][j];
            }
        }
        visAll=(1<<n)-1;
        memset(dp,-1,sizeof dp);
        int ans=TSM(1,0);
        cout<<ans<<endl;
    }
}
