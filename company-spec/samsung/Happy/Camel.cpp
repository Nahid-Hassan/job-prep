#include<bits/stdc++.h>
using namespace std;
int n,arr[100],vis[100],ans;
void solve(int flag,int cost,int cnt){
    if(cost>ans) return;
    if(cnt==n){
        ans=ans<cost?ans:cost;
        return;
    }
    if(flag){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(!vis[i] && !vis[j]){
                    vis[i]=vis[j]=1;
                    int tmp=max(arr[i],arr[j]);
                    solve(1-flag,cost+tmp,cnt+2);
                    vis[i]=vis[j]=0;
                }
            }
        }
    }else{
        for(int i=0;i<n;i++){
            if(vis[i]){
                vis[i]=0;
                solve(1-flag,cost+arr[i],cnt-1);
                vis[i]=1;
            }
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        ans=INT_MAX;
        memset(vis,0,sizeof vis);
        solve(1,0,0);
        printf("#%d\n",ans);
    }
}
