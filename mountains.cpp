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

pair<int, int>arr[100005];
int main()
{
	file("mountains");
	int i, j, k, l, m, n, o, p;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> o >> p;
		arr[i] = make_pair(o - p, o + p);
	}
	sort(arr, arr + n);
	l = arr[0].second;
	int y = n;
	bool b = false;
	for (i = 1; i < n; i++)
	{
		if (arr[i].second > l)
		{
			l = arr[i].second;
			if (!b && arr[i - 1].first == arr[i].first)
				y--;
		}
		else
		{
			y--;
		}
	}
	cout << y;

	return 0;
}