#include<bits/stdc++.h>
#define MX 101
#define inf 9999999
using namespace std;
int dp[MX][MX];
int solve(vector<int> &v){
    memset(dp,0,sizeof dp);
    int n=v.size();
    v.insert(v.begin(),1);
    v.push_back(1);

    for(int i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            if(i>j) continue;
            int maxi=0;
            for(int ind=i;ind<=j;ind++){
                int cost=dp[i][ind-1]+dp[ind+1][j];
                if(i==1 && j==n){
                    cost+=v[ind];
                }else{
                    cost+=v[i-1]*v[j+1];
                }
                maxi=max(cost,maxi);
            }
            dp[i][j]=maxi;
        }
    }
    return dp[1][n];
}
int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>v;
        for(int i=1;i<=n;i++){
            cin>>x;
            v.push_back(x);
        }
        int ans=solve(v);
        cout<<ans<<endl;
    }
     return 0;
}
