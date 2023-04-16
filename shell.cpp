#include <iostream>
#include <fstream>
#define file ifstream cin("shell.in"); ofstream cout("shell.out");
using namespace std;

int a[102], b[102], g[102];
bool s[4];
void swap(int i, int j)
{
	bool k = s[i];
	s[i] = s[j];
	s[j] = k;
}
int main()
{
	file
	int i, j, k, l, m = 0, n, o, p;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i] >> g[i];
	}
	s[0] = 1;
	k = 0;
	for (i = 0; i < n; i++)
	{
		swap(a[i] - 1, b[i] - 1);
		if (s[g[i] - 1])
		{
			k++;
		}
	}
	if (k > m)
		m = k;
	s[0] = false;
	s[2] = false;
	s[1] = 1;
	k = 0;
	for (i = 0; i < n; i++)
	{
		swap(a[i] - 1, b[i] - 1);
		if (s[g[i] - 1])
		{
			k++;
		}
	}
	if (k > m)
		m = k;
	s[2] = 1;
	s[0] = false;
	s[1] = s[0];
	k = 0;
	for (i = 0; i < n; i++)
	{
		swap(a[i] - 1, b[i] - 1);
		if (s[g[i] - 1])
		{
			k++;
		}
	}
	if (k > m)
		m = k;

	cout << m;

	return 0;
}