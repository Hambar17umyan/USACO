#include <iostream>
#include <fstream>
using namespace std;
#define file ifstream cin("blist.in"); ofstream cout("blist.out");

int s[1002], t[1002], b[1002];
int fn(int a, int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == a)
			return i;
	}
	return -1;
}
int main()
{

	file
		int i, j, k, m, n, l, tl = 0, mn = 1002, mx = 0;
	int res = 0;
	int free = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> s[i] >> t[i] >> b[i];
		if (mx < t[i])
		{
			mx = t[i];
		}
		if (mn > s[i])
		{
			mn = s[i];
		}
	}
	for (tl = mn; tl <= mx; tl++)
	{
		if (fn(tl, t, n) + 1)
		{
			i = fn(tl, t, n);
			free += b[i];
		}
		if (fn(tl, s, n) + 1)
		{
			i = fn(tl, s, n);
			if (free < b[i])
			{
				res += b[i] - free;
				free = 0;
			}
			else
			{
				free -= b[i];
			}
		}
	}
	cout << res;

	return 0;
}
