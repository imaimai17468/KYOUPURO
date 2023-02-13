#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i, a;
    cin >> n >> m;
    vector<int> ans(n, 0);
    for (i = 0; i < m * 2; i++) {
        cin >> a;
        ans.at(a - 1) += 1;
    }

    for (i = 0; i < n; i++) {
        cout << ans.at(i) << endl;
    }
    return 0;
}
