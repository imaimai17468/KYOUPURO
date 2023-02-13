#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] != 'A') {
        cout << "WA" << endl;
        return 0;
    }

    if (count(s.begin() + 2, s.end() - 1, 'C') != 1) {
        cout << "WA" << endl;
        return 0;
    }

    int len = s.size();
    for (int i = 1; i < len; i++) {
        if (s[i] == 'C') continue;
        if (s[i] >= 'a' && s[i] <= 'z') {
            continue;
        } else {
            cout << "WA" << endl;
            return 0;
        }
    }
    cout << "AC" << endl;
    return 0;
}
