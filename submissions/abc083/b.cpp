#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        int dig = 0;
        int num = i;
        while (num) {
            dig += num % 10;
            num /= 10;
        }
        if (dig >= a && dig <= b) {
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}
