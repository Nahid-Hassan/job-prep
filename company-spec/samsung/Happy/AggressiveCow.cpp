#include<bits/stdc++.h>
using namespace std;
int arr[100];
bool isPossible(int n,int k, int dist){
    int pos=arr[0],cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]-pos>=dist){
            pos=arr[i];
            cnt++;
        }
    }
    if(cnt>=k) return true;
    return false;
}
int solve(int n,int k){
    sort(arr,arr+n);
    int left=arr[0];
    int right=arr[n-1];
    int ans=0,mid;
    while(left<=right){
        mid=(left+right)/2;
        if(isPossible(n,k,mid)){
            ans=mid>ans?mid:ans;
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return ans;
}
int main(){
    int t,n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int ans=solve(n,k);
        printf("#%d\n",ans);
    }
}
