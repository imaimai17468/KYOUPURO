#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    long long l[m], r[m];
    for (long long i = 0; i < m; i++) {
        cin >> l[i] >> r[i];
    }
    long long mi = 0, ma = 100001;
    for (long long i = 0; i < m; i++) {
        mi = max(mi, l[i]);
        ma = min(ma, r[i]);
    }
    int ans = 0;
    for (long long i = 1; i <= n; i++) {
        bool chk = false;
        if (i < mi || i > ma) chk = true;
        if (chk == false) ans++;
    }
    // cout << mi <<  " " << ma << endl;
    cout << ans << endl;
    return 0;
}
