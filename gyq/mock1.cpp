// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {

    string A, B, newA;
    cin >> A >> B;

    transform(A.begin(), A.end(), A.begin(), ::tolower);
    transform(B.begin(), B.end(), B.begin(), ::tolower);

    int size = B.length();

    vector<int> count(size);

    for (int i = 0; i < size; i++) {
        newA = A;
        for (char a : newA) {
            if (a == B[i]) {
                count[i] ++;

                int index = newA.find(a);
                // remove
                newA.erase(index, 1);

            }
        }
    }

    cout << *min_element(count.begin(), count.end());

    return 0;
}