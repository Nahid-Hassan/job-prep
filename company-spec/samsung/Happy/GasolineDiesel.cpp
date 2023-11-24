/*
inputs
7
4
1 1 1 1
5
1 2 1 2 1
6
1 1 1 2 2 2
7
1 1 2 1 2 1 1
4
1 1 1 1
3
1 2 1
8
1 2 2 2 1 2 1 1
outputs
8
12
14
22
8
6
32
*/
#include<bits/stdc++.h>
using namespace std;
int n,ans,arr[100];
void solve(int cars,int cost,int pos, int type,int fuel){
    if(cost>ans) return;
    if(cars==n){
        ans=cost<ans?cost:ans;
        ans--;
        return;
    }
    int dir=(type==1)?1:-1;
    int refill=(type==1)?0:n+1;
    int refill_cost=(type==1)?pos:n-pos+1;
    if(pos==0){
        solve(cars,cost+1,1,1,2);
    }else if(pos==n+1){
        solve(cars,cost+1,n,2,2);
    }else{
        if(arr[pos]!=type){
            solve(cars,cost+1,pos+dir,type,fuel);
        }else{
            if(fuel>0){
                int x=arr[pos];
                arr[pos]=0;
                solve(cars+1,cost+1,pos+dir,type,fuel-1);
                solve(cars+1,cost+refill_cost,refill,0,0);
                arr[pos]=x;
            }
            solve(cars,cost+1,pos+dir,type,fuel);
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&arr[i]);
        }
        ans=INT_MAX;
        solve(0,0,0,1,2);
        printf("#%d\n",ans);
    }
}
