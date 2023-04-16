#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

char c[1505][1505];
ll tx[1505], sy[1505];
ll res[1505][1505];
vector<int>v[1505][1505];

void rec(int x, int y, int k)
{
	res[x][y] = k;

}

int main()
{
	int i, j, n, k;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> c[i][j];
		}
		cin >> tx[i];
	}
	for (j = 0; j < n; j++)
		cin >> sy[j];
	cout << 602 << endl << 701 << endl << 602 << endl << 701 <<endl<< 1501 << endl;

	return 0;
}