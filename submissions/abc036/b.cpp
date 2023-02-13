#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    string s[n];
    for (i = 0; i < n; i++) cin >> s[i];

    for (i = 0; i < n; i++) {
        for (j = n - 1; j >= 0; j--) {
            cout << s[j][i];
        }
        cout << endl;
    }
    return 0;
}
