#include<bits/stdc++.h>
using namespace std;
int n,w[100][5],mask[100],ans;
int dist(int sx,int sy,int tx,int ty){
    return abs(sx-tx)+abs(sy-ty);
}
void wormwhole(int sx,int sy,int tx,int ty,int cost){
    if(cost>ans) return;
    ans=min(ans,cost+dist(sx,sy,tx,ty));
    for(int i=0;i<n;i++){
        if(!mask[i]){
            mask[i]=1;
            int tmp=dist(sx,sy,w[i][0],w[i][1])+w[i][4];
            wormwhole(w[i][2],w[i][3],tx,ty,cost+tmp);
            tmp=dist(sx,sy,w[i][2],w[i][3])+w[i][4];
            wormwhole(w[i][0],w[i][1],tx,ty,cost+tmp);
            mask[i]=0;
        }
    }
}
int main(){
    int t,sx,sy,tx,ty;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>sx>>sy>>tx>>ty;
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                cin>>w[i][j];
            }
        }
        memset(mask,0,sizeof mask);
        ans=dist(sx,sy,tx,ty);
        wormwhole(sx,sy,tx,ty,0);
        cout<<ans<<endl<<endl;

    }
}
