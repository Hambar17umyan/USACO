#include <iostream>
#include <fstream>
#include <algorithm>
#define file ifstream cin("measurement.in"); ofstream cout("measurement.out");
using namespace std;

int q[102], ka[102];
string name[102];
void swap(int i, int j)
{
	int a = q[i];
	q[i] = q[j];
	q[j] = a;

	string a1 = name[i];
	name[i] = name[j];
	name[j] = a1;

	int a2 = ka[i];
	ka[i] = ka[j];
	ka[j] = a2;
}
void lsort(int n)
{
	int i, j, k, l, m;
	for (i = 1; i < n; i++)
	{
		int i1 = i;
		for (j = i - 1; j >= 0; j--)
		{
			if (q[i1] < q[j])
			{
				swap(i1, j);
				i1 = j;
			}
			else break;
		}
	}
}
int main()
{
	//
	file
	int i, j, k, l, m, n, o, p;
	int M = 7, B = 7, E = 7;
	char w1 = 's', w2 = 's', w3 = 's';
	int w = 3;
	cin >> n; 
	int mx = 7;
	int res = 0;
	for (i = 0; i < n; i++)
	{
		char loopc;
		cin >> q[i] >> name[i] >> loopc >> ka[i];
		if (loopc == '-')
			ka[i] *= -1;
	}
	lsort(n);
	for (i = 0; i < n; i++)
	{
		//
		char w11 = w1, w22 = w2, w33 = w3;
		//cout << q[i] << ' ' << name[i] << ka[i] << endl;
		if (name[i][0] == 'B')
		{
			B += ka[i];
		}
		else if (name[i][0] == 'E')
		{
			E += ka[i];
		}
		else M += ka[i];
		mx = max(max(M, E), B);
		if (B == mx)
		{
			if (w1 != 'B')
			{
				w1 = 'B';
			}
		}
		else w1 = 's';
		if (E == mx)
		{
			if (w2 != 'E')
			{
				w2 = 'E';
			}
		}
		else w2 = 's';
		if (M == mx)
		{
			if (w3 != 'M')
			{
				w3 = 'M';
			}
		}
		else w3 = 's';

		if (w11 != w1 || w22 != w2 || w33 != w3)
		{
			res++;
		}
	}
	cout << res;

	return 0;
}