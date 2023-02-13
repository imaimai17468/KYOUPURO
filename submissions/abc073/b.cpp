#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, ans;
    cin >> n;
    int l[n + 1], r[n + 1];
    for (i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }

    for (i = 0; i < n; i++) {
        ans += r[i] - l[i] + 1;
    }
    cout << ans << endl;
}
