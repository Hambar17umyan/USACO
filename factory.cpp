#include <iostream>
#include <fstream>
#include <vector>
#define ll long long
using namespace std;

vector<ll>g[102];
bool yes[102];
void rec(ll ind)
{
	  
}

int main()
{
	ll i, j, k, l, m, n, o, p;
	cin >> n;
	for (i = 0; i < n - 1; i++)
	{
		cin >> o >> p;
		g[o].push_back(p);
	}
	rec(1);

	return 0;
}