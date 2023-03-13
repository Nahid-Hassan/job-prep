#include<bits/stdc++.h>
using namespace std;
struct gate{
    int loc,man;
}gates[4];
int n,ans,arr[100];
int findLeft(int ind){
    for(int i=ind;i>0;i--)
        if(arr[i]==0) return i;
    return INT_MAX;
}
int findRight(int ind){
    for(int i=ind+1;i<=n;i++)
        if(arr[i]==0) return i;
    return INT_MAX;
}
void solve(int x,int y,int z,int cost,int cur_gate){
    if(gates[cur_gate].man==0){
        if(cur_gate==x) cur_gate=y;
        else if(cur_gate==y) cur_gate=z;
        else{
            ans=(cost<ans)?cost:ans;
            return;
        }
    }

    int loc=gates[cur_gate].loc;
    int l=findLeft(loc);
    int r=findRight(loc);
    int d_l=abs(l-loc)+1;
    int d_r=abs(r-loc)+1;
    bool goLeft=true,goRight=true;
    if(d_l<d_r) goRight=false;
    if(d_l>d_r) goLeft=false;
    if(goLeft){
        arr[l]=1;
        gates[cur_gate].man--;
        solve(x,y,z,cost+d_l,cur_gate);
        gates[cur_gate].man++;
        arr[l]=0;
    }
    if(goRight){
        arr[r]=1;
        gates[cur_gate].man--;
        solve(x,y,z,cost+d_r,cur_gate);
        gates[cur_gate].man++;
        arr[r]=0;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=3;i++){
            scanf("%d",&gates[i].loc);
        }
        for(int i=1;i<=3;i++){
            scanf("%d",&gates[i].man);
        }
        ans=INT_MAX;
        memset(arr,0,sizeof arr);
        solve(1,2,3,0,1);
        solve(1,3,2,0,1);
        solve(2,1,3,0,2);
        solve(2,3,1,0,2);
        solve(3,1,2,0,3);
        solve(3,2,1,0,3);
        printf("#%d\n",ans);
    }
    return 0;
}
