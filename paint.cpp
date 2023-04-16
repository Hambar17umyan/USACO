#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
	//
	ifstream cin("paint.in");
	//
	ofstream cout("paint.out");
	int i, j, a, b, c, d;
	cin >> a >> b >> c >> d;
	int k = max(d, b) - min(a, c);
	int l = d - c + b - a;
	if (l > k)
	{
		cout << max(d, b) - min(a, c);
	}
	else
	{
		cout << l;
	}

	return 0;
}