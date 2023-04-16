#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

//defines
#define ll long long
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ratdig(x) cout << fixed << setprecision(x);
#define xfixdig(x) cout << setprecision(x);
#define multi int t; cin>>t; presolve(); while(t--) solve()
#define single presolve(); solve(); return 0


//body
void presolve()
{

}

string s[105];
short arr[105];
bool bl[105];
pair<int, int>y[4][105];
void solve()
{
	ll i, j, k, m, n;
	cin >> n >> m;
	k = m;
	for (i = 0; i < m; i++)
	{
		cin >> s[i] >> arr[i];
		bl[i] = 0;
	}
	for (i = 0; i < n; i++)
	{
		y[1][i].first = 0;
		y[1][i].second = 0;
		y[0][i].first = 0;
		y[0][i].second = 0;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (s[j][i] == '0')
			{
				if (arr[j] == 0)
				{
					y[0][i].first++;
				}
				else y[0][i].second++;
			}
			else
			{
				if (arr[j] == 0)
				{
					y[1][i].first++;
				}
				else y[1][i].second++;
			}
			
		}
	}
	/*for (i = 0; i < n; i++)
	{
		cout << y[0][i].first << ',' << y[0][i].second << ' ';
	}
	cout << endl;
	for (i = 0; i < n; i++)
	{
		cout << y[1][i].first << ',' << y[1][i].second << ' ';
	}
	cout << endl;*/
	while (k)
	{
		int u = -1;
		int r = -1;
		char g = 'k';
		for (i = 0; i < n; i++)
		{
			if (y[0][i].first == 0 && y[0][i].second != 0)
			{
				u = i;
				r = 0;
				g = '0';
				break;
			}
			if (y[0][i].second == 0 && y[0][i].first != 0)
			{
				u = i;
				r = 0;
				g = '0';
				break;
			}
			if (y[1][i].second == 0 && y[1][i].first != 0)
			{
				u = i;
				r = 1;
				g = '1';
				break;
			}
			if (y[1][i].first == 0 && y[1][i].second != 0)
			{
				u = i;
				r = 1;
				g = '1';
				break;
			}
		}
		//cout << u << ' ' << r << ' ';
		if (u == -1)
		{
			cout << "LIE\n";
			return;
		}
		for (i = 0; i < m; i++)
		{
			if (bl[i])
				continue;
			if (s[i][u] == g)
			{
				bl[i] = 1;
				k--;
				for (j = 0; j < n; j++)
				{
					if (s[i][j] == '0')
					{
						if (arr[i] == 1)
						{
							y[0][j].second--;
						}
						else y[0][j].first--;
					}
					else
					{
						if (arr[i] == 1)
						{
							y[1][j].second--;
						}
						else y[1][j].first--;
					}
				}
			}
		}
		//cout << k << ' ';
	}
	cout << "OK\n";
}

int main()
{
	speed;
	//single;
	multi;

	return 0;
}