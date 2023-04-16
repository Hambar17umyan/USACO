#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	//
	ifstream cin("billboard.in");
	//
	ofstream cout("billboard.out");
	int i, j, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, f, s;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
	int a = x2 - x5;
	int b;
	if (y5 >= y2 || y6 <= y1)
	{
		b = 0;
	}
	else if (y5 <= y1)
	{
		if (y6 >= y2)
		{
			b = y2 - y1;
		}
		else
		{
			b = y6 - y1;
		}
	}
	else
	{
		if (y6 >= y2)
		{
			b = y2 - y5;
		}
		else
		{
			b = y6 - y5;
		}
	}
	if (x2 <= x5 || x6 <= x1)
	{
		a = 0;
	}
	else if(x5 <= x1)
	{
		if (x6 >= x2)
		{
			a = x2 - x1;
		}
		else
		{
			a = x6 - x1;
		}
	}
	else
	{
		if (x6 >= x2)
		{
			a = x2 - x5;
		}
		else
		{
			a = x6 - x5;
		}
	}
	f = a * b;
	int c;
	int d;
	if (x6 <= x3 || x5 >= x4)
	{
		c = 0;
	}
	else if (x6 >= x4)
	{
		if (x5 <= x3)
		{
			c = x4 - x3;
		}
		else
		{
			c = x4 - x5;
		}
	}
	else
	{
		if (x5 <= x3)
		{
			c = x6 - x3;
		}
		else
		{
			c = x6 - x5;
		}
	}
	if (y6 <= y3 || y5 >= y4)
	{
		d = 0;
	}
	else if (y5 <= y3)
	{
		if (y6 >= y4)
		{
			d = y4 - y3;
		}
		else
		{
			d = y6 - y3;
		}
	}
	else
	{
		if (y6>=y4)
		{
			d = y4 - y5;
		}
		else
		{
			d = y6 - y5;
		}
	}
	s = c * d;
	cout << ((y2 - y1) * (x2 - x1) - f) + ((y4 - y3) * (x4 - x3) - s);

	return 0;
}
//http://www.usaco.org/index.php?page=viewproblem2&cpid=759