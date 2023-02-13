#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    while (1) {
        if (a % 2 != 0) {
            a--;
        }
        a = a / 2;
        b += a;
        k--;
        if (k == 0) break;
        if (b % 2 != 0) {
            b--;
        }
        b = b / 2;
        a += b;
        k--;
        if (k == 0) break;
        // cout << a << " " << b << endl;
    }
    cout << a << " " << b << endl;
    return 0;
}
