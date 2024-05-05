#include <iostream>
using namespace std;

#define ll long long

void solve()
{
	int n;

	cin >> n;

	string str;

	cin >> str;

	const char vowels[] = {'a', 'e', 'i', 'o', 'u'};

	int count = 0;
	bool isTrue = false;

	for (int i = 0; i < n; i++)
	{
		bool isContain = false;

		for (int j = 0; j < 5; j++)
		{
			if (str[i] == vowels[j])
			{
				isContain = true;
			}
		}

		count = isContain ? 0 : count + 1;

		if (count == 4)
		{
			isTrue = true;
			break;
		}
	}

	cout << (!isTrue ? "YES" : "NO") << endl;
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
