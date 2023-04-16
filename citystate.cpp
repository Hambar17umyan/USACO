#include <fstream>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#define ll long long
using namespace std;


map<pair<string, string>, ll>mp;
int main()
{
	//
	file;
	ll i, j, k, l, m, n, o, p;
	cin >> n;
	ll ans = 0;
	for (i = 0; i < n; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		string a, b;
		a = s1.substr(0, 2);
		b = s2;
		ans += mp[make_pair(b, a)];
		mp[make_pair(a, b)]++;
	}
	cout << ans;

	return 0;
}