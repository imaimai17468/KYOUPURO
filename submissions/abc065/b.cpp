#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, temp, ans = 1, num = 1;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (ans < n) {
        num = a[num - 1];
        temp = a[num - 1];
        temp = a[temp - 1];
        if (num == 2) break;
        ans++;
    }

    if (ans < n) {
        cout << ans << endl;
        return 0;

    } else {
        cout << "-1" << endl;
        return 0;
    }
}
