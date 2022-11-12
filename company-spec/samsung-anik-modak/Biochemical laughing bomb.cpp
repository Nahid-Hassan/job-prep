#include<iostream>
#include<stdio.h>
#include<string.h>
#include<queue>
#define pii pair<int, int>
#define MX 105
using namespace std;

int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };
int n, m, arr[MX][MX], level[MX][MX];

bool isValid(int x, int y)
{
    if(x >=0 && x < n && y >= 0 && y < n)
        return 1;
    return 0;
}

int bfs(int sx, int sy)
{
    int ans = 0;
    queue<pii>q;
    q.push({sx, sy});
    arr[sx][sy] = 2;
    level[sx][sy] = 1;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0; i<4; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];

            if(isValid(xx, yy) && arr[xx][yy]==1)
            {
                q.push({xx, yy});
                arr[xx][yy] = 2;
                level[xx][yy] = level[x][y] + 1;
                ans = level[xx][yy];
            }
        }
    }
    return ans;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		cin >> n >> m;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> arr[i][j];

		int x, y;
		cin >> x >> y;
		int ans = bfs(x-1, y-1);
		cout << ans << "\n";
	}
	return 0;
}

