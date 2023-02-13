#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    int pop[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> pop[i];
    }

    string ans;
    int cnt = 0;
    int mp = 0;
    for (int i = 0; i < n; i++) {
        cnt += pop[i];
        if (mp < pop[i]) {
            mp = pop[i];
            ans = s[i];
        }
    }
    if (cnt / mp < 2) {
        cout << ans << endl;
    } else {
        cout << "atcoder" << endl;
    }
    return 0;
}
