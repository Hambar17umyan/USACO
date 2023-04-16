#include <map>
#include <vector>
#include <set>
#include <iostream>
using namespace std;

map<char, vector<char>>g;
map<char, bool>color;
map<char, int>yg;

int rec(char c, int k, set<char>tttt)
{
	color[c] = true;
	yg[c] = k;
	k++;
	tttt.insert(c);
	if (g[c].size() > 0)
	{
		if (color[g[c][0]] && tttt.find(g[c][0]) != tttt.end())
		{
			return abs(yg[g[c][0]] - yg[c]);
		}
		else
		{
			return rec(g[c][0], k, tttt);
		}
	}
	else return 0;
}
void solve()
{
	int i, j, t, n, k;
	string s1, s2;
	cin >> s1 >> s2;
	int res = 0;
	n = s1.size();
	g.erase(g.begin(), g.end());
	yg.erase(yg.begin(), yg.end());
	set<char>tt;
	set<char>tf;
	color.erase(color.begin(), color.end());
	for (i = 0; i < n; i++)
	{ 
		tt.insert(s1[i]);
		if (s1[i] != s2[i])
			tf.insert(s1[i]);
		if (g[s1[i]].size() == 0)
			g[s1[i]].push_back(s2[i]);
		else if (g[s1[i]][0] != s2[i])
		{
			cout << -1 << endl;
			return;
		}
	}
	res = tf.size();
	set<char>uty;
	//cout << res << endl;
	for (set<char>::iterator it = tt.begin(); it != tt.end(); it++)
	{
		if(!color[*it])
		{ 
			int yyy = rec(*it, 0, uty);
			res += yyy;
		}
	}
	cout << res << endl;
}

int main()
{3
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}