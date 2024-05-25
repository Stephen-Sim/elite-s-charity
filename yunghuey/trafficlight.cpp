// https://codeforces.com/problemset/problem/1744/C
#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;

int main() {
    int n;
    char curr;
    cin >> n >> curr;
    string s;
    cin >> s;
    // like two array
    map<char, vector<int>> mp;
    for (int i = 0; i < n; i++) {
        if (s[i] == curr)
            // record the position of r
            mp[curr].push_back(i);
        if (s[i] == 'g') {
            
            mp['g'].push_back(i);
            // n+1 because need to turn around
            mp['g'].push_back(n + i);
        }
    }
    
    int ans = 0;
    for (int i = 0; i < mp[curr].size(); i++) {
        cout << "current "<<  mp[curr][i] << endl;

        int mini = INT_MAX;
        for (int j = 0; j < mp['g'].size(); j++) {
                cout  << "g " << mp['g'][i] << endl;
            // means need to wait 
            if (mp['g'][j] > mp[curr][i]){
                // compare previous shorter waiting second with new value, take the maximum
                cout  << "before mini " << mini << endl;
                // take minimum because the INT_MAX will be very big
                mini = min(mini, mp['g'][j] - mp[curr][i]);
                cout  << "after mini " << mini << endl;
            }
        }
        ans = max(ans, mini);
    }
    if (curr == 'g')
        cout << 0 << endl;
    else
        cout << ans << endl;

    return 0;
}
