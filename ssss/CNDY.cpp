#include <iostream>
using namespace std;

void solve()
{
	int n;

	cin >> n;

	int* arr = new int[n * 2];

	for (int i = 0; i < n * 2; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n * 2; i++)
	{
		int count = 0;

		int value = arr[i];

		for (int j = 0; j < n * 2; j++)
		{
			if (value == arr[j])
			{
				count++;

				if (count == 3)
				{
					cout << "No" << endl;
					return;
				}
			}
		}
	}

	cout << "Yes" << endl;
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
