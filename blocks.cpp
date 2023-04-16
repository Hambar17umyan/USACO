#include <iostream>
#include <fstream>
using namespace std;
#define file ifstream cin("blocks.in"); ofstream cout("blocks.out");

int arr[28];
string c1[102], c2[102];
int fn(char c, string s)
{
	int res = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == c)
		{
			res++;
		}
	}

	return res;
}
//97
int main()
{
	//
	file
		int i, j, k, l, m, n, o, p;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> c1[i] >> c2[i];
		for (j = 0; j < 26; j++)
		{
			if (fn(j + 97, c1[i]) > fn(j + 97, c2[i]))
			{
				arr[j] += fn(j + 97, c1[i]);
			}
			else
				arr[j] += fn(j + 97, c2[i]);
		}
	}
	for (i = 0; i < 26; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}