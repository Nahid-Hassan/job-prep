#include<bits/stdc++.h>
using namespace std;

int concat(int a, int b)
{
    int i = 10;
    while(b >= i){
        i = i*10;
    }
    return a*i+b;
}

int main()
{
    int arr[5] = {54, 546, 548, 60, 59};
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(concat(arr[i], arr[j]) < concat(arr[j], arr[i]))
                swap(arr[i], arr[j]);
        }
    }

    for(int i=0; i<5; i++)
        cout<<arr[i];
    cout<<endl;
    return 0;
}
