#include <iostream>
#include <fstream>
#define ll long long
#define in ifstream cin
#define out ofstream cout
using namespace std;

ll f[2010][2010];
int main()
{
	ll i, j, k, l, m, n, o, p;
	ll x, y;
	in("mowing.in");
	out("mowing.out");
	x = 1002;
	y = 1002;
	ll t = 1;
	ll res = -1;
	cin >> n;
	f[x][y] = 1;
	for (i = 0; i < n; i++)
	{
		char c;
		ll w;
		cin >> c >> w;
		k = t;
		for (j = 0; j < w; j++)
		{
			if (c == 'N')
			{
				x--;
			}
			else if (c == 'S')
			{
				x++;
			}
			else if (c == 'W')
			{
				y--;
			}
			else
			{
				y++;
			}
			if (f[x][y] == 0)
			{
				f[x][y] = t + 1;
			}
			else
			{
				if (t + 1 - f[x][y] < res || res == -1)
				{
					res = t + 1 - f[x][y];
				}
				f[x][y] = t + 1;
			}
			t++;
		}
	}
	cout << res;

	return 0;
}