#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string s;
    string a;
    cin >> n >> s >> k;
    a[0] = s[k - 1];

    for (int i = 0; i < n; i++) {
        if (a[0] != s[i]) {
            s[i] = '*';
        }
    }

    cout << s << endl;
    return 0;
}
