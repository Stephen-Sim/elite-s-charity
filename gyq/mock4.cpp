#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int A, B, X, Y;
    
    bool yes = false;
    
    cin >> A >> B >> X >> Y;
    

    if(A >= 20 && B <= 40 && X >= 0 && Y <= 20){
        
        int balance = A-B;
        
        if(balance >= 0){
            
            if(Y >= balance){
                yes = true;
            }
            else{
                yes = false;
            }
            
        }
        else{
            
            if(X >= balance && X > 0){
                yes = true;
            }
            else{
                yes = false;
            }
            
        }
        
        
    }
    
    if(yes){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }
    
    return 0;
    
}