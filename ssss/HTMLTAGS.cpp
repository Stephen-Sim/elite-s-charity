#include <iostream>
using namespace std;

void solve()
{
	string str;

	cin >> str;

	const string constraint = "qwertyuiopasdfghjklzxcvbnm1234567890";

	if (str.size() < 4 || str[0] != '<' || str[1] != '/' || str[str.size() - 1] != '>')
	{
		cout << "Error" << endl;
		return;
	}

	for (int i = 2; i < str.size() - 1; i++)
	{
		bool isContain = false;
		
		for (int j = 0; j < constraint.size(); j++)
		{
			if (str[i] == constraint[j])
			{
				isContain = true;
			}
		}

		if (!isContain)
		{
			cout << "Error" << endl;
			return;
		}
	}

	cout << "Success" << endl;
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
