#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'legoBlocks' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

int legoBlocks(int n, int m) {
    const int MOD = 1000000007;
    
    vector<int> countRowWays(m + 1, 0);
    countRowWays[0] = 1;
    
    for (int width = 1; width <= m; ++width) {
        if (width >= 1) 
            countRowWays[width] = (countRowWays[width] + countRowWays[width - 1]) % MOD;
        if (width >= 2) 
            countRowWays[width] = (countRowWays[width] + countRowWays[width - 2]) % MOD;
        if (width >= 3) 
            countRowWays[width] = (countRowWays[width] + countRowWays[width - 3]) % MOD;
        if (width >= 4) 
            countRowWays[width] = (countRowWays[width] + countRowWays[width - 4]) % MOD;
    }

    vector<int> totalWays(m + 1, 0);
    
    for (int i = 0; i <= m; ++i) {
        totalWays[i] = 1;
        for (int j = 0; j < n; ++j) {
            totalWays[i] = (1LL * totalWays[i] * countRowWays[i]) % MOD;
        }
    }

    vector<int> validWays = totalWays;
    
    for (int width = 1; width <= m; ++width) {
        for (int k = 1; k < width; ++k) {
            validWays[width] = (validWays[width] - (1LL * validWays[k] * totalWays[width - k]) % MOD + MOD) % MOD;
        }
    }

    return validWays[m];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);

        int m = stoi(first_multiple_input[1]);

        int result = legoBlocks(n, m);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
