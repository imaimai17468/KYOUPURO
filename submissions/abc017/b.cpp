#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    string s;
    cin >> s;
    int out = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        // cout << 1 << endl;
        if (s[i] == 'o' || s[i] == 'k' || s[i] == 'u') {
            continue;
        }
        if (i != 0 && s[i] == 'h' && s[i - 1] == 'c') {
            i--;
            continue;
        }
        out++;
    }
    if (out == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
