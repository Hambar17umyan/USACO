#include <iostream>
#include <fstream>
#include <set>
using namespace std;
#define file ifstream cin("gymnastics.in"); ofstream cout("gymnastics.out");
int arr[12][22];
int fndi(int a, int aff[], int n)
{
	int i, j, k, l, m, o, p;
	for (i = 0; i < n; i++)
	{
		if (aff[i] == a)
		{
			return i;
		}
	}

	return -1;
}
int main()
{
	//
	file
	int n, m, i, j, k, l;
	cin >> k >> n;
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	int res = 0;
	for (i = 1; i <= n; i++)
	{
		int ind;
		set<int>st;
		for (j = 0; j < k; j++)
		{
			ind = fndi(i, arr[j], n);
			for (int ij = ind - 1; ij >= 0; ij--)
			{
				st.insert(arr[j][ij]);
			}
		}
		res += (n - 1) - st.size();
	}
	cout << res;

	return 0;
}