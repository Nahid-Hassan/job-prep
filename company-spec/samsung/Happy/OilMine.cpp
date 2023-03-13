#include<bits/stdc++.h>
#define MX 101
#define inf 9999999
using namespace std;
int n,c,arr[2*MX];
int a[MX],dp[MX][MX][2];

int solve(){
    int pre[n+1]={0};
    for(int i=1;i<=n;i++) pre[i]=pre[i-1]+a[i];

    for(int j=1;j<=n;j++){
        for(int k=1;k<=c;k++){
            if(k==1){
                dp[j][k][0]=pre[j];
                dp[j][k][1]=pre[j];
            }else{
                int tmp=inf;
                for(int l=j;l>=k;l--){
                    int mn=min(pre[j]-pre[l-1],min(dp[l-1][k-1][1],dp[l-1][k-1][1]));
                    int mx=max(pre[j]-pre[l-1],max(dp[l-1][k-1][1],dp[l-1][k-1][1]));
                    if(tmp>mx-mn){
                        tmp=mx-mn;
                        dp[j][k][0]=mn;
                        dp[j][k][1]=mx;
                    }
                }
            }
        }
    }
    return dp[n][c][1]-dp[n][c][0];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>c>>n;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            arr[n+i]=arr[i];
            arr[2*n+i]=arr[i];
        }
        if(c>n){
            cout<<"-1\n";
            continue;
        }
        int ans=inf;
        for(int i=1;i<=2*n;i++){
            int m=n+i-1;
            int id=0;
            for(int j=i;j<=m;j++){
                a[++id]=arr[j];
            }
            memset(dp,-1,sizeof dp);
            ans=min(ans,solve());
        }
        cout<<ans<<endl;
    }
}
