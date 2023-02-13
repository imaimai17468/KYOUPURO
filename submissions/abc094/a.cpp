#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;
    if (a + b > x && a <= x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
