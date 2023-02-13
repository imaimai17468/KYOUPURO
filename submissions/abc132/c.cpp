#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    ll n;
    cin >> n;
    ll d[n];
    for (ll i = 0; i < n; i++) {
        cin >> d[i];
    }
    sort(d, d + n);

    int cen = n / 2;
    int l = d[cen - 1], r = d[cen];
    if (r == l) {
        cout << 0 << endl;
        return 0;
    }
    cout << r - l << endl;
    return 0;
}
