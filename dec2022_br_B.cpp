#include <iostream>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <string>
#include <iomanip>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
#include <vector>
#include <iterator>
using namespace std;

//defines
#define ll long long
#define usg unsigned
#define kap map
#define print(x, n) for(int for_loop = 0; for_loop < n; for_loop++){cout<<x[for_loop]<<' ';}cout<<endl; 
#define read(x, n) for(int for_loop = 0; for_loop < n; for_loop++){cin>>x[for_loop];} 
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ratdig(x) cout << fixed << setprecision(x);
#define xfixdig(x) cout << setprecision(x);
#define multi int t; cin>>t; presolve(); while(t--) solve()
#define single presolve(); solve(); return 0
#define rev(x) reverse(x.begin(), x.end())

//functions
void yn(bool b)
{
	if (b)
	{
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
}

ll gcd(ll a, ll b) {
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	return gcd(b % a, a);
}

ll lcm(ll a, ll b)
{
	return (a * b) / gcd(a, b);
}

string to2(ll a)
{
	string r = "";
	for (ll i = a; i > 0; )
	{
		ll k = i % 2;
		i /= 2;
		char c = k + 48;
		r += c;
	}
	if (a == 0)
	{
		r = "0";
	}
	rev(r);

	return r;
}

ll binpow(ll a, ll b)
{
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}

//body
void presolve()
{

}

bool b[100005];
char res[100005];
void solve()
{
	string s;
	ll i, j, k, m, n;
	cin >> n >> k;
	cin >> s;
	queue<int>h, g;
	for (i = 0; i < n; i++)
	{
		b[i] = 0;
		res[i] = '.';
		if (s[i] == 'G')
			g.push(i);
		else h.push(i);
	}
	int rrr = 0;
	while (!h.empty() || !g.empty())
	{
		int u;
		char y = '.';
		if (h.empty())
		{
			u = g.front();
			g.pop();
			y = 'G';
		}
		else if (g.empty())
		{
			u = h.front();
			h.pop();
			y = 'H';
		}
		else
		{
			u = min(h.front(), g.front());
			if (h.front() == u)
			{
				h.pop();
				y = 'H';
			}
			else
			{
				g.pop();
				y = 'G';
			}
		}
		long long zzz = 0;
		for (i = min(u + k, n - 1); i >= max(u - k, zzz); i--)
		{
			if (res[i] == '.')
			{
				res[i] = y;
				rrr++;
				break;
			}
		}
		if (y == 'G')
		{
			while (!g.empty())
			{
				if (g.front() < i)
				{
					if (g.front() + k >= i)
						g.pop();
					else break;
				}
				else
				{
					if (g.front() - k <= i)
						g.pop();
					else break;
				}
			}
		}
		else
		{
			while (!h.empty())
			{
				if (h.front() < i)
				{
					if (h.front() + k >= i)
						h.pop();
					else break;
				}
				else if (h.front() - k <= i)
					h.pop();
				else break;
			}
		}
	}
	cout << rrr << endl;
	for (i = 0; i < n; i++)
		cout << res[i];
	cout << endl;
}

int main()
{
	speed;
	//single;
	multi;

	return 0;
}