#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        int count = 0;
        int j = n - 1;
        
        for (int i = n - 1; i >= 0; --i) {
            if (a[i] > b[j]) {
                count++;
                
            } else {
                j--;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}
