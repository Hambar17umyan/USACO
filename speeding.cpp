#include <iostream>
#include <fstream>
#define files ifstream cin("speeding.in"); ofstream cout("speeding.out");
using namespace std;

int sp[103];

int main()
{
	files
	int i, j, k, m, n, o = 0, p = 0;
	cin >> n >> m;
	int mx = 0;
	for (i = 0; i < n; i++)
	{
		int l, s;
		cin >> l >> s;
		for (j = o; j < o + l; j++)
		{
			sp[j] = s;
		}
		o += l;
	}
	for (i = 0; i < m; i++)
	{
		int l, s;
		cin >> l >> s;
		for (j = p; j < p + l; j++)
		{
			if (sp[j] < s)
			{
				if (mx < s - sp[j])
				{
					mx = s - sp[j];
				}
			}
		}
		p += l;
	}
	cout << mx;

	return 0;
}