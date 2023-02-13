#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, a, b;
    cin >> w >> a >> b;
    if (a < b) {
        if (w + a >= b && w + a <= w + b)
            cout << 0 << endl;
        else
            cout << b - (w + a) << endl;
    } else {
        if (w + b >= a && w + b <= w + a)
            cout << 0 << endl;
        else
            cout << a - (w + b) << endl;
    }
    return 0;
}
