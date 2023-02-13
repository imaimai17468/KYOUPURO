#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = b - (a % b);
    if (ans == b) {
        cout << 0 << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}
