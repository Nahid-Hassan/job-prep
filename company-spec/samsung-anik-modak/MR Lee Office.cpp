#include <iostream>
#include<string.h>
#include <climits>
#define MAX_N 10
#define INF 10619567
using namespace std;

int w[MAX_N][MAX_N], n;
int mem[MAX_N][1<<MAX_N];

int turnOn(int x, int pos)
{
    return x | (1<<pos);
}

bool isOn(int x, int pos)
{
    return (bool)(x & (1<<pos));
}

int f(int i, int mask)
{
    if (mask == (1<<n) - 1)
    {
        return w[i][0];
    }

    if (mem[i][mask] != -1)
    {
        return mem[i][mask];
    }

    int ans = INF;
    for (int j = 0; j < n; j++)
    {
        if (w[i][j] == INF) continue;

        if (isOn(mask, j) == 0)
        {
            int result = f(j, turnOn(mask, j)) + w[i][j];
            ans = min(ans, result);
        }
    }
    return mem[i][mask] = ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin>>n;
        cout<< (1<<n) <<endl;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> w[i][j];
                if(w[i][j]==0)
                    w[i][j] = INF;
            }

        memset(mem, -1, sizeof(mem));
        int ans = f(0, 1);
        cout << ans << "\n";
    }
    return 0;
}

