#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = k; i <= n; i++) {
        ans++;
    }
    cout << ans << endl;
    return 0;
}
