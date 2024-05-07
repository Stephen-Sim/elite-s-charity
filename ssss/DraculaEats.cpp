#include <iostream>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	n--;

	int total = n / 7;

	if (n % 7 != 0)
	{
		total++;
	}

	cout << total << endl;
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
