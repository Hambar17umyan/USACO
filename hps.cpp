#include <iostream>
#include <fstream>
#include <map>
#define ll long long
#define in ifstream cin
#define out ofstream cout
using namespace std;

map<char, ll> mp[100002];
char fmx(ll a, ll b, ll c)
{
	ll k = max(a, max(b, c));
	if (a == k)
		return 'H';
	if (b == k)
		return 'P';
	return 'S';
}
 int main()
{
	 in("hps.in");
	 out("hps.out");
	ll i, j, k, l, m, n, o, p;
	cin >> n;
	ll mx = 0;
	for (i = 0; i < n; i++)
	{
		char c;
		cin >> c;
		mp[i][c] = 1;
		if (i > 0)
		{
			mp[i]['H'] += mp[i - 1]['H'];
			mp[i]['P'] += mp[i - 1]['P'];
			mp[i]['S'] += mp[i - 1]['S'];
		}
	}
	for (i = 0; i < n; i++)
	{
		k = mp[i][fmx(mp[i]['H'], mp[i]['P'], mp[i]['S'])];
		ll a, b, c;
		a = mp[n - 1]['H'] - mp[i]['H'];
		b = mp[n - 1]['P'] - mp[i]['P'];
		c = mp[n - 1]['S'] - mp[i]['S'];
		/*if (i == n - 1)
		{
			a += mp[i]['H'];
			b += mp[i]['P'];
			c += mp[i]['S'];
		}*/
		if (k + max(a, max(b, c)) > mx)
			mx = k + max(a, max(b, c));
	}
	cout << mx;

	return 0;
}