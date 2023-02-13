#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    set<ll> st;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (st.count(a[i])) {
            ans++;
        } else {
            st.insert(a[i]);
        }
    }
    cout << ans << endl;
    return 0;
}
