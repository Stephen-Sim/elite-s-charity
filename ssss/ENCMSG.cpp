#include <iostream>
using namespace std;

void solve()
{
	int n;

	cin >> n;

	string str;

	cin >> str;

	for (int i = 0; i < str.size() - 1; i += 2)
	{
		char temp = str[i];
		str[i] = str[i + 1];
		str[i + 1] = temp;
	}

	string alphabets = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < str.size(); i++)
	{
		int count = 0;

		for (int j = 0; j < alphabets.size(); j++)
		{
			if (str[i] == alphabets[j])
			{
				count = j;
				break;
			}
		}

		str[i] = alphabets[26 - count - 1];
	}

	cout << str << endl;
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
