#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int m[n];
    int ans = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
        sum += m[i];
    }
    x -= sum;
    ans += n;
    sort(m, m + n);
    if (x > 0) {
        ans += (x / m[0]);
    }
    cout << ans << endl;
    return 0;
}
