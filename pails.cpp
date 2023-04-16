#include <iostream>
#include <fstream>
#define file ifstream cin("pails.in"); ofstream cout("pails.out");
using namespace std;

int main()
{
	file
	int i, j, k, l, m, n, o, p, x, y;
	cin >> x >> y >> m;
	int mx = 0;
	for (i = 0; i <= m / x; i++)
	{
		j = (m - i * x) / y;
		if (mx < i * x + j * y)
		{
			mx = i * x + j * y;
		}
	}
	cout << mx;

	return 0;
}