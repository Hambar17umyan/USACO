#include <fstream>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x1, y1, x2, y2, x3, y3, x4, y4, x, y, i, j, a, b, c, d, e, f, g, h;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	a = abs(x1 - x2);
	c = abs(y1 - y2);
	e = abs(x3 - x4);
	g = abs(y3 - y4);
	b = abs(x1 - x4) + 1;
	d = abs(y1 - y4) + 1;
	cout << max(b, d);

	return 0;
}