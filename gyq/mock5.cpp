#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

// with GPT

int main(){
    
    string input_string;
    getline(cin, input_string);
    istringstream iss(input_string);
    
    vector<string> words;
    string word;
    
    while (iss >> word) {
        words.push_back(word);
    }

    
    for(int i=0; i<words.size(); i++){
        for(int j = 0; j<words.size(); j++){
            if (words[i].find(words[j]) != std::string::npos && i!=j) {
                words.erase(words.begin() + j);
            }
        }
    }
    
    cout << words.size() <<endl;
    
    return 0;
    
}