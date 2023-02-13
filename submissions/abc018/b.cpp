#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int i, j, k;
    string s;
    int n;
    cin >> s >> n;
    int l[n], r[n];
    for (i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }

    for (i = 0; i < n; i++) {
        reverse(s.begin() + l[i] - 1, s.begin() + r[i]);
    }

    cout << s << endl;
    return 0;
}
