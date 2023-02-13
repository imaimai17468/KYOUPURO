#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s, s + n);
    int cnt = 1;
    int m = 0;
    string ans;
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i + 1]) {
            cnt++;
        } else {
            if (cnt > m) {
                m = cnt;
                ans = s[i];
            }
            cnt = 1;
        }
    }
    cout << ans << endl;
    return 0;
}
