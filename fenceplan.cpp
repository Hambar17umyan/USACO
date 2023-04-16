#include <iostream>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <iterator>
using namespace std;
#define ll long long
#define file_(x)\
string string_for_input_only = x + ".in";\
ifstream cin(string_for_input_only);\
string_for_input_only = x + ".out";\
ofstream cout(string_for_input_only)
#define file(x) string fname=x; file_(fname)

pair<ll, ll>c[100005];
vector<ll>g[100005];
bool color[100005];
ll l, u, d, r;
void dfs(int ind)
{
	color[ind] = true;
	if (c[ind].first < l || l == -1)
	{
		l = c[ind].first;
	}
	if (c[ind].first > r || r == -1)
	{
		r = c[ind].first;
	}
	if (c[ind].second > u || u == -1)
	{
		u = c[ind].second;
	}
	if (c[ind].second < d || d == -1)
	{
		d = c[ind].second;
	}
	for (int i = 0; i < g[ind].size(); i++)
	{
		if (!color[g[ind][i]])
		{
			dfs(g[ind][i]);
		}
	}
}
int main()
{
	//
	file("fenceplan");
	ll i, j, k, m, n, o, p;
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		cin >> o >> p;
		c[i] = make_pair(o, p);
	}
	while (m--)
	{
		cin >> o >> p;
		o--;
		p--;
		g[o].push_back(p);
		g[p].push_back(o);
	}
	ll res = 400000000000000000;
	for (i = 0; i < n; i++)
	{
		if (!color[i])
		{
			l = -1;
			u = -1;
			r = -1;
			d = -1;
			dfs(i);
			if (2 * ((u - d) + (r - l)) < res)
				res = 2 * ((u - d) + (r - l));
		}
	}
	cout << res;

	return 0;
}