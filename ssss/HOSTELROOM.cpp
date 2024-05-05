#include <iostream>
using namespace std;

#define ll long long

void solve()
{
	int  n, x;

	cin >> n >> x;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int max = x;

	for (int i = 0; i < n; i++)
	{
		x += arr[i];
		
		if (x >= max)
		{
			max = x;
		}
	}

	cout << max << endl;
}

int main()
{
	int c = 1;
	cin >> c;

	while (c--)
	{
		solve();
	}

	return 0;
}
