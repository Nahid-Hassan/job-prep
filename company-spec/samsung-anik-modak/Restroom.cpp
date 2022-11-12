#include<iostream>
#include<stdio.h>
using namespace std;

void solve(int n, int k, int arr[])
{
    for(int i=0; i<k; i++)
    {
        int cnt = 0, mx = 0, id = 0;
        for(int j=0; j<n; j++)
        {
            if(arr[j]==0)
                cnt++;
            else
                cnt = 0;

            if(cnt > mx)
            {
                mx = cnt;
                id = j;
            }
        }
        int f = id - mx + 1;
        int mid = (f+id)/2;
        arr[mid] = 1;
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        int arr[n];
        for(int i=0; i<n; i++)
            arr[i] = 0;

        solve(n, k, arr);
        for(int i=0; i<n; i++)
            cout<<arr[i];
        cout<<"\n";
    }
    return 0;
}
