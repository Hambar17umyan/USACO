#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct cow {
	int s, t, c;
};

struct condit {
	int a, b, p, m;
};

cow cw[25];
condit cnd[15];

string to2(int msk, int n)
{
	string s = "";
	while (msk)
	{
		if (msk % 2)
			s += '1';
		else s += '0';
		msk /= 2;
	}
	int m = s.size();
	for (int i = 0; i < n - m; i++)
	{
		s += '0';
	}
	reverse(s.begin(), s.end());
	return s;
}
int b[105];
int main()
{
	int m, n, i, j, k, l;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		cin >> cw[i].s >> cw[i].t >> cw[i].c;
	for (i = 0; i < m; i++)
		cin >> cnd[i].a >> cnd[i].b >> cnd[i].p >> cnd[i].m;
	int res = -1;
	for (int msk = 1; msk < (1 << m); msk++)
	{
		string s = to2(msk, m);
		for (i = 0; i < 102; i++)
			b[i] = 0;
		k = 0;
		for (i = 0; i < s.size(); i++)
		{
			if (s[i] == '1')
			{
				for (j = cnd[i].a; j <= cnd[i].b; j++)
				{
					b[j] += cnd[i].p;
				}
				k += cnd[i].m;
			}
		}
		bool gg = true;
		for (i = 0; i < n && gg; i++)
		{
			for (j = cw[i].s; j <= cw[i].t; j++)
			{
				if (b[j] < cw[i].c)
				{
					gg = false;
					break;
				} 
			}
		}
		if (gg)
		{
			if (k < res || res == -1)
				res = k;
		}
	}
	cout << res << endl;

	return 0;
}