/*
IN COLLABORATION WITH MY FRIEND MOHIT PRESENTS  -> car fueling
script to generate test cases -> https://ideone.com/9e2nu0

TEST CASES

inputs
7
4
1 1 1 1
5
1 2 1 2 1
6
1 1 1 2 2 2
7
1 1 2 1 2 1 1
4
1 1 1 1
3
1 2 1
8
1 2 2 2 1 2 1 1
outputs
8
12
14
22
8
6
32
*/

#include<iostream>
using namespace std;

int n;
int ans;
int a[100];

void solve(int cars, int cost, int index, int type, int fuel)
{

    if(cost>ans)return; /* this condition is used to stop the unnecessary recursion */

    if(cars == n)
    {
        ans = min(ans,cost); /* base case when all cars are filled */
        return;
    }

    if(cost > 50)return;  /* this is done to stop the recursion */

    int temp;
    temp = (type == 1) ? 1 : -1; /* to check the  direction of robot */
    int cost2;
    cost2 = (type == 1) ? index : n-index + 1;
    int decide;
    decide = (type == 1) ? 0 : n+1;

    if(index == 0)
        solve(cars, cost+1,1, 1,2);
    else if(index == n+1)
        solve(cars, cost+1,n, 2,2);


    else
    {
        if(type != a[index])
        {
            solve(cars, cost+1, index + temp, type, fuel);
        }
        else
        {
            if(fuel>0)
            {
                int x  = a[index];
                a[index] = 0;

                /* fill the car and move in same direction */
                solve(cars + 1, cost + 1, index + temp, type, fuel-1);
                /* move the car back to same station after filling the car */
                solve(cars + 1, cost+cost2, decide, 0, 0);
                a[index] = x;
            }
            /* else cant be used here this is the heart of recursion
               if we have fuel and the type is same then also we can
               chose to move ahead. we can fill the the present cars
               later. in some test cases it will leads to less
               final distance covered
            */
            solve(cars, cost + 1, index + temp, type, fuel);
        }
    }

}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        for(int i = 1; i<=n; i++)cin>>a[i];

        ans = 100000;

        solve(0,0,0,1,2);
        cout<<ans-1<<endl;
    }
    return 0;
}
