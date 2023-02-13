#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    for (int i = 0; i < n; i++) {
        if (a > b && a > c)
            a *= 2;
        else if (b > c)
            b *= 2;
        else
            c *= 2;
    }
    cout << a + b + c << endl;
    return 0;
}
