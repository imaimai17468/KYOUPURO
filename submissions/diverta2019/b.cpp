#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int r, g, b, n;
    cin >> r >> g >> b >> n;
    int ans = 0;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int num = n - r * i - g * j;
            if (num >= 0 && num % b == 0) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
