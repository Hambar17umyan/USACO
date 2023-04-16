#include <iostream>
#include <fstream>
#define ll long long
#define in ifstream cin
#define out ofstream cout
using namespace std;

ll pref[50004];
ll arr[11] = {-1, -1, -1, -1, -1, -1, -1, -1, -1};
int main()
{
	ll i, j, k, l, m, n, o, p;
	in("div7.in");
	out("div7.out");
	cin >> n;
	l = 0;
	for (i = 0; i < n; i++)
	{
		cin >> k;
		if (i > 0)
		{
			pref[i] = pref[i - 1] + k;
		}
		else pref[i] = k;
		if (arr[pref[i] % 7] == -1)
			arr[pref[i] % 7] = i;
	}
	/*
	for (i = 0; i < n; i++)
	{

		cout << pref[i] << endl;;
	}
	*/
	ll res = 0;
	for (i = n - 1; i >= 0; i--)
	{
		k = pref[i] % 7;
		if (k == 0)
		{
			//cout << i + 1 << endl;
			if (i + 1 > res)
				res = i + 1;
		}
		if (i <= arr[k] || arr[k] == -1)
			continue;
		if (i - arr[k] > res)
			res = i - arr[k];
	}

	cout << res;

	return 0;
}