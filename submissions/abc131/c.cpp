#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d;
    e = c;
    f = d;
    ll ans = 0;
    ll x = e * f;
    ll tmp, r;
    if (e < f) {
        tmp = e;
        e = f;
        f = tmp;
    }
    r = e % f;
    while (r != 0) {
        e = f;
        f = r;
        r = e % f;
    }
    // cout << x / f << endl;
    ans += b / c - a / c + !(a % c);
    ans += b / d - a / d + !(a % d);
    ans -= b / (x / f) - a / (x / f) + !(a % (x / f));
    cout << (b - a) - ans + 1 << endl;
    return 0;
}
