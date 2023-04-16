#include <iostream>
using namespace std;

int arr[100005];
int main()
{
	int i, j, n;
	cin >> n;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		k += arr[i];
	}
	i = -1;
	while (k)
	{
		for (j = i + 1; j < n; j++)
		{
			k--;
			arr[j]--;
			cout << "R";
			i = j;
			if (arr[j + 1] == 0)
				break;
		}
		bool uu = true;
		for (; i >= 0; i--)
		{
			if (arr[i] == 1)
			{
				if (!uu)
				{
					break;
				}
			}
			else uu = false;
			arr[i]--;
			cout << "L";
			k--;
		}
	}

	return 0;
}