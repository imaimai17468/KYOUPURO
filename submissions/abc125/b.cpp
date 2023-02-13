#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n], c[n];
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    int cnt = 0;
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = v[i] - c[i];
    }
    sort(ans.begin(), ans.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        if (ans[i] > 0) {
            cnt += ans[i];
        }
    }
    cout << cnt << endl;
    return 0;
}
