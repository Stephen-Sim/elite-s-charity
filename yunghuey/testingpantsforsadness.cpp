// https://codeforces.com/problemset/problem/103/A
#include <iostream>
using namespace std;

int n, choice[105], click[105];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> choice[i];
    }
    for (int i = 1; i <= n; i++) {
        click[i] = click[i - 1] + choice[i] * i - (i - 1);
    }
    cout << click[n];
    return 0;
}
