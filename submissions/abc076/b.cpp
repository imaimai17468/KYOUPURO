#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, i, ans;
    int sum = 1;
    cin >> n >> k;

    for (i = 0; i < n; i++) {
        if (sum * 2 > sum + k) {
            sum += k;
            ans = sum;
        } else {
            sum *= 2;
            ans = sum;
        }
    }
    cout << ans << endl;
    return 0;
}
