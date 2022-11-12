#include <iostream>
using namespace std;

int mp[11] = {0};

int solve(int num, int times)
{
    int cnt = 0;
    while (num)
    {
        int r = num % 10;
        if (mp[r])
            cnt++;
        num /= 10;
    }

    if (cnt >= times)
        return 1;
    return 0;
}

int main()
{
    int start, end;
    cin >> start >> end;

    int n, a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a] = 1;
    }

    int times;
    cin >> times;

    int cnt = 0;
    for (int i = start; i <= end; i++)
    {
        if (solve(i, times))
            cnt++;
    }
    cout << cnt << "\n";
    return 0;
}

