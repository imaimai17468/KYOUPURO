#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, ans = 1e9;
    cin >> n >> t;
    int c[n], time[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> time[i];
    }

    for (int i = 0; i < n; i++) {
        if (time[i] <= t && c[i] < ans) {
            ans = c[i];
        }
    }
    if (ans == 1e9) {
        cout << "TLE" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
