#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    double ans = 0;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = i; j < k; j *= 2) {
            cnt++;
        }
        // cout << cnt << endl;
        ans += (1.0 / (double)n) * pow(0.5, cnt);
    }
    printf("%.10f\n", ans);
    return 0;
}
