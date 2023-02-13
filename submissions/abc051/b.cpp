#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int s, k;
    cin >> k >> s;
    int ans = 0;
    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            int num = s - i - j;
            if (num < 0 || num > k) continue;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
