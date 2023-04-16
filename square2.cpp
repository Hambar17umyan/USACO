#include <algorithm>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream cin("square.in");
	ofstream cout("square.out");
	int i, j, x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	int a = max(x4, x2) - min(x3, x1);
	int b = max(y4, y2) - min(y3, y1);
	cout << max(a, b) * max(a, b);

	return 0;
}