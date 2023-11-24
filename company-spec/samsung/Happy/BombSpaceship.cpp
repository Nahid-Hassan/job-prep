#include<bits/stdc++.h>
using namespace std;
int arr[100][5],ans;
void solve(int row,int col,int coin,int bomb,int effect){
    if(row==-1){
        ans=ans>coin?ans:coin;
        return;
    }
    for(int i=-1;i<=1;i++){
        if(col+i<0 || col+i>4) continue;
        if(arr[row][col+i]==0 || arr[row][col+i]==1 ){
            //no enemy
            if(bomb==1){
                solve(row-1,col+i,coin+arr[row][col+i],bomb,effect);
            }else{
                solve(row-1,col+i,coin+arr[row][col+i],bomb,effect-1);
            }
        }else{
            //enemy
            if(bomb==1){
                solve(row-1,col+i,coin,0,5);
            }else{
                if(effect>0)
                    solve(row-1,col+i,coin,bomb,effect-1);
            }
        }
    }
}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        ans=0;
        solve(n-1,2,0,1,0);
        printf("#%d\n",ans);
    }
}

