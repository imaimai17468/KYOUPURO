#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    int ans = 0;
    cin >> n;
    int a[n + 1];

    for (i = 0; i < n; i++) {
        int a;
        cin >> a;
        while (a % 2 == 0 || a % 3 == 2) {
            a--;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
