#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PI 3.1415926535897932384626433

int main() {
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] >= t) {
            ans += t;
        } else {
            ans += a[i] - a[i - 1];
        }
    }
    cout << ans + t << endl;
    return 0;
}
