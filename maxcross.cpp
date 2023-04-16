#include <iostream>
#include <fstream>
#define ll long long
#define in ifstream cin
#define out ofstream cout
using namespace std;

bool arr[100005];
ll pref[100005];
int main()
{
	in("maxcross.in");
	out("maxcross.out");
	ll i, j, k, l, m, n, o, p;
	cin >> n >> k >> m;
	for (i = 0; i < m; i++)
	{
		cin >> o;
		arr[o - 1] = 1;
	}
	ll res = 1000000000000000;
	for (i = 0; i < n; i++)
	{
		if (i > 0)
			pref[i] = pref[i - 1];
		if (arr[i])
			pref[i]++;
	}
	res = pref[k - 1];
	for (i = k; i < n; i++)
	{
		l = pref[i - k];
		if (pref[i] - l < res)
			res = pref[i] - l;
	}
	cout << res;

	return 0;
}