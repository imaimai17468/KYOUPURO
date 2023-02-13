#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    priority_queue<pair<int, int>> q;
    ll n, m, i, j;
    cin >> n >> m;
    ll a[n], b[m], c[m];
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < m; i++) cin >> b[i] >> c[i];
    for (i = 0; i < n; i++) {
        q.push(make_pair(a[i], 1));
    }
    for (i = 0; i < m; i++) {
        q.push(make_pair(c[i], b[i]));
    }
    ll ans = 0;
    for (i = 0; i < n; i++) {
        pair<int, int> p = q.top();
        q.pop();
        ans += p.first;
        if (p.second > 1) {
            p.second--;
            q.push(p);
        }
    }
    cout << ans << endl;
    return 0;
}
