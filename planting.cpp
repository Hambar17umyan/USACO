#include <fstream>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
using namespace std;

#define file ifstream cin("planting.in"); ofstream cout("planting.out");

vector<int> arr[100002];
int mark[100002] = {-1};
int r;
void rec(int a, int re)
{
	mark[a] = re;
	for (int i = 0; i < arr[a].size(); i++)
	{
		if (!(mark[arr[a][i]] + 1))
		{
			rec(arr[a][i], re+1);
		}
	}
}
int main()
{
	//
	//file
	int i, j, k, l, m, n, o, p;
	cin >> n;
	for (i = 0; i < n - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[a - 1].push_back(b - 1);
		arr[b - 1].push_back(a - 1);
	}
	rec(0, 0);
	for (i = 0; i < n; i++)
	{
		cout << mark[i] << endl;
	}
	/*int sum = 0;
	int mn = 4;
	set<int>gst;
	for (i = 0; i < n; i++)
	{
		/*for (j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j] << ' ';
		}
		set<int> st;
		for (j = 0; j < arr[i].size(); j++)
		{
			if(arr[i][j])
			st.insert(arr[i][j]);
		}
		for (j = 0; j < arr[i].size(); j++)
		{
			for (k = 0; k < arr[arr[i][j]].size(); k++)
			{
				st.insert(arr[arr[i][j]][k]);
			}
		}
		if (st.size() < n)
		{
			sum++;
		}
	}
	cout << n - sum / 2;*/
	return 0;
}