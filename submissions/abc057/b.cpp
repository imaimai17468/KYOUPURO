#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> n >> m;
    int a[n], b[n], c[m], d[m];
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    for (int i = 0; i < m; i++) cin >> c[i] >> d[i];

    for (int i = 0; i < n; i++) {
        long long min = 1000000000;
        int ans = 1;
        for (int j = 0; j < m; j++) {
            int ab = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            // cout << ab << endl;
            if (ab < min) {
                ans = j + 1;
                min = ab;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
