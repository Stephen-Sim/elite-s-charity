#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    int t;
    cin >> t;
      
    while(t--){
        vector<int>num(2);
        
        cin >> num[0] >> num[1];
        
        sort(num.begin(), num.end());
        
        cout << num[0] << " " << num[1] << endl; 
        
    }
    
    
    return 0;
    
}