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

ll arr[20005];
ll tr[20005];
int main()
{
	ll n, m, i, j, k;
	file("teamwork");
	cin >> n >> k;
	ll z = 0;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		z += arr[i];
	}
	if (!(k - 1))
	{
		cout << z << endl;
		return 0;
	}
	if (n < k)
	{
		cout<<
	}

	return 0;
}