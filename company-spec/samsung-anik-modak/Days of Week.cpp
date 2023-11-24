#include<iostream>
#include<stdio.h>

using namespace std;

string week[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

int dayOfWeek(int y, int m, int d)
{
	int t[] = { 12, 11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 12; i++)
	{
		int ans = t[i] * 2.6 - 0.2;
		t[i] = ans % 7;
	}

	int i = (y + y / 4 - y / 100 + y / 400 + t[m-1] + d) % 7;
	return i;
}

int main()
{
	int day, month, year;
	cin >> day >> month >> year;

	int ans = dayOfWeek(year, month, day);
	cout << week[ans] << "\n";
	return 0;
}
