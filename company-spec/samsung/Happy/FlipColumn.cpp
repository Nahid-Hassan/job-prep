#include<bits/stdc++.h>
using namespace std;
int arr[20][20];
int m,n,ans;
void flip(int m,int n,int i){
    for(int j=0;j<m;j++){
        arr[j][i]=1-arr[j][i];
    }
}
void solve(int m,int n,int k){
    if(k==0){
        int cnt=0;
        for(int i=0;i<m;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(arr[i][j]==1) c++;
            }
            if(c==n) cnt++;
        }
        ans=cnt>ans?cnt:ans;
        return;
    }
    for(int i=0;i<n;i++){
        flip(m,n,i);
        solve(m,n,k-1);
        flip(m,n,i);;
    }
}
int main(){
    int k;
    scanf("%d %d %d",&m,&n,&k);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    ans=0;
    solve(m,n,k);
    printf("%d\n",ans);
    return 0;
}
