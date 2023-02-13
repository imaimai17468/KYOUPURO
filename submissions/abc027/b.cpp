#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    double per = sum / n;
    if (sum % n != 0) {
        cout << -1 << endl;
        return 0;
    }
    double tmp = 0;
    int ans = 0, num = 0;
    for (int i = 0; i < n; i++) {
        tmp += a[i];
        num++;
        if (tmp / num == per) {
            ans += num - 1;
            tmp = 0;
            num = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
