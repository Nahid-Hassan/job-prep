#include<iostream>
using namespace std;

int main()
{
	float pm[100][100] = {0};
	float rm[100][100] = {0};
	int nodes, e, t;

	cin >> nodes>>e>>t;
	int x, y;
	for (int i = 0; i < e; i++)
	{
		cin >> x >> y;
		cin >> pm[x-1][y-1];
	}

	rm[0][0] = 1;

	for (int i = 0; i < t/10; i++)  // time
	{
		for (int j = 0; j < nodes ; j++)  // nodes
		{
			if (rm[i][j] > 0)
			{
				for (int k = 0; k < nodes; k++)
				{
					rm[i+1][k]  += rm[i][j]*pm[j][k];
				}
			}
		}
	}
	float ans = 0;
	int res;
	for (int i = 0; i < nodes; i++)
	{
		if (rm[t / 10][i] > ans)
		{
			ans = rm[t / 10][i];
			res = i;
		}
	}
	cout << res+1 <<" "<< ans << endl;
	return 0;
}
