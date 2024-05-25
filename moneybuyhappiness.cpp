#include <iostream>
#include <vector>
using namespace std;
int main() {

	int tc;
	cin >> tc;
	while (tc--) {
		// get months and salary
		int months, wage;
		cout << "input months:";
		cin >> months;
		cout << "input wage: ";
		cin >> wage;

		vector<int> cost(months);
		vector<int> happy(months);
		for (int i = 0; i < months; i++) {
			cin >> cost.at(i) >> happy.at(i);
		}

		int current = 0, bank = 0, happiness = 0;
		for (int i = 0; i < months; i++) {
			current = bank;

			if (current >= cost.at(i)) {
				current -= cost.at(i);
				happiness += happy.at(i);
			}
			bank = current + wage;
		}
		cout << "Total happiness: " << happiness << endl;
	}
}
