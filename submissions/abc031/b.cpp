#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, h, n;
    cin >> l >> h >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i] <= h && a[i] >= l) {
            cout << 0 << endl;
        } else if (a[i] > h) {
            cout << -1 << endl;
        } else {
            cout << l - a[i] << endl;
        }
    }
    return 0;
}
