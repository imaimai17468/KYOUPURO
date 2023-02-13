#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    int t[n + 1];
    for (i = 0; i < n; i++) cin >> t[i];
    int m;
    cin >> m;
    int p[m + 1], x[m + 1];
    for (i = 0; i < m; i++) {
        cin >> p[i] >> x[i];
    }

    for (i = 0; i < m; i++) {
        int sum = 0;
        for (j = 0; j < n; j++) {
            if (p[i] - 1 == j) {
                sum += x[i];
            } else {
                sum += t[j];
            }
        }
        cout << sum << endl;
    }
    return 0;
}
