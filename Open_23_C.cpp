#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;

queue<ll>q[8];
ll ind[200005];
int main()
{
	string s;
	cin >> s;
	long long n = s.size();
	ll i, j;
	ll res = 0;
	ll k = 1;
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'b')
		{
			q[1].push(k);
			ind[k] = i;
			k++;
		}
		else if (s[i] == 'e')
		{
			while (!q[5].empty())
			{
				res += (n - i) * (ind[q[5].front()] + 1);
				q[5].pop();
			}
			while (!q[1].empty())
			{
				q[2].push(q[1].front());
				q[1].pop();
			}
		}
		else if (s[i] == 's')
		{
			while (!q[2].empty())
			{
				q[3].push(q[2].front());
				q[2].pop();
			}
			while (!q[3].empty())
			{
				q[4].push(q[3].front());
				q[3].pop();
			}
		}
		else if (s[i] == 'i')
		{
			while (!q[4].empty())
			{
				q[5].push(q[4].front());
				q[4].pop();
			}
		}
	}
	cout << res << endl;
	
	return 0;
}