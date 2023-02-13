#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int p, q, r;
    cin >> p >> q >> r;
    cout << min({p + q, p + r, q + r}) << endl;
    return 0;
}
