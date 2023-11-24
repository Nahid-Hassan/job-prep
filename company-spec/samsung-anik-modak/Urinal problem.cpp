#include<iostream>
#include<stdio.h>
using namespace std;

void solve(int n, int k, int arr[])
{
    for(int i=0; i<k; i++)
    {
        int l = 0, cnt = 0, ans = 0;
        for(int j=0; j<n; j++)
        {
            if(arr[j]==0)
                cnt++;
            else
                cnt = 0;

            if(cnt > ans)
            {
                ans = cnt;
                l = j;
            }
        }
        int f = l - ans + 1;
        int mid = (f+l)/2;
        arr[mid] = 1;
    }
}

int main()
{
    freopen("input.txt","r",stdin);
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

/*
It is a well-researched fact that men in a restroom generally prefer to maximize their distance from already occupied stalls, by occupying the middle of the longest sequence of unoccupied places

10
10 1
10 2
10 3
10 4
10 5
10 6
10 7
10 8
10 9
10 10
output is the following

0000100000
0000100100
0100100100
0100100110
0100110110
0110110110
0110110111
0110111111
0111111111
1111111111

VERIFIED AND TESTED
*/
