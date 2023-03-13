#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int N,C,cell[25][25],dist[25][25],vis[25][25];
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
bool isValid(int x,int y){
    return (x>0 && y>0 && x<=N && y<=N && !vis[x][y]
            && (cell[x][y]==1 || cell[x][y]==2));
}
int bfs(int sx,int sy){
    memset(dist,0,sizeof dist);
    memset(vis,0,sizeof vis);
    int cost=0,cnt=0;
    dist[sx][sy]=0;
    queue<pii>q;
    q.push(pii(sx,sy));
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        //cout<<x<<y<<endl;
        if(cell[x][y]==2){

            cnt++;
            cost=dist[x][y]>cost?dist[x][y]:cost;
            if(cnt==C){
                return cost;
            }
        }
        for(int i=0;i<4;i++){
            int tx=x+dx[i];
            int ty=y+dy[i];
            if(isValid(tx,ty)){
                q.push(pii(tx,ty));
                vis[tx][ty]=1;
                dist[tx][ty]=dist[x][y]+1;
            }
        }
    }
    return INT_MAX;
}
int main(){
    int t,x[5],y[5];
    scanf("%d",&t);
    while(t--){
        scanf("%d %d", &N ,&C);
        for(int i=0;i<C;i++){
            scanf("%d %d",&x[i],&y[i]);
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                scanf("%d",&cell[i][j]);
            }
        }
        for(int i=0;i<C;i++){
            cell[x[i]][y[i]]=2;
        }

        int ans=INT_MAX;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                if(cell[i][j]==1){
                    int cost=bfs(i,j);
                    //cout<<cost<<endl;
                    ans=cost<ans?cost:ans;
                }

            }
        }
        printf("#%d\n",ans);
    }
    return 0;
}
