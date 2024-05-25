#include <iostream>
#include <string>
using namespace std;

void selectionSort(int *arr, int t){
    int i, j , min;

    for(i=0; i<t-1; i++){
        min = i;
        for(j=i+1; j<t; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main(){

    int t = 10;
    int arr[t];

    for(int i=0; i<t; i++){
        cin >> arr[i];
    }
    
    selectionSort(arr, t);

    for(int j=0; j<t; j++){
        cout << arr[j] << " ";
    }

}