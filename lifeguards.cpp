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

map<int, int>mp, arr, pref;
pair<int, int>pr[100005];
int main()
{
	file("lifeguards");
	int i, j, k, l = 0, m, n, o = 2000000000;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		pr[i] = make_pair(a, b);
		mp[a]++;
		mp[b]--;
		if (b > l)
			l = b;
		if (o > a)
			o = a;
	}
	k = 0;
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		int a, b;
		a = it->first;
		b = it->second;
		arr[a] = k + b;
		k = arr[a];
	}
	map<int, int>::iterator it = arr.begin();
	pref[it->first] = 0;
	int x;
	bool bl = false;
	x = it->first;
	if (it->second == 1)
	{
		bl = true;
	}
	it++;
	k = 0;
	for (; it != arr.end(); it++)
	{
		int a, b;
		a = it->first;
		b = it->second;
		pref[a] = pref[x];
		if (bl)
		{
			pref[a] += a - x;
		}
		bl = false;
		if (b == 1)
		{
			bl = true;
		}
		x = a;
	}
	k = 0;
	bl = false;
	map<int, int>::iterator it1;
	int y = l - o;
	for (it1 = arr.begin(); it1 != arr.end(); it1++)
	{
		if (bl)
			y -= it1->first - k;
		bl = false;
		if (it1->second == 0)
			bl = true;
		k = it1->first;
	}
	ll z = 2000000000;
	for (i = 0; i < n; i++)
	{
		if (pref[pr[i].second] - pref[pr[i].first] < z)
			z = pref[pr[i].second] - pref[pr[i].first];
	}
	cout << y - z;

	return 0;
}