#include <fstream>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

#define file ifstream cin("backforth.in"); ofstream cout("backforth.out");

vector<int> g1, g2;
set<int>st;
int main()
{
	//
	//file
	int i, j, k, l, m, n, o, p;
	vector<int>v1, v2;
	for (i = 0; i < 10; i++)
	{
		cin >> j;
		v1.push_back(j);
		g1.push_back(j);
	}
	for (i = 0; i < 10; i++)
	{
		cin >> j;
		v2.push_back(j);
		g2.push_back(j);
	}
	int ans = 1000;
	for (int i1 = 0; i1 < 10; i1++)
	{
		ans = 1000;
		g1 = v1;
		g2 = v2;
		g2.push_back(g1[i1]);
		ans -= g1[i1];
		g1.erase(g1.begin() + i1); 
		vector<int>vv, vv_;
		vv = g1;
		vv_ = g2;
		int a1 = ans;
		for (int i2 = 0; i2 < 11; i2++)
		{
			ans = a1;
			g1 = vv;
			g2 = vv_;
			g1.push_back(g2[i2]);
			ans += g2[i2];
			g2.erase(g2.begin() + i2);
			vector<int>vv1, vv2;
			vv1 = g1;
			vv2 = g2;
			int a2 = ans;
			for (int i3 = 0; i3 < 10; i3++)
			{
				ans = a2;
				g1 = vv1;
				g2 = vv2;
				g2.push_back(g1[i3]);
				ans -= g1[i3];
				g1.erase(g1.begin() + i3);
				vector<int>vv3, vv4;
				vv3 = g1;
				vv4 = g2;
				int a3 = ans;
				for (int i4 = 0; i4 < 11; i4++)
				{
					ans = a3;
					g1 = vv3;
					g2 = vv4;
					g1.push_back(g2[i4]);
					ans += g2[i4];
					g2.erase(g2.begin() + i4);
					int dgjafs = st.size();
					st.insert(ans);
					/*if (st.size() != dgjafs)
					{
						cout << ans << ' ' << i1 << ' ' << i2 << ' ' << i3 << ' ' << i4 << ' ' << endl;
					}*/
				}
			}
		}
	}
	cout << st.size();

	return 0;
}
