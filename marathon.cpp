#include <iostream>
#include <fstream>
#include <math.h>
#define file ifstream cin("marathon.in"); ofstream cout("marathon.out");
using namespace std;

struct point
{
	int x, y;
};
point arr[100002];
int dis[100002], dif[100002];

void body()
{
	file 
	int i, j, k, l, m, n, o, p;
	cin >> n;
	cin >> arr[0].x >> arr[0].y;
	int sum = 0;
	for (i = 1; i < n; i++)
	{
		cin >> arr[i].x >> arr[i].y;
		dis[i] = abs(arr[i].x - arr[i - 1].x) + abs(arr[i].y - arr[i - 1].y);
		sum += dis[i];
	}
	int mx = 0;
	int mxi = -1;
	for (i = 1; i < n - 1; i++)
	{
		k = abs(arr[i + 1].x - arr[i - 1].x) + abs(arr[i + 1].y - arr[i - 1].y);
		l = abs(arr[i - 1].x - arr[i].x) + abs(arr[i - 1].y - arr[i].y) + abs(arr[i + 1].x - arr[i].x) + abs(arr[i + 1].y - arr[i].y);
		k = l - k;
		if (k > mx)
		{
			mx = k;
			mxi = i;
		}
	}
	cout << sum - mx;
}
int main()
{
	body();

	return 0;
}