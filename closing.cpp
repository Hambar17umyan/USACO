#include <iostream>
#include <fstream>
#include <iomanip>
#include <map>
#include <set>
#include <vector>
#include <iterator>
#include <math.h>
#include <ctime>
#include <algorithm>
#include <deque>
#include <string>
#include <sstream>
using namespace std;
#define ll long long
#define usg unsigned
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define work int main(){speed; body(); return 0;}
#define tests int main(){speed; int t; cin>>t; while(t--)body(); return 0;}
#define commadig cout << fixed << setprecision //iomanip
#define fin ifstream cin
#define fout ofstream cout

bool col[3002];
set<int>st;
vector<int>arr[3002];
int r;
void rec(int i)
{
	if (st.find(i) == st.end())
	{
		col[i] = true;
		r++;
		for (int j = 0; j < arr[i].size(); j++)
		{
			if (!col[arr[i][j]] && st.find(arr[i][j]) == st.end())
			{
				rec(arr[i][j]);
			}
		}
	}
}
void body()
{
	fin("closing.in");
	fout("closing.out");
	int i, j, k, l, m, n, o, p;
	cin >> n >> m;
	for (i = 0; i < m; i++)
	{
		cin >> o >> p;
		arr[o - 1].push_back(p - 1);
		arr[p - 1].push_back(o - 1);
	}
	int t;
	for (t = 0; t < n; t++)
	{
		cin >> k;
		for (i = 0; i < n; i++)
		{
			col[i] = 0;
		}
		r = 0;
		for (i = 0; i < n; i++)
		{
			if (st.find(i) != st.end())
			{
				continue;
			}
			if (col[i] == false)
			{
				rec(i);
			}
			break;
		}
		if (r == n - t)
		{
			cout << "YES\n";
		}
		else cout << "NO\n";
		st.insert(k - 1);
	}
}
work