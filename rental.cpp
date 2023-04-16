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

int c[100005], suf[100005], r[100005];
pair<int, int>pq[100005];
bool sbs(const pair<int, int>& a, const pair<int, int>& b)
{
	return (a.second >= b.second);
}
int main()
{
	file("rental");
	int i, j, k, l, m, n, o, p;
	cin >> n >> m >> l;
	for (i = 0; i < n; i++)
	{
		cin >> c[i];
	}
	for (i = 0; i < m; i++)
	{
		cin >> pq[i].first >> pq[i].second;
	}
	for (i = 0; i < l; i++)
	{
		cin >> r[i];
	}
	sort(c, c + n);
	sort(pq, pq + n, sbs);
	sort(r, r + n);



	return 0;
}