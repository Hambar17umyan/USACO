#include <iostream>
#include <fstream>
#define ll long long
#define in ifstream cin
#define out ofstream cout
using namespace std;

ll arr[100005];
ll pref[100005][5];
int main()
{
	ll i, j, k, l, m, n, o, p;
	in("bcount.in");
	out("bcount.out");
	cin >> n >> m;
	cin >> arr[0];
	pref[0][arr[0] - 1] = 1;
	for (i = 1; i < n; i++)
	{
		pref[i][0] = pref[i - 1][0];
		pref[i][1] = pref[i - 1][1];
		pref[i][2] = pref[i - 1][2];
		cin >> arr[i];
		pref[i][arr[i] - 1]++;
	}
	for (i = 0; i < m; i++)
	{
		cin >> o >> p;
		o--;
		p--;
		if (o == 0)
		{
			cout << pref[p][0] << ' ' << pref[p][1] << ' ' << pref[p][2] << endl;
		}
		else
		{
			cout << pref[p][0] - pref[o - 1][0] << ' ' << pref[p][1] - pref[o - 1][1] << ' ' << pref[p][2] - pref[o - 1][2] << endl;
		}
	}

	return 0;
}