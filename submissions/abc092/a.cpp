#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if (a > b)
        ans += b;
    else
        ans += a;
    if (c > d)
        ans += d;
    else
        ans += c;
    cout << ans << endl;
    return 0;
}
