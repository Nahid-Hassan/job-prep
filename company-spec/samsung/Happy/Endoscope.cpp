#include<bits/stdc++.h>
using namespace std;
struct node{
    int x,y,l;
};
int m,n,vis[100][100],cell[100][100];
bool isValid(int x,int y){
    return (x>=0 && y>=0 &&x<m && y<n && cell[x][y]!=0 && !vis[x][y]);
}
bool isUp(int x,int y){
    return (cell[x][y]==1 || cell[x][y]==2 || cell[x][y]==4 || cell[x][y]==7);
}
bool isDown(int x,int y){
    return (cell[x][y]==1 || cell[x][y]==2 || cell[x][y]==5 || cell[x][y]==6);
}
bool isLeft(int x,int y){
    return (cell[x][y]==1 || cell[x][y]==3 || cell[x][y]==6 || cell[x][y]==7);
}
bool isRight(int x,int y){
    return (cell[x][y]==1 || cell[x][y]==3 || cell[x][y]==4 || cell[x][y]==5);
}
int solve(int sx,int sy,int len){
    memset(vis,0,sizeof vis);
    int cnt=0;
    queue<node>q;
    q.push({sx,sy,len});
    vis[sx][sy]=1;
    while(!q.empty()){
        int x=q.front().x;
        int y=q.front().y;
        int len=q.front().l;
        q.pop();
        if(len==0) continue;
        cnt++;
        if(isValid(x,y+1) && isRight(x,y) && isLeft(x,y+1)){
            vis[x][y+1]=1;
            q.push({x,y+1,len-1});
        }
        if(isValid(x,y-1) && isLeft(x,y) && isRight(x,y-1)){
            vis[x][y-1]=1;
            q.push({x,y-1,len-1});
        }
        if(isValid(x-1,y) && isUp(x,y) && isDown(x-1,y)){
            vis[x-1][y]=1;
            q.push({x-1,y,len-1});
        }
        if(isValid(x+1,y) && isDown(x,y) && isUp(x+1,y)){
            vis[x+1][y]=1;
            q.push({x+1,y,len-1});
        }
    }
    return cnt;

}
int main(){
    int t,sx,sy,len;
    cin>>t;
    while(t--){
        cin>>m>>n>>sx>>sy>>len;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>cell[i][j];
            }
        }
        int ans=solve(sx,sy,len);
        cout<<ans<<endl;
    }
}
