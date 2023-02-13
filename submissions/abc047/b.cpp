#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, n;
    cin >> w >> h >> n;
    int x[n], y[n], a[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> a[i];
    }

    int minx = 0, miny = 0;
    int maxx = w, maxy = h;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            minx = max(minx, x[i]);
        }
        if (a[i] == 2) {
            maxx = min(maxx, x[i]);
        }
        if (a[i] == 3) {
            miny = max(miny, y[i]);
        }
        if (a[i] == 4) {
            maxy = min(maxy, y[i]);
        }
    }
    // cout << maxx << minx << maxy << miny << endl;
    int ans = (maxx - minx) * (maxy - miny);
    if (ans < 0 || maxx - minx < 0 || maxy - miny < 0)
        cout << 0 << endl;
    else
        cout << ans << endl;
    return 0;
}
