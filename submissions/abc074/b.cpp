#include <bits/stdc++.h>

#include <cstdlib>
using namespace std;

int main() {
    int n, k, i;
    int ans = 0;
    cin >> n >> k;
    int x[n + 1];
    for (i = 0; i < n; i++) cin >> x[i];

    for (i = 0; i < n; i++) {
        if (x[i] * 2 < abs(k - x[i]) * 2) {
            ans += x[i] * 2;
        } else {
            ans += abs(k - x[i]) * 2;
        }
    }
    cout << ans << endl;
    return 0;
}
