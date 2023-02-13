#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b) cout << c << endl;
    if (a == c) cout << b << endl;
    if (b == c) cout << a << endl;
    return 0;
}
