#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mi = 10000007;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n / i; j++) {
            if (n < i * j) continue;
            mi = min(mi, abs(i - j) + n - (i * j));
        }
    }
    cout << mi << endl;
    return 0;
}
