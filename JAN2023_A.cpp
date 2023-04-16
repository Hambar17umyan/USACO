#include <iostream>
using namespace std;

int arr[100005];
int main()
{
	int i, j, n;
	string s;
	cin >> n;
	cin >> s;
	int fh, lh, fg, lg;
	fh = lh = lg = fg = -1;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		arr[i]--;
		if (s[i] == 'H')
		{
			if (fh == -1)
				fh = i;
			lh = i;
		}
		else if (s[i] == 'G')
		{
			if (fg == -1)
				fg = i;
			lg = i;
		}
	}
	int res = 0;
	bool hb = false, gb = false;
	if (lh <= arr[fh])
	{
		hb = true;
	}
	if (lg <= arr[fg])
	{
		gb = true;
	}
	if (hb && gb)
	{
		res++;
		if (fg == 0)
		{
			for (i = 1; i < fh; i++)
			{
				if (arr[i] >= fh)
				{
					res++;
				}
			}
		}
		else
		{
			for (i = 1; i < fg; i++)
			{
				if (arr[i] >= fg)
				{
					res++;
				}
			}
		}
	}
	else if (hb)
	{
		for (i = 0; i < fh; i++)
		{
			if (arr[i] >= fh)
			{
				res++;
			}
		}
	}
	else
	{
		for (i = 0; i < fg; i++)
		{
			if (arr[i] >= fg)
			{
				res++;
			}
		}
	}
	cout << res << endl;

	return 0;
}