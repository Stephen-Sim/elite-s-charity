#include <iostream>
using namespace std;

#define ll long long

bool solve()
{
	ll n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int sum = (arr[i] + arr[j] + arr[k]) % 10;
				
				if (sum == 3)
				{
					return true;
				}
			}
		}
	}

	return false;
}

int main()
{
	int c = 1;
	cin >> c;

	while (c--)
	{
		cout << (solve() ? "YES" : "NO") << endl;
	}

	return 0;
}
