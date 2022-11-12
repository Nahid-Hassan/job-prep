// Samsung.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<stdio.h>
#include<string.h>
#define MX 105
using namespace std;

int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };
int n, m, arr[MX][MX];

int frnt = -1, rear = -1;
int level[MX][MX];

struct point {
	int x, y;
}que[MX];

void push(int a, int b)
{
	if (frnt == -1)
		frnt = 0;
	rear++;

	que[rear].x = a;
	que[rear].y = b;
}

void pop()
{
	frnt++;
}

bool isEmpty()
{
	if (frnt == -1 || rear < frnt)
		return 1;
	return 0;
}

bool isValid(int x, int y)
{
	if (x < m && y < n && x >= 0 && y >= 0)
		return 1;
	else
		return 0;
}

int bfs(int sx, int sy)
{
	int ans = 0;
	push(sx, sy);
	arr[sx][sy] = 1;
	level[sx][sy] = 1;

	while (!isEmpty())
	{
		int xx = que[frnt].x;
		int yy = que[frnt].y;
		pop();

		for (int i = 0; i < 4; i++)
		{
			int ux = xx + dx[i];
			int uy = yy + dy[i];

			if (isValid(ux, uy) && arr[ux][uy]==1)
			{
				level[ux][uy] = level[xx][yy] + 1;
				arr[ux][uy] = 2;
				push(ux, uy);
				ans = level[ux][uy];
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
