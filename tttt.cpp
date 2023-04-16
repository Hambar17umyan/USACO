#include <iostream>
#include <fstream>
#include <set>
#include <map> 
#define file ifstream cin("tttt.in"); ofstream cout("tttt.out");
using namespace std;

char tttt[4][4];
int main()
{
	//
	file
	set<char>s;
	set<string> t;
	int i, j, k, m, n, o, p;
	for (i = 0; i < 3; i++)
	{
		set<char> l;
		char a = '*', b = '*';
		for (j = 0; j < 3; j++)
		{
			cin >> tttt[i][j];
			l.insert(tttt[i][j]);
			if (a == '*')
			{
				a = tttt[i][j];
			}
			else if (b == '*' && a != tttt[i][j])
			{
				b = tttt[i][j];
			}
		}
		if (l.size() == 2)
		{
			string ss = "";
			if (a < b)
			{
				ss = a + b;
			}
			else ss = b + a;
			t.insert(ss);
			//cout << a << b << endl;
		}
		else if (l.size() == 1)
		{
			s.insert(a);
		}
	}
	for (j = 0; j < 3; j++)
	{
		set<char> l;
		char a = '*', b = '*';
		for (i = 0; i < 3; i++)
		{
			l.insert(tttt[i][j]);
			if (a == '*')
			{
				a = tttt[i][j];
			}
			else if(b=='*' && a != tttt[i][j])
			{
				b = tttt[i][j];
			}
		}
		if (l.size() == 2)
		{
			string ss = "";
			if (a < b)
			{
				ss = a + b;
			}
			else ss = b + a;
			t.insert(ss);
		}
		else if (l.size() == 1)
		{
			s.insert(a);
		}
	}
	set<char> l1;
	int a = '*', b = '*';
	for(i = 0, j = 0; i < 3; i++, j++)
	{
		l1.insert(tttt[i][j]);
		if (a == '*')
		{
			a = tttt[i][j];
		}
		else if(b=='*' && a != tttt[i][j])
		{
			b = tttt[i][j];
		}
	}
	if (l1.size() == 1)
	{
		s.insert(a);
	}
	else if (l1.size() == 2)
	{
		string ss = "";
		if (a < b)
		{
			ss = a + b;
		}
		else ss = b + a;
		t.insert(ss);
	}
	set<char> l2;
	a = '*';
	b = '*';
	for (i = 0, j = 2; i < 3; i++, j--)
	{
		l2.insert(tttt[i][j]);
		if (a == '*')
		{
			a = tttt[i][j];
		}
		else if(b=='*' && a != tttt[i][j])
		{
			b = tttt[i][j];
		}
	}
	if (l2.size() == 1)
	{
		s.insert(a);
	}
	else if (l2.size() == 2)
	{
		string ss = "";
		if (a < b)
		{
			ss = a + b;
		}
		else ss = b + a;
		t.insert(ss);
	}
	cout << s.size() << endl << t.size();

	return 0;
}