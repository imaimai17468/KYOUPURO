#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int t1, t2;
    t1 = max(a, c);
    t2 = min(b, d);
    if (t2 - t1 < 0) {
        cout << '0' << endl;
        return 0;
    }
    cout << t2 - t1 << endl;
    return 0;
}
