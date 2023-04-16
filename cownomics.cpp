#include <fstream>
#include <algorithm>
#include <iostream>
#include <string>
#include <set>
using namespace std;

#define file ifstream cin("cownomics.in"); ofstream cout("cownomics.out");

string s1[102], s2[102];
int main()
{
	file
	int i, j, k, l, m, n, o, p;
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		cin >> s1[i];
	}
	for (i = 0; i < n; i++)
	{
		cin >> s2[i];
	}
	int sum = 0;
	for (i = 0; i < m; i++)
	{
		set<int>st;
		bool b = true;
		for (j = 0; j < n; j++)
		{
			st.insert(s1[j][i]);
		}
		for (j = 0; j < n; j++)
		{
			k = st.size();
			st.insert(s2[j][i]);
			if (k == st.size())
			{
				b = false;
				break;
			}
			st.erase(s2[j][i]);
		}
		sum += b;
	}
	cout << sum;

	return 0;
}