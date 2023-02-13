#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i, j, ans = 0;
    cin >> n >> m;
    vector<int> a(m + 1, 0);
    for (i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (j = 0; j < k; j++) {
            int num;
            cin >> num;
            a[num - 1]++;
        }
    }

    for (i = 0; i < m; i++) {
        // cout << a[i] << endl;
        if (n == a[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}
