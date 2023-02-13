#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, ans = 0;
    cin >> a >> b;
    if (a > b) {
        ans = ans + a;
        a--;
    } else {
        ans = ans + b;
        b--;
    }

    if (a > b) {
        ans = ans + a;
        a--;
    } else {
        ans = ans + b;
        b--;
    }

    cout << ans << endl;
    return 0;
}
