#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define mod 1000000007

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int lcm(int a, int b) { return a * b / gcd(a, b); }

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1, false);
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        a[num] = true;
    }
    vector<int> dp(n + 2, 0);
    dp[n] = 1;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i]) {
            dp[i] = 0;
            continue;
        }
        dp[i] = (dp[i + 1] + dp[i + 2]) % mod;
        // cout << dp[i] << endl;
    }
    cout << dp[0] << endl;
    return 0;
}
