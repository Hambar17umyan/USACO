#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

vector<ll>arr, v;
ll p[200005];
map<ll, ll>mp;
int main()
{
	int i, j;
	int n;
	cin >> n;
	ll t = 0;
	ll w = 0;
	for (i = 0; i < n; i++)
	{
		arr.push_back(1);
		cin >> arr[i];
		v.push_back(arr[i]);
	}
	sort(arr.begin(), arr.end());
	for (i = 0; i < n; i++)
	{
		mp[arr[i]] = i;
		t += (i + 1) * arr[i];
	}
	p[n - 1] = arr[n - 1];
	for (i = n - 2; i >= 0; i--)
	{
		p[i] = p[i + 1] + arr[i];
	}
	//cout << t << endl;

	int q;
	ll k;
	cin >> q;
	while (q--)
	{
		cin >> i >> j;
		i--;
		i = mp[v[i]];
		//cout << i << endl;
		k = t;
		k -= (i + 1) * arr[i];
		vector<ll>::iterator it = lower_bound(arr.begin(), arr.end(), j);
		ll pos = it - arr.begin();
		/*if (pos == i)
		{
			pos--;
		}*/
		k -= p[i + 1];
		if (i < pos)
		{
			k += pos * j;
		}
		else
		{
			k += (pos + 1) * j;
		}
		k += p[pos];
		if (pos <= i)
			k -= arr[i];
		cout << k << endl;
	}

	return 0;
}