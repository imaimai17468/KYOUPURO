#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int n;
    cin >> n;
    int w[n];
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    int ans = 100000;
    for (int i = 0; i < n; i++) {
        int s1 = 0, s2 = 0;
        for (int j = 0; j < i; j++) {
            s1 += w[j];
        }
        for (int j = i; j < n; j++) {
            s2 += w[j];
        }
        ans = min(ans, abs(s1 - s2));
    }
    cout << ans << endl;
    return 0;
}
