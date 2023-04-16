#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
using namespace std;

#define file ifstream cin("wormhole.in"); ofstream cout("wormhole.out");

struct point
{
	long long x, y;
};
point arr[14];
int main()
{
	file
	int i, j, k, l, m, n, o, p;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i].x;
		cin >> arr[i].y;
	}
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i].y == arr[j].y || arr[i].x == arr[j].x)
			{
				sum++;
			}
		}
	}
	cout << sum;

	return 0;
}