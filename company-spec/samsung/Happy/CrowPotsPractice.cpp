#include<bits/stdc++.h>
#define inf 9999999
using namespace std;
int arr[100],dp[100][100];
int solve(int n,int z){
    memset(dp,-1,sizeof dp);
    for(int i=1;i<=n;i++){
        dp[i][1]=(n-i+1)*arr[i];
    }
    for(int i=n;i>0;i++){
        for(int j=2;j<=z;j++){
            for(int k=i+1;k<=n;k++){
                dp[i][j]=min(dp[i][j],dp[k][j-1]+(k-i)*arr[i]);
            }
        }
        int ans=inf;
        for(int i=1;i<=n;i++){
            ans=min(ans,dp[i][z]);
        }
        return ans;
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int ans=solve(n,k);
    cout<<ans<<endl;
    return 0;
}
