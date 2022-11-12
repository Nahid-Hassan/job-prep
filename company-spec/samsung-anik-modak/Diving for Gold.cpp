#include<iostream>
#include<stdio.h>
#include<string.h>
#define MX 105
using namespace std;

int cap, w, n;
int bin[MX], d[MX], v[MX];
int path[MX], mx = -1;

void update()
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(bin[i])
        {
            sum += v[i];
            if(sum > mx)
            {
                //cout<<sum<<endl;
                mx = sum;
                for(int j=0; j<n; j++)
                    path[i] = bin[i];
            }
        }
    }
}

void solve(int i, int sum)
{
    if(i==n)
    {
        update();
        return;
    }

    bin[i] = 0;
    solve(i+1, sum);

    bin[i] = 1;
    if(cap >= sum + 3*w*d[i])
        solve(i+1, sum + 3*w*d[i]);
}

int main()
{
    int flag = 0;
    freopen("input.txt","r",stdin);
    while(cin>>cap>>w)
    {
        if(flag++)
            cout<<"\n";

        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>d[i]>>v[i];
        }

        mx = -1;
        memset(path, 0, sizeof(path));
        memset(bin, 0, sizeof(path));
        solve(0, 0);

        int cnt = 0;
        for(int i=0; i<n; i++)
            if(path[i])
                cnt++;

        cout<<mx<<"\n"<<cnt<<"\n";
        for(int i=0; i<n; i++)
            if(path[i])
                cout<<d[i]<<" "<<v[i]<<"\n";
    }
    return 0;
}
