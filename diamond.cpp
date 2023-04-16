#include <iostream>
#include <fstream>
#include <algorithm>
#define file ifstream cin("diamond.in"); ofstream cout("diamond.out");
using namespace std;

int arr[1002];

int main()
{
	//
	file
	int i, j, k, l, m, n, o, p;
	int res = 0;
	cin >> n >> k;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (i = 0; i < n; i++)
	{
		m = 1;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] - arr[i] <= k)
			{
				m++;
			}
			else break;
		}
		if (m > res)
			res = m;
	}
	cout << res;

	return 0;
}