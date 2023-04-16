//#include <iostream>
//
#include <fstream>
using namespace std;

char s[12][12];
int main()
{
	//
	ifstream cin("cowsignal.in");
	//
	ofstream cout("cowsignal.out");
	int i, j, k, l, m, n, o, p;
	cin >> n >> m >> k;
	for (i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	for (i = 0; i < n; i++)
	{
		string st = "";
		for (j = 0; j < m; j++)
		{
			for (int ind = 0; ind < k; ind++)
			{
				st += s[i][j];
			}
		}
		for (j = 0; j < k; j++)
		{
			cout << st << endl;
		}
	}


	return 0;
}