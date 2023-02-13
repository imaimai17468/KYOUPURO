#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, ans = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i / 10000 == i % 10 && i / 1000 % 10 == i / 10 % 10) {
            ans++;
            // cout << i << endl;
        }
    }
    cout << ans << endl;
    return 0;
}
