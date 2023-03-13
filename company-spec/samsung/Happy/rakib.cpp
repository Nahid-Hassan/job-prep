#include<bits/stdc++.h>
#define MX 101
#define inf 9999999
using namespace std;
int dp[50][50];
int solve(vector<int> &v){
    int n=v.size();
    v.push_back(1);
    v.insert(v.begin(),1);
    memset(dp,0,sizeof dp);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            int cost;
            int k = j + i - 1;
            for(int ind=j;ind<=k;ind++){

                cost= dp[j][ind-1]+dp[ind+1][k];
                if(j ==1 && k==n){
                    cost += v[ind];
                }
                else cost = cost + v[j-1]*v[k+1];
                dp[j][k]=max(dp[j][k],cost);
            }

        }
    }
    return dp[1][n];
}
int main(){
     int n,x;
     cin>>n;
     vector<int> v;
     for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
     }
     int ans=solve(v);
     cout<<ans<<endl;
     return 0;
}
