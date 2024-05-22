#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long

void solve()
{
	ll n;

	cin >> n;

	vector<ll> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	map<int, int> m;

	int ans = 0, max = 0;

	for (int i = 0; i < n; i++)
	{
		if (m[v[i]] == 0)
		{
			m[v[i]] = 1;
			ans++;
		}
		else
		{
			m[v[i]] = 0;
			ans--;
		}

		if (ans > max)
		{
			max = ans;
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
