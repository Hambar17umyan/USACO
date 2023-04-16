#include <fstream>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

#define file ifstream cin("cowqueue.in"); ofstream cout("cowqueue.out");
struct cowt {
	int a, b;
};

bool operator <(const cowt& a, const cowt& b)
{
	if (a.a < b.a)
	{
		return true;
	}
	return false;
}
vector<cowt>v;
int main()
{
	file
	int i, j, k, l, m, n, o, p;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cowt a;
		cin >> a.a >> a.b;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for (i = 1; i < n; i++)
	{
		if (v[i - 1].a + v[i - 1].b > v[i].a)
		{
			v[i].a = v[i - 1].a + v[i - 1].b;
		}
	}
	cout << v[n - 1].a + v[n - 1].b;

	return 0;
}