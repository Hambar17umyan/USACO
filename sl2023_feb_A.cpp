#include <iostream>
using namespace std;
typedef long long ll;

const int N = 105;
ll a[N], b[N], c[N];
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		ll tc, tm;
		cin >> n >> tc >> tm;
		ll i, j;
		for (i = 0; i < n; i++)
		{
			cin >> a[i] >> b[i] >> c[i];
		}
		ll r = -1;
		for (i = tc; i > 0; i--)
		{
			for (j = tm; j > 0; j--)
			{
				bool bl = true;
				for (int k = 0; k < n; k++)
				{
					if (a[k] * i + b[k] * j <= c[k])
					{

					}
					else bl = false;
				}
				if (bl)
				{
					r = min(r, tc - i + tm - j);
					if (r == -1)
						r = tc - i + tm - j;
				}
			}
		}
		cout << r << endl;
	}
	return 0;
}