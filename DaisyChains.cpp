#include <iostream>
using namespace std;

float arr[105];
int main()
{
	float k, l, m, n, o, p;
	int i, j;
	k = 1;
	int res = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> arr[i];
	for (k = 1; k <= n; k++)
	{
		for (i = 0; i <= n - k; i++)
		{
			m = 0;
			for (j = i; j < i + k; j++)
			{
				m += arr[j];
			}
			for (j = i; j < i + k; j++)
			{
				if (arr[j] == m / k)
				{
					res++;
					break;
				}
			}
		}
	}
	cout << res;

	return 0;
}