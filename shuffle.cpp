#include <iostream>
#include <fstream>
#define file ifstream cin("shuffle.in"); ofstream cout("shuffle.out");
using namespace std;

int num[102];
string id[102], id1[102];

int main()
{
	file
		int i, j, k, l, m, n;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for (i = 0; i < n; i++)
	{
		cin >> id[i];
		id1[i] = id[i];
	}
	for (k = 0; k < 3; k++)
	{
		for (i = 0; i < n; i++)
		{
			id[i] = id1[num[i] - 1];
		}
		for (i = 0; i < n; i++)
		{
			id1[i] = id[i];
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << id1[i] << endl;
	}

	return 0;
}