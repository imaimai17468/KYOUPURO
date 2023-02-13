#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, t, i, ans;
    double dmin = 1e9;
    cin >> n >> t >> a;
    int h[n];
    for (i = 0; i < n; i++) {
        cin >> h[i];
    }

    for (i = 0; i < n; i++) {
        double d;
        d = t - h[i] * 0.006;
        if (abs(a - d) < abs(a - dmin)) {
            dmin = d;
            ans = i + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
