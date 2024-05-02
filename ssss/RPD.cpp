#include <iostream>
using namespace std;

void solve()
{
	int n;

	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int max = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int value = arr[i] * arr[j];

			int sum = 0;

			while (value > 0)
			{
				sum = sum + (value % 10);

				value = value / 10;
			}

			if (sum > max)
			{
				max = sum;
			}
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
