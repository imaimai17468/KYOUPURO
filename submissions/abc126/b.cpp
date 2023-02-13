#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a = (s[0] - '0') * 10 + s[1] - '0';
    int b = (s[2] - '0') * 10 + s[3] - '0';
    bool mmyy = a <= 12 && a >= 1;
    bool yymm = b <= 12 && b >= 1;

    if (mmyy) {
        if (yymm) {
            cout << "AMBIGUOUS" << endl;
        } else {
            cout << "MMYY" << endl;
        }
    } else if (yymm) {
        cout << "YYMM" << endl;
    } else {
        cout << "NA" << endl;
    }
    return 0;
}
