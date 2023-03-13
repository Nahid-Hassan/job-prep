#include<bits/stdc++.h>
using namespace std;
int adj[30][30],N,color[30];
bool bfs(int src){
    color[src]=1;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(adj[u][u]==1) return false;
        for(int v=0;v<N;v++){
            if(adj[u][v]==1){
                if(color[v]==-1){
                    color[v]=1-color[u];
                    q.push(v);
                }
                if(color[v]==color[u]) return false;
            }
        }
    }
    return true;
}
int main(){
    scanf("%d",&N);
    memset(adj,0,sizeof adj);
    memset(color,-1,sizeof color);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&adj[i][j]);
        }
    }
    bool flag=bfs(0);
    if(flag) printf("Yes\n");
    else printf("No\n");

    return 0;
}
