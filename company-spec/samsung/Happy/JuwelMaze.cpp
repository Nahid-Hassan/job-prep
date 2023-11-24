#include<bits/stdc++.h>
#define mx 101
using namespace std;
int cell[mx][mx],ans[mx][mx];
int n,val;
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
void printAns(){
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<val<<endl;
}
bool isValid(int x,int y){
    return (x>=0 && y>=0 && x<n && y<n &&
             (cell[x][y]==0 || cell[x][y]==2));
}
void solve(int r,int c,int diamond){
    if(r==n-1 && c==n-1){
        if(diamond>val){
            val=diamond;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    ans[i][j]=cell[i][j];
                }
            }
        }
        return;
    }

    for(int i=0;i<4;i++){
        int x=r+dx[i];
        int y=c+dy[i];
        if(isValid(x,y)){
            int check=(cell[x][y]==2)?1:0;
            cell[x][y]=3;
            solve(x,y,diamond+check);
            cell[x][y]=(check==1)?2:0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>cell[i][j];
            }
        }
        val=0;
        cell[0][0]=3;
        solve(0,0,0);
        printAns();
    }
    return 0;
}
