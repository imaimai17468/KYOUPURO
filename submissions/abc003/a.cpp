#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans = 0;
    long long m = 0;
    for (int i = 0; i < n; i++) {
        m += 10000;
        ans += m;
    }
    cout << ans / n << endl;
    return 0;
}
