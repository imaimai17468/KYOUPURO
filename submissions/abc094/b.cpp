#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    int a[n];
    for (int i = 0; i < m; i++) cin >> a[i];

    int left = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < m; j++) {
            if (a[j] == i) left++;
        }
    }
    int right = 0;
    for (int i = x; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[j] == i) right++;
        }
    }
    int ans;
    ans = min(right, left);
    cout << ans << endl;
    return 0;
}
