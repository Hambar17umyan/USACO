#include <iostream>
#include <fstream>
using namespace std;
#define file ifstream cin("cbarn.in"); ofstream cout("cbarn.out");

int arr1[3002];
int main()
{
	//
	file
	int i, j, k, l, m = -1, n, o, p;
	int res = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr1[i];
		arr1[i + n] = arr1[i];
	}
	for (i = 0; i < n; i++)
	{
		k = 0;
		for (j = 1; j < n; j++)
		{
			k += j * arr1[i + j];
		}
		if (k < m || !(m+1))
			m = k;
	}
	cout << m;

	return 0;
}