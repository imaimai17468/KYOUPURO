#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, x;
    cin >> a >> b >> x;
    while (1) {
        if (x % a == 0 && x % b == 0) break;
        x++;
    }
    cout << x << endl;
    return 0;
}
