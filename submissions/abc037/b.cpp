#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int l[q], r[q], t[q];
    vector<int> ans(n, 0);

    for (int i = 0; i < q; i++) {
        cin >> l[i] >> r[i] >> t[i];
    }

    for (int i = 0; i < q; i++) {
        for (int j = l[i] - 1; j <= r[i] - 1; j++) {
            ans[j] = t[i];
        }
    }

    for (int i = 0; i < n; i++) cout << ans[i] << endl;
    return 0;
}
