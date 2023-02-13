#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') ans++;
    }
    int m = ans;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') ans--;
        if (s[i] == '#') ans++;
        m = min(ans, m);
    }
    cout << m << endl;
    return 0;
}
