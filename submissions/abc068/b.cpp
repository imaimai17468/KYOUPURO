#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0, m = 0;
    if (n == 1) {
        cout << '1' << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        int num = i;
        int cnt = 0;
        while (1) {
            if (num % 2 != 0) break;
            num /= 2;
            cnt++;
        }
        if (cnt > m) {
            m = cnt;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
