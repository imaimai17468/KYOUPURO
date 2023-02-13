#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PI 3.1415926535897932384626433

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    string s[n];
    int d[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> d[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == "West") {
            if (d[i] >= a && d[i] <= b) {
                ans -= d[i];
            } else if (d[i] < a) {
                ans -= a;
            } else {
                ans -= b;
            }
        } else if (s[i] == "East") {
            if (d[i] >= a && d[i] <= b) {
                ans += d[i];
            } else if (d[i] < a) {
                ans += a;
            } else {
                ans += b;
            }
        }
        // cout << ans << endl;
    }

    if (ans < 0) {
        cout << "West"
             << " " << abs(ans) << endl;
    } else if (ans > 0) {
        cout << "East"
             << " " << abs(ans) << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
