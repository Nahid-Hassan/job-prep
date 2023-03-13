//failed

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
    for(int i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            if(i>j) continue;
            int maxi=INT_MIN;
            for(int ind=i;ind<=j;ind++){
                int cost= dp[i][ind-1]+dp[ind+1][j];
                if(j==n && i==1) cost+=v[ind];
                else cost+=v[i-1]*v[j+1];
                maxi=max(maxi,cost);
            }
            dp[i][j]=maxi;
        }
    }
    return dp[1][n];
}
int main(){
     int n,x,mx=0;
     cin>>n;
     vector<int> v;
     for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
        mx=max(mx,x);
     }
     int ans=solve(v);
     cout<<ans<<endl;
     return 0;
}
