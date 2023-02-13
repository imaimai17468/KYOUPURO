#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    int ans = 0;
    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) cnt++;
        }
        if (cnt == 8) ans++;
        cnt = 0;
    }
    cout << ans << endl;
    return 0;
}
