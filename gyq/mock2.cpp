#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, times = 0, left = 0;
    cin >> N;

    if(N > 0 && N <= 1000){
        times = N/7;
        left = N%7;
        
        if(left > 1){
            times ++;
        }
        
    }
    
    cout << times << endl;

}