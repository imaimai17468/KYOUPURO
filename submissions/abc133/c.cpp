#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define mod 1000000007

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int lcm(int a, int b) { return a * b / gcd(a, b); }

int main() {
    ll l, r;
    cin >> l >> r;
    ll m = 2e10;
    for (ll i = l; i <= r; i++) {
        for (ll j = l; j <= r; j++) {
            if (i < j) {
                m = min(m, (i * j) % 2019);
            }
            if (m == 0) {
                cout << 0 << endl;
                return 0;
            }
        }
    }
    cout << m << endl;
    return 0;
}
