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
#define ll long long
using namespace std;
#define file_(x)\
string string_for_input_only = x + ".in";\
ifstream cin(string_for_input_only);\
string_for_input_only = x + ".out";\
ofstream cout(string_for_input_only)
#define file(x) string fname=x;

ll arr[1000005];
int main()
{
	//file("stacking");
	ll i, j, k, l, m, n, o, p;
	cin >> n >> k;
	for (i = 0; i < k; i++)
	{
		cin >> o >> p;
		arr[o] += 1;
		arr[p + 1]--;
	}
	for (i = 1; i <= n; i++)
	{
		arr[i] += arr[i - 1];
	}
	sort(arr, arr + n);
	cout << arr[n / 2];

	return 0;
}