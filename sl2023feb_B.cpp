#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

const int N = 100005;
struct alibi {
	ll x, y, t;
};
alibi arr[N], g[N];

bool operator < (alibi& a, alibi& b)
{
	return (a.t < b.t);
}
int main()
{
	ll i, j, n, m;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		cin >> g[i].x >> g[i].y >> g[i].t;
	sort(g, g + n);
	ll r = 0;
	for (i = 0; i < m; i++)
	{
		bool b = false;;
		cin >> arr[i].x >> arr[i].y >> arr[i].t;
		for (j = 0; j < n; j++)
		{
			ll k1 = abs(arr[i].t - g[j].t), k2 = abs(arr[i].x - g[j].x) + abs(arr[i].y + g[j].y);
			if (k1 < k2)
			{
				b = true;
				break;
			}

		}
		if (b)
			r++;
	}
	cout << r << endl;

	return 0;
}