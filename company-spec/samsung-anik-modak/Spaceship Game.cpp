#include <iostream>
using namespace std;

int a[100][100];
int n;

bool valid(int r, int c)
{
    if(r<n && r>=0 && c<5 && c>=0)return true;
    return false;
}

int solve(int r, int c, int power, int effect)
{
    if(r<0)return 0;
    int ans = 0;
    int p = 0;
    for(int i = -1; i <=1; i++)
    {
        int y = c+i;
        int x = r-1;

        if(valid(x,y))
        {
            // enemy
            if(a[x][y] == 2)
            {
                if(power == 0 && effect >  0)
                {
                    p = solve(x,y,power,effect -1);
                }
                if(power == 1)
                {
                    p = solve(x,y,power-1,5);
                }
            }
            // not enemy
            if(a[x][y] == 1 ||a[x][y] == 0)
            {
                if(power == 0)
                    p = solve(x,y,power,effect-1);
                else
                    p = solve(x,y,power,5);
            }
        }
        ans = max(ans, p);
    }
    if(a[r][c] == 1)ans++;
    return ans;
}

int main()
{
    cin>>n;
    for(int i = 0; i<100; i++)
        for(int j =0; j<100; j++)
            a[i][j] = 0;

    for(int i =0; i<n; i++)
    {
        for(int j = 0; j<5; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<solve(n,2,1,0)<<endl;
    return 0;
}
