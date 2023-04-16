#include <iostream>
#include <fstream>
#include <algorithm>
#include <set>
#define file ifstream cin("whereami.in"); ofstream cout("whereami.out");
using namespace std;

int main()
{
	//
	file
	int i, j, k, l, m, n, o, p;
	cin >> n;
	string s;
	cin >> s;
	bool b = true;
	for (k = 0; b ; k++)
	{
		set<string>ss;
		b = false;
		for (i = 0; i < n - k; i++)
		{
			string sl = s.substr(i, k + 1);
			int sz = ss.size();
			ss.insert(sl);
			if (ss.size() == sz)
			{
				b = true;
				break;
			}
		}
		//cout << ss.size() << '\n';
	}
	cout << k;
	/*
	10
IXMVDKIXMV
*/

	return 0;
}