#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d, x;
    cin >> n >> d >> x;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        x++;
        if (d / a[i] >= 1) {
            x += (d - 1) / a[i];
        }
    }
    cout << x << endl;
    return 0;
}
