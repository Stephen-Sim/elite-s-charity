#include <iostream>
#include <map>
using namespace std;

#define ll long long

void solve()
{
	ll n;
	cin >> n;

	map<string, ll> map;

	for (ll i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		if (map[str] == 0)
		{
			cout << "OK" << endl;
		}
		else
		{
			cout << str << map[str] << endl;
		}

		map[str]++;
	}
}

int main()
{
	int c = 1;
	// cin >> c;

	while (c--)
	{
		solve();
	}

	return 0;
}
