#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, a, b;
    int dig, ans;
    cin >> x >> a >> b;
    ans = x - a;
    dig = ans / b;
    ans -= dig * b;
    cout << ans << endl;
    return 0;
}
