#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, R = 0, B = 0;
    ;
    cin >> n;
    char s[n + 1];
    for (i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (i = 0; i < n; i++) {
        if (s[i] == 'R') {
            R++;
        } else {
            B++;
        }
    }

    if (R > B) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
