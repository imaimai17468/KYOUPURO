#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    if (s[a] != '-') {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < a; i++) {
        if (s[i] == '-') {
            cout << "No" << endl;
            return 0;
        }
    }
    for (int i = a + 1; i < a + b + 1; i++) {
        if (s[i] == '-') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
