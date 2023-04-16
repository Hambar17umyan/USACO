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

pair<pair<ll, ll>, ll>arr[205];
vector<ll>v[205];
bool color[205];
ll r;
void dfs(ll ind)
{
	ll i;
	color[ind] = true;
	r++;
	for (i = 0; i < v[ind].size(); i++)
	{
		if (!color[v[ind][i]])
		{
			dfs(v[ind][i]);
		}
	}
}
int main()
{
	//
	file("moocast");
	ll i, j, k, l, m, n, o, p;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> o >> p >> k;
		arr[i] = make_pair(make_pair(o, p), k);
		for (j = i - 1; j >= 0; j--)
		{
			//
			if (k * k >= (o - arr[j].first.first) * (o - arr[j].first.first) + (p - arr[j].first.second) * (p - arr[j].first.second))
			{
				v[i].push_back(j);
			}
			//
			
			//
			if (arr[j].second * arr[j].second >= (o - arr[j].first.first) * (o - arr[j].first.first) + (p - arr[j].first.second) * (p - arr[j].first.second))
			{
				v[j].push_back(i);
			}
			//
		}
	}
	ll res = 1;
	for (i = 0; i < n; i++)
	{
		r = 0;
		dfs(i);
		if (r > res)
			res = r;
		for (j = 0; j < n; j++)
		{
			color[j] = false;
		}
	}
	cout << res;

	return 0;
}