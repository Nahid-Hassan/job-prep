#include<bits/stdc++.h>
using namespace std;
int arr[100];

void printAns(int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
void solve(int n,int k){
    memset(arr,0,sizeof arr);
    for(int person=1;person<=k;person++){
        int len=0,ans=0,last;
        for(int i=0;i<n;i++){
            if(arr[i]==0) len++;
            if(arr[i]==1) len=0;
            if(len>=ans){
                ans=len;
                last=i;
            }
        }
        int st=last-ans+1;
        int mid=(st+last)/2;
        arr[mid]=1;
    }
}
int main(){
    int t,n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        solve(n,k);
        printAns(n);
    }
    return 0;
}
