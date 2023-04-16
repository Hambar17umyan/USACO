#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

int arr[200005];
string y[200005];
map<ll, bool>mp;
ll rec(ll i, ll j, ll u, ll r, ll k)
{
	char c;
	if (j == 0)
	{
		r = (y[i][j] == 'G');
	}
	else if (y[i][j] == 'H')
	{
		r <<= 1;
	}
	else {
		r = (r << 1) + 1;
	}
	if (mp[r])
	{
		ll a, b;
		if (j == u - 1)
		{
			return k + 1;
		}
		a = rec(i, j + 1, u, r, k + 1);
		if (r % 10)
			r--;
		else r++;
		b = rec(i, j + 1, u, r, k);
		return max(a, b);
	}
	else
	{
		if (r % 10)
			r--;
		else r++;
		if (j < u - 1)
			return rec(i, j + 1, u, r, k);
		else return k;
	}
}
int main()
{
	int i, j, k, n, u;
	cin >> u >> n;
	string s;
	//cout << (9 ^ 22) << endl;
	for (i = 0; i < n; i++)
	{
		cin >> y[i];
		for (j = 0; j < u; j++)
		{
			if (y[i][j]=='H')
				arr[i] += (1 << (u - j - 1));
			mp[arr[i]] = 1;
		}
		//cout << arr[i] << endl;
	}
	for (i = 0; i < n; i++)
	{
		cout << rec(i, 0, u, 0, 0) << endl;
	}


	return 0;
}