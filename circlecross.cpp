#include <fstream>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

#define file ifstream cin("circlecross.in"); ofstream cout("circlecross.out");

char s[55];
int main()
{
	//
	file
	int i, j, k, l, m, n, o, p;
	map<char, int> mps, mpf;
	set<char>cs;
	for (i = 0; i < 52; i++)
	{
		cin >> s[i];
		k = cs.size();
		cs.insert(s[i]);
		if (cs.size() == k)
		{
			mpf[s[i]] = i;
		}
		else
		{
			mps[s[i]] = i;
		}
	}
	//cout << endl; 
	/*for (i = 0; i < 52; i++)
	{
		cout << s[i] << ' ' << mps[s[i]] << ' ' << mpf[s[i]] << endl;
	}*/
	//cout << endl;
	int sum = 0;
	for (i = 0; i < 52; i++)
	{
		if (mpf[s[i]] == i)
		{
			continue;
		}
		for (j = i + 1; j < mpf[s[i]]; j++)
		{
			if (mpf[s[j]] > mpf[s[i]] || mps[s[j]] < mps[s[i]])
			{
				sum++;
				//cout << mpf[s[j]] << ' ' << mpf[s[i]] << ' ' << mps[s[j]] << ' ' << mps[s[i]] << endl;
				//cout << s[i] << ' ' << s[j] << ' ' << i << ' ' << j << endl;
			}
		}
	}
	cout << sum/2;

	return 0;
}