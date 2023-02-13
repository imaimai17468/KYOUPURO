#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool a = false, b = false, c = false;
    for (int i = 0; i < 3; i++) {
        if (s[i] == 'a') {
            a = true;
        }
        if (s[i] == 'b') {
            b = true;
        }
        if (s[i] == 'c') {
            c = true;
        }
    }
    if (a && b && c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
