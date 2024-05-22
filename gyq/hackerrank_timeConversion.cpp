#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string period = s.substr(8, 2);  // AM/PM part
    int hour = stoi(s.substr(0, 2)); // hour part
    string minute = s.substr(3, 2);  // minute part
    string second = s.substr(6, 2);  // second part

    if (period == "AM") {
        if (hour == 12) {
            hour = 0;
        }
    } else { // PM case
        if (hour != 12) {
            hour += 12; 
        }
    }
    
    ostringstream oss;
    oss << setw(2) << setfill('0') << hour << ":" << minute << ":" << second;
    return oss.str();

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
