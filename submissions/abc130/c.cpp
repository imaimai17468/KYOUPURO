#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    double w, h, x, y;
    cin >> w >> h >> x >> y;
    cout << w * h / 2 << " ";
    if (x == w / 2.0 && y == h / 2.0) {
        cout << 1;
    } else {
        cout << 0;
    }
    cout << endl;
    return 0;
}
