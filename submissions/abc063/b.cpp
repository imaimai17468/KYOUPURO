#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (char c = 'a'; c <= 'z'; c++) {
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c) cnt++;
        }
        if (cnt > 1) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}
