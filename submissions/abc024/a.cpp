#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, k, s, t;
    cin >> a >> b >> c >> k >> s >> t;
    int ans = a * s + b * t;
    if (s + t >= k) ans -= (s + t) * c;
    cout << ans << endl;
    return 0;
}
