#include<bits/stdc++.h>
#define inf 9999999
using namespace std;
int N,C,arr[2*101],a[101],dp[101][101][2];
int solve(){
    memset(dp,-1,sizeof dp);
    int pre[N+1]={0};
    for(int i=1;i<=N;i++) pre[i]=pre[i-1]+a[i];

    for(int j=1;j<=N;j++){
        for(int k=1;k<=C;k++){
            if(k==1){
                dp[j][k][1]=pre[j];
                dp[j][k][0]=pre[j];
            }else{
                int tmp=inf;
                for(int l=j;l>=k;l--){
                    int mx=max(pre[j]-pre[l-1],max(dp[l-1][k-1][1],dp[l-1][k-1][0]));
                    int mn=min(pre[j]-pre[l-1],min(dp[l-1][k-1][1],dp[l-1][k-1][0]));
                    if(mx-mn<tmp){
                        tmp=mx-mn;
                        dp[j][k][1]=mx;
                        dp[j][k][0]=mn;
                    }
                }
            }
        }
    }
    return dp[N][C][1]-dp[N][C][0];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>C>>N;
        for(int i=1;i<=N;i++){
            cin>>arr[i];
            arr[2*N+i]=arr[N+i]=arr[i];
        }

        int ans=inf;
        for(int i=1;i<=2*N;i++){
            int m=N+i-1;
            int id=0;
            for(int j=i;j<=m;j++){
                a[++id]=arr[j];
            }
            ans=min(ans,solve());
        }
        cout<<ans<<endl;
    }
    return 0;
}
