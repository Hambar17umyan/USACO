#include <iostream>
#include <fstream>
#define ll long long
#define in ifstream cin
#define out ofstream cout
using namespace std;


int main()
{
	ll i, j, k, l, m, n, o, p;
	in("censor.in");
	out("censor.out");
	string s, t;
	cin >> s >> t;
	n = s.size();
	m = t.size();
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'N')
			continue;
		k = i;
		if (s[i] == t[0])
		{
			bool b = true;
			string str = s;
			l = m + k;
			o = 0;
			if (l <= n)
			{
				for (i = k; i < l; i++)
				{
					if (s[i] == 'N')
					{
						l++;
						o++;
						if (l > n)
						{
							b = false;
							i = k;
							break;
						}
						continue;
					}
					if (s[i] != t[i - k - o])
					{
						b = false;
						i = k;
						break;
					}
					str[i] = 'N';
				}
				if (b)
				{
					s = str;
					i -= 2 * m;
					if (i < 0)
						i = -1;
					continue;
				}
			}
			else break;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (s[i] != 'N')
			cout << s[i];
	}

	return 0;
}