#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define mod 1000000007

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int lcm(int a, int b) { return a * b / gcd(a, b); }

int comb(vector<vector<ll>> &v) {
    for (int i = 0; i < v.size(); i++) {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for (int i = 1; i < v.size(); i++) {
        for (int j = 1; j < i; j++) {
            v[i][j] = (v[i - 1][j - 1] + v[i - 1][j]) % mod;
        }
    }
}

int main() {
    int n, k;
    vector<vector<ll>> v(2000, vector<ll>(2000, 0));
    ll ans[4000];
    cin >> n >> k;
    comb(v);
    for (int i = 1; i < k + 1; i++) {
        ans[i] = (v[n - k + 1][i] * v[k - 1][i - 1]) % mod;
    }

    for (int i = 1; i < k + 1; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
