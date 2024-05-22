#include <iostream>
#include <vector>
using namespace std;

void solve()
{
	string a, b;

	cin >> a;
	cin >> b;

	vector<char> vec_a, vec_b;
	
	for (int i = 0; i < a.size(); i++)
	{
		vec_a.push_back(a[i]);
	}

	for (int i = 0; i < b.size(); i++)
	{
		vec_b.push_back(b[i]);
	}

	int maxString = 0;
	bool isTrue = true;

	do
	{
		string str;

		for (int i = 0; i < b.size(); i++)
		{
			for (int j = 0; j < vec_a.size(); j++)
			{
				if (vec_b[i] == vec_a[j])
				{
					str += vec_a[j];

					vec_a.erase(vec_a.begin() + j);

					break;
				}
			}
		}

		if (str.size() == b.size())
		{
			maxString++;
			str = "";
		}
		else
			isTrue = false;

	} while (isTrue);

	cout << maxString << endl;
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
