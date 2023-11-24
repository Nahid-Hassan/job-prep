#include<bits/stdc++.h>
using namespace std;
int N,arr[100],ans;
void solve(int cars,int cost,int pos,int type,int fuel){
    cout<<cars<<endl;
    if(cost>ans) return;
    if(cars==N){
        ans=(cost<ans)?cost:ans;
        ans--;
        return;
    }
    int dir=(type==1)?1:-1;
    int refill=(type==1)?0:N+1;
    int refill_cost=(type==1)?pos:N-pos+1;
    if(pos==0){
        solve(cars,cost+1,1,1,2);
    }else if(pos==N+1){
        solve(cars,cost+1,N,2,2);
    }else{
        if(type!=arr[pos]){
            solve(cars,cost+1,pos+dir,type,fuel);
        }else{
            if(fuel>0){
                //cout<<pos<<endl;
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
    cin>>t;
    while(t--){
        cin>>N;
        for(int i=1;i<=N;i++){
            cin>>arr[i];
        }
        ans=INT_MAX;
        solve(0,0,0,1,2);
        cout<<ans<<endl;

    }
}
