#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, t, w;
    cin >> n >> s >> t >> w;
    int a[n];
    for (int i = 0; i < n - 1; i++) cin >> a[i];

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (w <= t && w >= s) cnt++;
        w += a[i];
    }
    cout << cnt << endl;
    return 0;
}
