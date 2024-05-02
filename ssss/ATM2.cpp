#include <iostream>
using namespace std;

void solve()
{
	int n, k;

	cin >> n >> k;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	string result = "";

	for (int i = 0; i < n; i++)
	{
		if (k >= arr[i])
		{
			result += '1';

			k -= arr[i];
		}
		else
			result += '0';

	}

	cout << result << endl;
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
