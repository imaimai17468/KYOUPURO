#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define mod 1000000007

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int lcm(int a, int b) { return a * b / gcd(a, b); }

int main() {
    int n, d;
    cin >> n >> d;
    int x[n][d];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            cin >> x[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            double sq = 0;
            if (i != j && i < j) {
                for (int k = 0; k < d; k++) {
                    sq += pow(abs(x[i][k] - x[j][k]), 2);
                }
                sq = sqrt(sq);
                if (ceil(sq) == floor(sq)) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
