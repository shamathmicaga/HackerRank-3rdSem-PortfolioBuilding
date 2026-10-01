#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));

    string period = s.substr(8, 2);

    if (period == "AM") {
        if (hour == 12) {
            s[0] = '0';
            s[1] = '0';
        }
    }
    else {
        if (hour != 12) {
            hour += 12;

            s[0] = char('0' + hour / 10);
            s[1] = char('0' + hour % 10);
        }
    }

    s.erase(8, 2);

    return s;
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
