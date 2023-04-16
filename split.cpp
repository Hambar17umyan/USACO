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

pair<ll, ll> arr[50004];
map<ll, ll> mn, mx;
map<ll, ll> ymn, ymx;
int main()
{
	//file("split");
	ll i, k, n;
	cin >> n;
	pair<ll, ll>st, fn;
	st = make_pair(-1, -1);
	fn = st;
	for (i = 0; i < n; i++)
	{
		ll x, y;

		cin >> x >> y;

		if (st.first > x || st.first == -1)
		{
			st.first = x;
		}
		if (st.second > y || st.second == -1)
		{
			st.second = y;
		}
		if (fn.first < x || fn.first == -1)
		{
			fn.first = x;
		}
		if (fn.second < y || fn.second == -1)
		{
			fn.second = y;
		}

		if (mn[x] == 0 || mn[x] > y)
			mn[x] = y;
		if (mx[x] < y)
			mx[x] = y;
		if (ymn[y] == 0 || ymn[y] > x)
			ymn[y] = x;
		if (ymx[y] < x)
			ymx[y] = x;

		arr[i] = make_pair(x, y);
	}
	ll s, s1, s2, dif = -1;
	s = (fn.second - st.second) * (fn.first - st.first);
	map<ll, ll>::iterator it, it1, it2;

	k = 0;
	stack<ll>stc;
	for (it = mx.begin(); it != mx.end(); it++)
	{
		stc.push(it->first);
		if (k < it->second)
		{
			k = it->second;
		}
		else it->second = k;
	}
	k = -1;
	while (!stc.empty())
	{
		ll r = stc.top();
		stc.pop();
		if (k == -1 || k > mn[r])
		{
			k = mn[r];
		}
		else mn[r] = k;
	}

	
	
	it1 = mn.begin();
	/*
	cout << "mn" << endl;
	for (; it1 != mn.end(); it1++)
	{
		cout << it1->first << ' ' << it1->second << endl;
	}
	//right
	
	it1 = mn.begin();
	it1++;
	///*
	cout << "mx" << endl;
	for (it = mx.begin(); it != mx.end(); it++)
	{
		cout << it->first << ' ' << it->second << endl;
	} 
	//right
	*/
	it1++;
	for (it = mx.begin(); it != mx.end() && it1!=mn.end(); it++, it1++)
	{
		s1 = (it->first - st.first) * (it->second - st.second);
		s2 = (it1->first - fn.first) * (it1->second - fn.second);
		//cout << s << ' ' << s1 << ' ' << s2 << endl; //wrong
		if (s - s1 - s2 > dif)
			dif = s - s1 - s2;
	}

	it1 = ymn.begin();
	it1++;
	for (it = ymx.begin(); it != ymx.end() && it1 != ymn.end(); it++, it1++)
	{
		s1 = abs((it->second - st.first) * (it->first - st.second));
		s2 = abs((it1->second - fn.first) * (it1->first - fn.second));
		//cout << s << ' ' << s1 << ' ' << s2 << endl; //wrong
		if (s - s1 - s2 > dif)
			dif = s - s1 - s2;
	}
	cout << dif;

	return 0;
}