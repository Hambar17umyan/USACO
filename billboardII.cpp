#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int x1, y1, x2, y2, x3, y3, x4, y4, s;
	int i, j, k, l, m, n, o, p;
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;
	s = (x2 - x1) * (y2 - y1);
	if (y4 >= y2 && y3 <= y1)
	{
		if (x3 >= x1 && x4 >= x2)
		{
			s -= (x2 - x3) * (y2 - y1);
		}
		else if (x4 >= x1 && x3 <= x1)
		{
			s -= (x4 - x1) * (y2 - y1);
		}
	}
	else if (y4 <= y2 && y3 >= y1)
	{
		if (x4 >= x2 && x3 <= x1)
		{
			s -= (x2 - x1) * (y4 - y1);
		}
	}

	return 0;
}