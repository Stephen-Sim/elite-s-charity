#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n)
{
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int size, tests;

	cin >> size >> tests;

	vector<int> vec(size);

	for (int i = 0; i < size; i++)
	{
		cin >> vec[i];
	}

	while (tests--)
	{
		int L, R;
		
		cin >> L >> R;

		int count = 0;

		for (int i = L; i < R; i++)
		{
			for (int j = i + 1; j <= R; j++)
			{
				int sum = vec[i - 1] + vec[j - 1];
				if (isPrime(sum))
				{
					count++;
				}
			}

		}

		cout << count << endl;
	}

	return 0;
}
