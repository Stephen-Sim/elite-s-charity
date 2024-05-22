#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int findIndexOfLargest(const std::vector<int>& vec) {
    return std::distance(vec.begin(), std::max_element(vec.begin(), vec.end()));
}

int findIndexOfSecondLargest(const std::vector<int>& vec, int largestIndex) {
    int secondMaxIndex = (largestIndex == 0) ? 1 : 0;
    for (int i = 0; i < vec.size(); ++i) {
        if (i != largestIndex && (vec[i] > vec[secondMaxIndex] || secondMaxIndex == largestIndex)) {
            secondMaxIndex = i;
        }
    }
    return secondMaxIndex;
}

bool hasTwoZeros(const std::vector<int>& vec) {
    int zeroCount = 0;
    for (int num : vec) {
        if (num == 0) {
            zeroCount++;
            if (zeroCount == 2) {
                return true; 
            }
        }
    }
    return false;
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        vector<int> num(3);
        
        cin >> num[0] >> num[1] >> num[2];
        
        int sum = accumulate(num.begin(), num.end(), 0);
        
        
        if (num[0] == 0 && num[1] == 0 && num[2] == 0) {
            cout << "0" << endl;
            continue;
        }
        
        if(sum%2 == 0){
            if (hasTwoZeros(num)) {
                cout << "-1" << endl;
                continue;
            }
            
            int draw = 0;
            
            while (!hasTwoZeros(num)) {
                int largestIndex = findIndexOfLargest(num);
                int secondLargestIndex = findIndexOfSecondLargest(num, largestIndex);
                num[largestIndex]--;
                num[secondLargestIndex]--;
                draw++;
            }
            
            if (num[0] != 0 && num[1] != 0 && num[2] != 0 && (num[0] <= 2 || num[1] <= 2 || num[2] <= 2)) {
                cout << "-1" << endl;
                continue;
            }
            
            cout << draw << endl;
        }

        
    }

    return 0;
}
