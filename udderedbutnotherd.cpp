#include <iostream>
#include <fstream>
using namespace std;
#define fi ifstream cin
#define fo ofstream cout

int stf(char c, string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == c)
		{
			return i;
		}
	}
}
int main()
{
	int i, j, k, l, m, n, o, p;
	string s1, s2, s3;
	int sum = 1;
	cin >> s2;
	cin >> s1;
	for (i = 1; i < s1.size(); i++)
	{
		if (stf(s1[i], s2) <= stf(s1[i - 1], s2))
		{
			sum++;
		}
	}
	cout << sum << endl;

	return 0;
}