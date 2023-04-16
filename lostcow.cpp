#include <iostream>
#include <fstream>
#define file ifstream cin("lostcow.in"); ofstream cout("lostcow.out");
using namespace std;

int main()
{
	//
	file
		int i, j, k, l, m, n, o, p, x, y;
	cin >> x >> y;
	l = y - x;
	int res = 1;
	k = -2;
	if (l == 1)
	{
		cout << 1;
		return 0;
	}
	else if (l == 0)
	{
		cout << 0;
		return 0;
	}
	while (true)
	{
		if (l < 0)
		{
			if (k < 0)
			{
				if (k <= l)
				{
					res += abs(l) + abs(k) / 2;
					break;
				}
				else
				{
					res += abs(k) + abs(k) / 2;
				}
			}
			else
			{
				res += abs(k) + abs(k) / 2;
			}
		}
		else
		{
			if (k > 0)
			{
				if (k >= l)
				{
					res += abs(l) + abs(k) / 2;
					break;
				}
				else
				{
					res += abs(k) + abs(k) / 2;
				}
			}
			else
			{
				res += abs(k) + abs(k) / 2;
			}
		}
		k *= -2;
	}
	cout << res;

	return 0;
}