#include<bits/stdc++.h>
#define mx 101
using namespace std;
int N,E,vis[mx],par[mx],maxi;
vector<int>AdjList[mx],cyc,ans;
void dfs(int i,int p){
    if(vis[i]){
        int cnt=1;
        cyc.push_back(i);
        for(int v=p;v!=i;v=par[v]){
            cnt++;
            cyc.push_back(v);
        }
        if(cnt<maxi){
            maxi=cnt;
            ans=cyc;
        }
        cyc.clear();
        return;
    }
    vis[i]=1;
    par[i]=p;
    int len=AdjList[i].size();
    for(int j=0;j<len;j++){
        int x=AdjList[i][j];
        dfs(x,i);
    }
    vis[i]=0;
}
void cycle(int node){
    memset(vis,0,sizeof vis);
    memset(par,-1,sizeof par);
    maxi=node;
    for(int i=1;i<=node;i++){
        if(!vis[i]) dfs(i,-1);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int x,y;
    cin>>N>>E;
    for(int i=0;i<E;i++){
        cin>>x>>y;
        AdjList[x].push_back(y);
    }
    cycle(N);
}
