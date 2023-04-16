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

pair<char, pair<int, int>>arr[1002];
vector<int>g[1002];
set<int>s[1002];
bool color[1002];
set<int>stop;
pair<pair<int, int>, pair<int, int>>mp[5000002];
map<pair<int, int>, bool>mpp;
void rec(int x, vector<int>u)
{
	int i, j, y, k;
	color[x] = true;
	for (i = 0; i < u.size(); i++)
	{
		s[u[i]].insert(x);
	}
	u.push_back(x);
	for (i = 0; i < g[x].size(); i++)
	{
		rec(g[x][i], u);
	}
}
int main()
{
	//file("");
	int i, j, k, l, m, n, o, p;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i].first >> arr[i].second.first >> arr[i].second.second;
	}
	int x = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			if (arr[i].first == 'E')
			{
				if (arr[j].first == 'N')
				{
					if (arr[j].second.second > arr[i].second.second)
					{
						continue;
					}
					else if (arr[i].second.first > arr[j].second.first)
					{
						continue;
					}
					else
					{
						if (arr[j].second.first - arr[i].second.first < arr[i].second.second - arr[j].second.second)
						{
							mp[x] = make_pair(make_pair(arr[i].second.second - arr[j].second.second, -1), make_pair(i, j));
							x++;
							mp[x] = make_pair(make_pair(arr[j].second.first - arr[i].second.first, 1), make_pair(i, j));
							x++;
						}
						else if (arr[j].second.first - arr[i].second.first > arr[i].second.second - arr[j].second.second)
						{
							mp[x] = make_pair(make_pair(arr[j].second.first - arr[i].second.first, -1), make_pair(j, i));
							x++;
							mp[x] = make_pair(make_pair(arr[i].second.second - arr[j].second.second, 1), make_pair(j, i));
							x++;
						}
						else continue;
					}
				}
				else continue;
			}
			else continue;
		}
	}
	//cout << "mp\n";
	sort(mp, mp + x);
	for (i = 0; i < x; i++)
	{
		if (mp[i].first.second == -1)
		{
			if (mpp[make_pair(mp[i].second.first, mp[i].second.second)] == 1 && stop.find(mp[i].second.second) == stop.end())
			{
				g[mp[i].second.first].push_back(mp[i].second.second);
				stop.insert(mp[i].second.second);
			}
		}
		else
		{
			if (stop.find(mp[i].second.first) == stop.end() && stop.find(mp[i].second.second) == stop.end())
			{
				mpp[make_pair(mp[i].second.first, mp[i].second.second)] = true;
			}
		}
	}
	/*
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < g[i].size(); j++)
		{
			cout << i + 1 << ' ' << g[i][j] + 1 << endl;
		}
	}*/

	vector<int>v;
	for (i = 0; i < n; i++)
	{
		if (!color[i])
		{
			rec(i, v);
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << s[i].size() << endl;
	}

	return 0;
}

/*
6
E 3 5
N 5 3
E 4 6
E 10 4
N 11 1
E 9 2
*/