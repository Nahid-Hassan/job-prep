#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int solve(vector<int> &v){
    int n=v.size();
    v.push_back(1);
    v.insert(v.begin(),1);
    memset(dp,0,sizeof dp);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(i>j) continue;
            int maxi=INT_MIN;
            for(int ind=i;ind<=j;ind++){
                int score=v[i-1]*v[ind]*v[j+1]
                    +dp[i][ind-1]+dp[ind+1][j];
                maxi=max(score,maxi);
            }
            dp[i][j]=maxi;
        }
    }
    return dp[1][n];
}

int main(){
    int t,n,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        vector<int> v;
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            v.push_back(x);
        }
        int ans=solve(v);
        printf("#%d\n",ans);
    }
    return 0;
}
