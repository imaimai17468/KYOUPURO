#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, ans = 0;
    cin >> n;
    int a[n + 1];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (1) {
        for (i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                a[i] /= 2;
            } else {
                cout << ans << endl;
                return 0;
            }
        }
        ans++;
    }
}
