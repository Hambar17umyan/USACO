#include <iostream>
#include <fstream>
using namespace std;
#define file ifstream cin("mixmilk.in"); ofstream cout("mixmilk.out");

int cd[3], pd[3];
int main()
{
	file
	int i, j, k, m, n, l, o, p;
	int t = 100;
	for (i = 0; i < 3; i++)
	{
		cin >> cd[i] >> pd[i];
	}
	while (t > 0)
	{
		if (t % 3 == 1)
		{
			if (pd[0] <= cd[1] - pd[1])
			{
				pd[1] += pd[0];
				pd[0] = 0;
			}
			else
			{
				pd[0] -= cd[1] - pd[1];
				pd[1] = cd[1];
			}
		}
		else if (t % 3 == 0)
		{
			if (pd[1] <= cd[2] - pd[2])
			{
				pd[2] += pd[1];
				pd[1] = 0;
			}
			else
			{
				pd[1] -= cd[2] - pd[2];
				pd[2] = cd[2];
			}
		}
		else
		{
			if (pd[2] <= cd[0] - pd[0])
			{
				pd[0] += pd[2];
				pd[2] = 0;
			}
			else
			{
				pd[2] -= cd[0] - pd[0];
				pd[0] = cd[0];
			}
		}
		if (t == 1)
		{
			break;
		}
		t--;
	}
	cout << pd[0] << endl << pd[1] << endl << pd[2];
	

	return 0;
}