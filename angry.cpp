#include <fstream>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

#define file ifstream cin("angry.in"); ofstream cout("angry.out");

long long arr[102];
int main()
{
	//
	file
	int i, j, l, m, n, o, p;
	cin >> n;
	long long k;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	long long mx = 0;
	int mm = 0;
	for (i = 0; i < n; i++)
	{
		k = 1;
		l = 2;
		long long sum = 1;
		m = i; //3
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] - arr[m] > k)
			{
				m = j - 1;
				k++;
				if (j == i + 1)
					break;
				if (arr[j] - arr[m] > k)
				{
					break;
				}
				else
				{
					sum++;
				}
			}
			else sum++;
		}
		k = 1;
		l = 2;
		m = i;
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[m] - arr[j] > k)
			{
				m = j + 1;
				k++;
				if (j == i - 1)
					break;
				if (arr[m] - arr[j] > k)
				{
					break;
				}
				else
				{
					sum++;
				}
			}
			else sum++;
		}
		if (sum > mx)
		{
			mx = sum;
			mm = i;
		}
		//cout << i << ' ' << sum << endl;
	}
	cout << mx;

	return 0;
}