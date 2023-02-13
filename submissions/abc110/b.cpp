#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int i, min = y, max = x;
    for (i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > max) max = a;
    }
    for (i = 0; i < m; i++) {
        int b;
        cin >> b;
        if (b <= min) min = b;
    }
    // cout << max << min << endl;

    if (max + 1 <= min)
        cout << "No War" << endl;
    else
        cout << "War" << endl;
    return 0;
}
