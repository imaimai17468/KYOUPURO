#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int n, x;
    cin >> n >> x;
    int l[n];
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    int ans = 0;
    int d = 0;
    for (int i = 0; i < n; i++) {
        d += l[i];
        if (d <= x) {
            ans++;
        }
    }
    cout << ans + 1 << endl;
    return 0;
}
