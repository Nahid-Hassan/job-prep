#include<bits/stdc++.h>

using namespace std;
int getMaxSore(int arr[], int l, int r, int n){
    int mscore=0;
    for(int i=l+1;i<r;i++){
        int cs=getMaxSore(arr,l,i,n)+getMaxSore(arr,i,r,n);
        if(l==0 && r==n){
            cs=cs+arr[i];
        }
        else{
            cs=cs+(arr[l]*arr[r]);
        }
        if(cs>mscore)
            mscore=cs;
    }
    return mscore;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+5];
    arr[0]=1;
    arr[n+1]=1;
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    cout<<getMaxSore(arr,0,n+1,n+1);
    return 0;
}
