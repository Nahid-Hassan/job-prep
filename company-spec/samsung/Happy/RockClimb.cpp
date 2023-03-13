#include<bits/stdc++.h>
using namespace std;
struct node{
    int x,y,l;
};
int m,n,vis[100][100],cell[100][100];
int flag,k;
bool isValid(int x,int y){
    return (x>=0 && y>=0 &&x<m && y<n && cell[x][y]!=0 && !vis[x][y]);
}
void solve(int x,int y){
    vis[x][y]=1;
    if(cell[x][y]==3){
        flag=1;
        return;
    }
    if(isValid(x,y+1)){
        solve(x,y+1);
    }
    if(isValid(x,y-1)){
        solve(x,y-1);
    }
    for(int i=1;i<=k;i++){
        if(isValid(x-i,y)){
            solve(x-i,y);
        }
    }
    for(int i=1;i<=k;i++){
       if(isValid(x+i,y)){
            solve(x+i,y);
        }
    }
}
int main(){
    int t,sx,sy,len;
    //cin>>t;
        cin>>m>>n;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>cell[i][j];
            }
        }
        flag=0;
        for(k=0;k<=m;k++){
            memset(vis,0,sizeof vis);
            solve(m-1,0);
            if(flag){
                cout<<k<<endl;
                break;
            }
        }
}
