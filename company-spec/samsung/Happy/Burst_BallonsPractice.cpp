#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int solve(vector<int> &v){
    memset(dp,0,sizeof dp);
    int n=v.size();
    v.push_back(1);
    v.insert(v.begin(),1);

    for(int i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            if(i>j) continue;
            int maxi=0;
            for(int ind=i;ind<=j;ind++){
                int cost=dp[i][ind-1]+dp[ind+1][j];
                int ans=v[i-1]*v[ind]*v[j+1]+cost;

                maxi=max(ans,maxi);
            }
            dp[i][j]=maxi;
        }
    }
    return dp[1][n];
}
int main(){
    int n,x;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int ans=solve(v);
    cout<<ans<<endl;

}
