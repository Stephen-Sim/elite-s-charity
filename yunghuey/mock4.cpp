#include <iostream>
using namespace std;

int main(){
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;

    if (A > B){
        int f = A-B;
        if(Y>f){
            cout << "yes";
            exit(0);
        }
        cout << "no";
        exit(0);
    }
    else {
        int f = B-A;
        if (X > f){
            cout << "yes";
            exit(0);
        }
        cout << "no";
        exit(0);
    }
    return 0;
}