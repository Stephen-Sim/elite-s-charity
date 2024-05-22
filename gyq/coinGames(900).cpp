#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<char> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int count = 0;
        
        for (int i = 0; i <n; i++) {
            if(a[i] == 'U' || a[i] == 'u'){
                count ++;
            }
        }
        
        if(count % 2 == 1){
             cout << "YES" << endl;
        }
        else{
             cout << "NO" << endl;
        }
       
    }
    return 0;
}
